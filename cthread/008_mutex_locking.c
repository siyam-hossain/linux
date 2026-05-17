#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

pthread_mutex_t lock;

void* task(void* arg){
    int id = *(int*)arg;

    pthread_mutex_lock(&lock);
    printf("Thread %d has enterred the critical section\n",id);
    sleep(2);

    printf("Thread %d is leaving the critical section\n", id);
    pthread_mutex_unlock(&lock);

    return NULL;
}

int main(int argc, char const *argv[])
{
    pthread_t t1, t2;
    int a = 1, b = 2;

    pthread_mutex_init(&lock, NULL);

    pthread_create(&t1, NULL, task, &a);
    pthread_create(&t2, NULL, task, &b);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    pthread_mutex_destroy(&lock);
    return 0;
}
