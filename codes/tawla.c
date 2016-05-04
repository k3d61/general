#include <stdio.h>
void heapsort( int *, int );
void heapify( int *, int );
void adjust( int *, int );

int main()
{
	int N, arr[100000], i = 0, count = 0;
	scanf("%d", &N);
	i = 0;
	while ( i < N )
	{
		scanf("%d", &arr[i]);
		i++;
	}
	i = 0;
	while ( i < N )
	{
		i++;
	}
	i = 0;
	heapsort( arr, N);
	while ( i < N-1 )
	{
		arr[i+1] = arr[i] > arr[ i+1] ? arr[i]: arr[i+1] ;
		count += arr[i+1];
		i++;
	}
	printf("%d\n", count);
	return 0;
}

void heapsort( int *a, int n ) 
{
       	int i,t;
       	heapify( a, n );
       	for ( i = n-1 ; i > 0 ; i-- )
	{
       		t    = a[0];
       		a[0] = a[i];
       		a[i] = t;
   		adjust( a, i );
       	}
}
void heapify( int *a, int n ) 
{
       	int k,i,j,item;
       	for ( k = 1 ; k < n ; k++ )
	{
       		item = a[k];
       		i    = k;
       		j    = (i-1) / 2;
       		while( (i>0) && (item > a[j]) ) {
       			a[i] = a[j];
       			i    = j;
       			j    = (i-1)/2;
       		}
       		a[i] = item;
       	}
}
void adjust(int *a,int n) 
{
	int i,j,item;
       	j = 0;
       	item = a[j];
       	i = 2*j + 1;
       	while( i <= n-1 )
	{
       		if( i+1 <= n-1 )
       		   if( a[i] < a[i+1] )
       			    i++;
       		if( item < a[i] )
		{
       			a[j] = a[i];
       			j    = i;
       			i    = 2*j + 1;
       		} else
       		   break;
       	}
       	a[j] = item;
}
