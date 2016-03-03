#include <stdio.h>
void heapsort( int *, int );
void heapify( int *, int );
void adjust( int *, int );
int  binary_search( int *, int, int, int );
int  linear_search( int *, int, int, int, int );

int main()
{
       	int n, i, *a, Q = 0;
       	scanf( "%d", &n);
       	scanf( "%d", &Q);
	a = (int *) malloc( sizeof(int) * n );
       	for ( i = 0; i < n ; i++ )
	{
       	  scanf( "%d", &a[i] );
		printf("\'%d-%d\'", i+1, a[i]);
		printf("\n");
	}
       	heapsort( a, n);
	printf("\nQ= %d", Q);
	//printf("sorted array:\n");
       	//for ( i = 0; i < n ; i++ )
     	  //printf( "\t%d-%d ", i, a[i] );
	//printf("\n");
	while( Q > 0 )
	{
		//printf("\n--------------------------------------\n");
		int K = 0, X = 0, b = 0, position = 0;
       		scanf( "%d", &K);
       		scanf( "%d", &X);
       		scanf( "%d", &b);
		position = linear_search( a, 0, n-1, K, b);
	//	printf("linear_search o/p= %d", position);
		if( b )
		{//smaller side
			//printf("\nkth greatest in left");
			//position += 1;
			printf("\tpos2= %d, x= %d", position, X);
			if( position < X )
			{
				printf("%d", -1);
      				//printf("\n");
				Q--;	
				continue;
			}
			position = position - X;	
			printf( "%d", a[position] );
      			//printf("\n");
		}
		else
		{//large side
			//printf("\nkth smallest in right");
			//printf("\npos1= %d", position);
			if ( position == -1 )
			{
				printf("%d", -1);
      				//printf("\n");
				Q--;	
				continue;
			}
			position = (n-1) - position;
			//printf("\tpos2= %d, x= %d", position, X);
			if ( position < X )
			{
				printf("%d", -1);
      				//printf("\n");
				Q--;	
				continue;
			}
			position = (n-1) - position;
			//printf("\tpos3= %d", position);
			position += X;
			//printf("\tpos4= %d", position);
			printf("%d", a[position] );
      			//printf("\n");
		}
		printf("\n");
		Q--;	
	}
      	//printf("\n");
}
int linear_search( int *a, int low, int up, int x , int b )
{
	//printf("\n%s", __func__);	
	while ( ( a[ low ] < x ) && ( low < up ) )
	{
		//printf("\t%d", a[low]);
		low++;
	}
	//printf("\n");
//	low--;
	
	if( x == a[low] )
		return low;
	if( low == up )
		return -1;
	if ( b == 1 )
		return low;
	return low-1;
}
int binary_search( int *a,int low, int up, int x)
{
	int i = 0, j = 0, c = 7;
	while ( up != low )
	{
		j = (low+up) / 2;
		if ( a[j] > x ) 
		{
			up = j-1;
		}
		else if ( a[j] < x )
		{
			low = j+1;
		}
		else
		{
			return j;
		}
	}
	return up+1;
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
