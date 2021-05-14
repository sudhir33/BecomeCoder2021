#include<stdio.h>
int main()
{
	FILE *ptr;
	char ch,file_name[100];
	scanf("%[^\n]s",&file_name);
	ptr=fopen(file_name,"r");
	if(ptr)
	{
		ch=fgetc(ptr);
		while(ch!=EOF)
		{
			printf("%c",ch);
			ch=fgetc(ptr);
		}
	}
	else
	{
		printf("File not found");
	}
	fclose(ptr);
	return 0;
}
/*
file pointer
FILE *ptr;
open: fopen()
syn: fptr=fopen("file_name","mode")
mode-->  read write append
          r    w     a
          
fgetc()
EOF-->end of file

*/
