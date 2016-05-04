#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
 
void *func( void *vargp )
{
//	sleep(1);
	printf("\nfoffdofo");
	return NULL;
}
int main()
{
	pthread_t tid;
	printf("\nAbefore");
	pthread_create( &tid, NULL, func, NULL );
	pthread_join( tid, NULL );
	printf("\nafter");
 
	return 0;
 
}
