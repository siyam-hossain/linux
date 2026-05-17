#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

int main(int argc, char const *argv[])
{
    pthread_t task1, task2;

    task1 = pthread_self();
    task2 = pthread_self();

    if (pthread_equal(task1,task2))
    {
        printf("Both thread IDs are equal\n");
    }
    else{
        printf("Both thread Ids are not equal\n");
    }


    return 0;
}
