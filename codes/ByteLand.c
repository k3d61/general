#include <stdio.h>
#include <malloc.h>
int recur( int **, int,int, int, int );

int main()
{
	int N, M, **a;
	int i = 0, j = 0;
	scanf("%d%d", &N, &M);
	a = (int **) malloc( sizeof(int) * N );
	while( i < N)
	{
		a[i] = (int *) malloc( sizeof(int) * M );
		i++;
	}
	for ( i = 0 ; i < N ; i++ )
		for( j = 0; j < M; j++ )
		{
			scanf("%d", &a[ i ][ j ] );
		}
	for ( i = 0 ; i < N ; i++ )
	{
		printf("\n");
		for( j = 0; j < M; j++ )
		{
			printf("%d\t", a[ i ][ j ] );
		}
	}	
	//recur( a, 0, 0, N, M);
	
	for( i=0; i < N; i++ )
		free( a[ i ] );
	free(a);
	printf("\n");
	return 10;
}

int recur( int **a, int n,int m, int N, int M )
{
	
}
