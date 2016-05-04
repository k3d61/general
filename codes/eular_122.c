#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <malloc.h>
typedef struct Node 
{
        int data;
        struct Node *next;
        struct Node *prev;
}node;

node* insert(node *tem, int data);
int find(node *pointer, int key);
int min_divisible(int);
void display( node *head );

int main() {
/*	
	node *head = NULL;
	head = insert( head, 0 );	
	insert( head, 1);
	insert( head, 2);
	insert( head, 3);
	insert( head, 4);
	
	display( head );
*/	
    int T;
    scanf( "%d", &T);
    while ( T )
    {
        int n, current_mul = 0, mul = 0;
	node *head = NULL;
	scanf( "%d", &n);

	current_mul = min_divisible( n) ;	
	printf( "\nmin_div: %d", current_mul = min_divisible( n) );
	do
	{
		head = insert( head, current_mul );
		current_mul *= 2;
		mul++;
	} while ( current_mul < n );

	current_mul /= 2;
	mul--;
	//temp display
	display( head );
	if ( current_mul == n )
	{
		printf( "%d\n", mul );
		goto out;
	}
	current_mul = n - current_mul;
	printf( "\ncurrent_mul=%d", current_mul);

	out:
        T--;
    }

	printf("\n");
    return 0;
}
node* insert(node *tem, int data)
{
	node *head = tem;
//	printf( "one\n" );
	if( head == NULL )
	{
		head = (node *) malloc ( sizeof( node) );
		head -> next = NULL;
		head -> prev = NULL;
		head -> data = data;
		return head;
	}
	node *temp = (node *) malloc ( sizeof( node) );
	temp -> data = data;
//	printf( "here\n" );
	while ( ( head -> next != NULL ) && ( head -> data < data ) )
	{
		printf( "\t%d", head -> data);
		head = head -> next;
	}
//	printf( "two\n" );
	
	temp -> prev = head;
	temp -> next = head -> next;
	head -> next = temp;
	if( temp -> next != NULL )
		temp -> next -> prev = temp;
	return tem;
}

int find(node *pointer, int key)
{
        while( pointer != NULL )
        {
                if(pointer->data == key) //key is found.
                {
                        return 1;
                }
                pointer = pointer -> next;//Search in the next node.
        }
        return 0;
}
void display( node *head )
{
	printf("\n");
	while( head )
	{
		printf( "%d\n", head -> data );
		head = head -> next;
	}
}
int min_divisible(int n)
{
      int i = 2;
      while ( i <= n )
      {
          if ( n % i == 0 )
              return i;
          i++;
      }
    
}
