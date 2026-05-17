#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

pthread_mutex_t lock;
int counter = 0;


void* increment(void* arg){
    for (int i = 0; i < 100000; i++)
    {
        pthread_mutex_lock(&lock);
        counter++;
        pthread_mutex_unlock(&lock);
    }
    return NULL;
}

int main(int argc, char const *argv[])
{
    pthread_t t1, t2;
    int a = 1, b = 2;

    pthread_mutex_init(&lock, NULL);

    pthread_create(&t1, NULL, increment, &a);
    pthread_create(&t2, NULL, increment, &b);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);


    printf("Final value of counter = %d\n",counter);

    pthread_mutex_destroy(&lock);
    return 0;
}
