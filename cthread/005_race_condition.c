#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

int counter = 0;

void* increment(void* arg){
    for (int i = 0; i < 100000; i++)
    {
        counter++;
    }
    return NULL;
}

int main(int argc, char const *argv[])
{
    pthread_t task1, task2;

    pthread_create(&task1, NULL, increment, NULL);
    pthread_create(&task2, NULL, increment, NULL);


    pthread_join(task1, NULL);
    pthread_join(task2, NULL);

    printf("Final value of counter = %d\n",counter);

    return 0;
}
