#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<semaphore.h>

sem_t semaphore;

void* task(void* arg){
    int id = *(int*)arg;

    sem_wait(&semaphore);
    printf("Thread %d has entered the critical section\n",id);
    sleep(2);
    printf("Thread %d is leaving the critical section\n",id);
    sem_post(&semaphore);

    return NULL;
}



int main(int argc, char const *argv[])
{
    pthread_t t1, t2;
    int a=1, b=2;

    sem_init(&semaphore, 0, 1);

    int count = 0;

    while (count<5)
    {
        printf("count %d\n",count);
        
        pthread_create(&t1, NULL, task, &a);
        pthread_create(&t2, NULL, task, &b);
    
        pthread_join(t1, NULL);
        pthread_join(t2, NULL);
        count++;
    }
    

    sem_destroy(&semaphore);
    
    return 0;
}
