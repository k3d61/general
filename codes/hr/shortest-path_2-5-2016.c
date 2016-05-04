// A C / C++ program for Dijkstra's single source shortest path algorithm.
// The program is for adjacency matrix representation of the graph
 
#include <stdio.h>
#include <malloc.h>
#include <math.h>
// These 2 functios for handling 2D array  by 1D array
//-----------------------------------------------------------------------
int GetElement( int *arr, int R, int C, int r, int c ) {
	return *( arr + C*c + r );

}

void SetElement( int *arr, int R, int C, int r, int c, int x ) {
	*( arr + C*c + r ) = x;
}
//-----------------------------------------------------------------------

void PrintArray( int *arr, int R, int C ) {

	int i = 0, j = 0;
	for ( i = 0 ; i < R  ; i++  )
	{
		printf( "\n" );
		for ( j = 0 ; j < C  ; j++  )
			printf( "%d\t", *( arr + i*C + j ) );

	}
}
 
// Funtion that implements Dijkstra's single source shortest path algorithm
// for a graph represented using adjacency matrix representation
int dijkstra( int *graph, int *distance, int R, int C, int r1, int c1, int r2, int c2 ) {
	if ( ( r1 == r2 ) && ( c1 == c2 ) )
		return 0;
	
	if ( (r1 + 1) < R  )
	{
		int temp_dist = GetElement( distance, R, C, r1, c1 ) + GetElement( graph, R, C, r1+1, c1 );
		if ( temp_dist < GetElement( distance, R, C, r1+1, c1 ) )
		{
			SetElement( distance, R, C, r1, c1, temp_dist );
			dijkstra ( graph, distance, R, C, r1+1, c1, r2, c2  );
		}
	}
	printf( "\noutput:\n" );
	PrintArray( distance, R, C );
}
 
// driver program to test above function
int main() {
   /* Let us create the example graph discussed above */
	int R, C;
	scanf("%d %d", &R, &C);
	int *graph = ( int * ) malloc ( R * C * sizeof( int ) );
 	int i = 0, j = 0;
	for ( i = 0 ; i < R  ; i++  )
		for ( j = 0 ; j < C  ; j++  )
			scanf( "%d", ( graph + i*C + j ) );
	int T;
	scanf("%d", &T);
	while ( T > 0 )
	{
		printf("\nCase: %d\n", T);
		int *distance = ( int * ) malloc ( R * C * sizeof( int ) );
	 	int i = 0, j = 0;
		for ( i = 0 ; i < R  ; i++  )
			for ( j = 0 ; j < C  ; j++  )
				*( distance + i*C + j ) = 65535;

		int r1, c1, r2, c2;
		scanf("%d%d%d%d", &r1, &c1, &r2, &c2 );
		SetElement( distance, R, C, r1, c1, 0 );
		dijkstra( graph, distance, R, C, r1, c1, r2, c2 );
		T--;
	}
	printf( "\n" );

	return 0;
}
