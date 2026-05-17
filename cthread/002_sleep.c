#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void* task(void* arg){
    long id = *(long*)arg;

    printf("Thread %lu started\n", id);
    sleep(2);
    printf("This %lu finished after sleeping\n", id);

    return NULL;
}

int main(int argc, char const *argv[])
{
    pthread_t task1, task2;

    int a=1, b=2;

    pthread_create(&task1, NULL, task, &a);
    pthread_create(&task2, NULL, task, &b);


    pthread_join(task1, NULL);
    pthread_join(task2, NULL);
    
    printf("Main thread finished\n");
    return 0;
}
