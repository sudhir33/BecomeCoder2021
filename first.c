#include<stdio.h>
void even_odd(int num)
{
	int r,o=1,e=1,even=0,odd=0;
	while(num)
	{
		r=num%10;
		num=num/10;
		if(r%2)
		{
			odd=odd+r*o;
			o=o*10;
		}
		else
		{
			even=even+r*e;
			e=e*10;
		}
	}
	printf("%d  %d",even,odd);
}


int main()
{
	int num;
	scanf("%d",&num);
	
	even_odd2(num);
	//printf("%d",num);
	
	return 0;
}
/*
user defined 
sub program
2PARTS:
fun call
fun def

mainly:
one type: with args with return value  99%
second: with args without return value


i/p:
32345 3 1

o/p:
12145




*/





