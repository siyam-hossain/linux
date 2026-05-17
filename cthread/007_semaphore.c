// two threads attempt to update the same shared counter


#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<semaphore.h>

int counter = 0;
sem_t semaphore;

void* increment(void* arg){
    for (int i = 0; i < 100000; i++)
    {
        sem_wait(&semaphore);
        printf("thread id: %lu , %d\n",pthread_self(),counter);
        counter++;
        sem_post(&semaphore);
    }
    return NULL;
}

int main(int argc, char const *argv[])
{
    pthread_t t1, t2;

    sem_init(&semaphore, 0, 1);

    pthread_create(&t1, NULL, increment, NULL);
    pthread_create(&t2, NULL, increment, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    printf("Final value of counter = %d\n", counter);
    sem_destroy(&semaphore);

    return 0;
}
