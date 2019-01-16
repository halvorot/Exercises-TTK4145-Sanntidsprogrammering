#include <pthread.h>
#include <stdio.h>
#include <semaphore.h> 

int i = 0;
sem_t Semaphore;

// Note the return type: void*
void* incrementingThreadFunction(){
    for (int j = 0; j < 1000000; j++) {
    sem_wait(&Semaphore);
	i++;
    sem_post(&Semaphore);
    }
    return NULL;
}

void* decrementingThreadFunction(){
    for (int j = 0; j < 1000000; j++) {
	sem_wait(&Semaphore);
	i--;
    sem_post(&Semaphore);
    }
    return NULL;
}


int main(){
    sem_init(&Semaphore, 0, 1); 
    pthread_t incrementingThread, decrementingThread;
    
    pthread_create(&incrementingThread, NULL, incrementingThreadFunction, NULL);
    pthread_create(&decrementingThread, NULL, decrementingThreadFunction, NULL);
    
    pthread_join(incrementingThread, NULL);
    pthread_join(decrementingThread, NULL);
    
    printf("The magic number is: %d\n", i);
    sem_destroy(&Semaphore); 
    return 0;
}
