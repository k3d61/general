#include<stdio.h>

int main()
{
	int no, index = 1, sum = 0, tmp, o = 0;
	scanf("%d", &no);
	printf("\n");
	tmp = no;
again:
	index = 1;
	sum = 0;
	while( index < no)
	{
		if( no % index == 0)
		{
//			printf("->%d\n", index);
			sum += index;
		}
		index ++;
	}
	if( sum == tmp)
	{
		printf("\"%d\" is perfect no\n", tmp);
	}
	else
	{
		printf("no = \"%d\", sum = \"%d\"\n", no, sum);
		no = sum;	
		o ++;
		if( o < 10)
			goto again;
	}
	create_list(8);
}
