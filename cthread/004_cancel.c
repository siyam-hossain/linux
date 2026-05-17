#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void* worker(void* arg){
    while (1)
    {
        printf("Thread is working..\n");
        sleep(1);
    }
    return NULL;
}


int main(int argc, char const *argv[])
{
    pthread_t task;

    pthread_create(&task, NULL, worker, NULL);
    sleep(3);

    pthread_cancel(task);
    pthread_join(task, NULL);

    printf("Thread has been cancelled\n");
    
    return 0;
}
