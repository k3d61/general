#include <stdio.h>
#include <malloc.h>
void storage(int *arr, int n)
{
	int start[n], end[n], cap = 0;
	start [ 0 ] = arr[0];
	end [ n-1 ] = arr[n-1];
	for(int i = 1; i < n; i++)
		start[ i ] = start[ i-1 ] > arr[ i ] ? start[ i-1 ] : arr[ i ] ;
	for(int i = n-2; i >= 0; i--)
		end[ i ] =  end[ i+1 ] > arr[ i ] ? end[ i+1 ]: arr[ i ] ;
	for(int i = 0; i < n; i++)
		cap += (  start[ i ] > end[ i ] ? end[ i ] : start[ i ] ) - arr[ i ];
	printf("%d\n", cap);     
}
 
int main()
{
	int *arr, N, i;
	scanf("%d", &N);
	for( i = 0 ; i < N ; i++ )
		scanf("%d", &arr[i]);
	storage( arr, N );
	return 0;
}
