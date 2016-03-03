#include <stdio.h>
#include <malloc.h>
#include <unistd.h>
#include <pthread.h>
pthread_mutex_t m1 = PTHREAD_MUTEX_INITIALIZER;

void th(void);
int main()
{
	pthread_t tid;
	int N, i = 0, arr[100000][2], Q = 0;
       	scanf( "%d", &N);
       	scanf( "%d", &Q);
	for ( i = 0 ; i < N ; i++ )
		for( int j = 0; j < 2; j++ )
			scanf("%d", &arr[ i ][ j ] );
	pthread_create( &tid , NULL , NULL, NULL );
	while ( Q > 0 )
	{
		int s, e, a, b, count = 0;
		pthread_mutex_lock( &m1 );
       		scanf( "%d%d%d%d", &s, &e, &a, &b);
		pthread_mutex_unlock( &m1 );
		for ( i = a ; i <= b ;  i++ )
		{
			if( ( arr[i][0] >= s ) && ( arr[i][1] <= e ) )
				count++;
		}
		printf("%d\n", count);
		Q--;
	}
}
void th( void )
{
	
}
