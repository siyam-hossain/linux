#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define BUFFER_SIZE 5
#define MAX_ITEMS 10

int buffer[BUFFER_SIZE];

int in = 0;
int out = 0;

pthread_mutex_t mutex;
sem_t empty, full;

void* producer(void* arg) {

    for (int item = 1; item <= MAX_ITEMS; item++) {

        sem_wait(&empty);
        pthread_mutex_lock(&mutex);

        buffer[in] = item;

        printf("Producer produced item %d at position %d\n", item, in);

        in = (in + 1) % BUFFER_SIZE;

        pthread_mutex_unlock(&mutex);
        sem_post(&full);

        sleep(1);
    }

    return NULL;
}

void* consumer(void* arg) {

    for (int i = 1; i <= MAX_ITEMS; i++) {

        sem_wait(&full);
        pthread_mutex_lock(&mutex);

        int item = buffer[out];

        printf("Consumer consumed item %d from position %d\n", item, out);

        out = (out + 1) % BUFFER_SIZE;

        pthread_mutex_unlock(&mutex);
        sem_post(&empty);

        sleep(2);
    }

    return NULL;
}

int main() {

    pthread_t prdc, consm;

    pthread_mutex_init(&mutex, NULL);

    sem_init(&empty, 0, BUFFER_SIZE);
    sem_init(&full, 0, 0);

    pthread_create(&prdc, NULL, producer, NULL);
    pthread_create(&consm, NULL, consumer, NULL);

    pthread_join(prdc, NULL);
    pthread_join(consm, NULL);

    pthread_mutex_destroy(&mutex);

    sem_destroy(&empty);
    sem_destroy(&full);

    return 0;
}