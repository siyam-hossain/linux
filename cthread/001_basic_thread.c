#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void* show_message(void* arg){
    printf("Thread is running\n");
    printf("Thread ID: %lu\n",pthread_self());
    
    return NULL;
}

int main(int argc, char const *argv[])
{
    pthread_t task1, task2;

    pthread_create(&task1, NULL, show_message, NULL);
    pthread_create(&task2, NULL, show_message, NULL);
    
    pthread_join(task1, NULL);
    pthread_join(task2, NULL);

    printf("Both threads have completed execution\n");


    return 0;
}
