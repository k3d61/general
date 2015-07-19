#include<stdio.h>

void display( float *count, float ccount)
{
	int in = 0, out = 0;
	float s =0;	
	while( in < 256)
	{
		for( out = 0; out < 4; out ++)	
		{
			s = s + count[ in + out];
			printf("%d-%f\t", in + out, s);
		}
		in += 4;
		printf("\n");
//		s += (count[ in + out]/ccount) * 100;
	}
	printf("-------------------------------------------------\n");
	printf("s = %f, count = %f\n", s, ccount);
	printf("-------------------------------------------------\n");
}

int main()
{
	FILE *f = fopen("index.html","r");
	if( !f)
	{
		printf("Error: index.html not found\n");
		return 0;
	}
	float count[ 256] = { 0 };
	float ccount = 0;
	display( count, 0);
	
	char ch;
	while( ( ch = fgetc( f)) != EOF)
	{
		count[ (int)ch] ++;
		ccount ++;
	}
	printf("count = %f\n", ccount);
	display( count, ccount);
	return 0;
}
