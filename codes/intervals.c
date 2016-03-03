#include <stdio.h>
#include <malloc.h>
int main()
{
	int N, i = 0, **arr, Q = 0;
       	scanf( "%d", &N);
       	scanf( "%d", &Q);
	arr = (int **) malloc( sizeof(int) * N );
	while( i < N)
	{
		arr[i] = (int *) malloc( sizeof(int) * 2 );
		i++;
	}
	for ( i = 0 ; i < N ; i++ )
		for( int j = 0; j < 2; j++ )
			scanf("%d", &arr[ i ][ j ] );
/*	for ( i = 0 ; i < N ; i++ )
	{
		printf("\n");
		for( int j = 0; j < 2 ; j++ )
		{
			printf("%d\t", arr[ i ][ j ] );
		}
	}	*/
	//recur( a, 0, 0, N, M);
	while ( Q > 0 )
	{
		int s, e, a, b, count = 0;
       		scanf( "%d%d%d%d", &s, &e, &a, &b);
		for ( i = a ; i <= b ;  i++ )
		{
			if( ( arr[i][0] >= s ) && ( arr[i][1] <= e ) )
			{
				count++;
			}
		}
		printf("\n%d", count);
		Q--;
	}
	for( i=0; i < N; i++ )
		free( arr[ i ] );
	free(arr);
	printf("\n");
}
