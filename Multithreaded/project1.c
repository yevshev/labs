/* Yevgeniy Shevekhman 
 * Project 1 - Muti-threaded producer-consumer implementation
 *
 * compile and run with: make project1
 */

#include <stdio.h>
#include <pthread.h>

#define MAX_ITEMS 64			/* how many items to produce */
#define FULL 8				/* when shared buffer is full */
#define EMPTY 0				/* when shared buffer is empty */
#define NUM_THREADS 4			/* number of producer/consumer threads */

pthread_mutex_t	the_mutex;
pthread_cond_t	condc, condp;	/* used for signaling */
int buffer = 0;	/* buffer used between producer and consumer */

void *producer(void *ptr)  /* produce data */
{				
	int i; 
	for (i = 1; i <= MAX_ITEMS; i++) {
		pthread_mutex_lock(&the_mutex);	/* get exclusive access to buffer */
		while (buffer == FULL) {
			printf("producer %d found the buffer full, waiting for consumer to consume\n", i);
			pthread_cond_wait(&condp, &the_mutex);	
		}
		buffer++;	/* put item in buffer */
		printf("producer %d produced one item\n", i);	
		pthread_cond_signal(&condc);	/* wakeup consumer */
		pthread_mutex_unlock(&the_mutex);	/* release access to buffer */
	}
	pthread_exit(0);
}


void *consumer(void *ptr) /* consume data */
{				
	int i;
	for (i = 1; i <= MAX_ITEMS; i++) {
		pthread_mutex_lock(&the_mutex);	/* get exclusive access to buffer */
		while (buffer == EMPTY) {
			printf("consumer %d found the buffer empty, waiting for producer to produce\n", i);
			pthread_cond_wait(&condc, &the_mutex);	/* wakeupproducer */	

		}
		buffer--;	/* remove item from buffer  */
		printf("consumer %d consumed one item\n", i);
		pthread_cond_signal(&condp);
		pthread_mutex_unlock(&the_mutex);	/* release access to buffer */
	}
	pthread_exit(0);
}


int main(int argc, char **argv)
{
	int i;
	pthread_t pro[NUM_THREADS], con[NUM_THREADS];
	pthread_mutex_init(&the_mutex, NULL);
	pthread_cond_init(&condc, NULL);
	pthread_cond_init(&condp, NULL);
	
	for (i = 0; i < NUM_THREADS; i++) {		
		pthread_create(&con[i], NULL, consumer, NULL);
		pthread_create(&pro[i], NULL, producer, NULL);
	}
    
	for (i = 0; i < NUM_THREADS; i++) {	
		pthread_join(pro[i], NULL);
		pthread_join(con[i], NULL);
	}
    
	pthread_cond_destroy(&condc);
	pthread_cond_destroy(&condp);
	pthread_mutex_destroy(&the_mutex);
    
    return 0;
}
