#include<stdio.h>
#include<string.h>
int main()
{
	FILE *ptr;
	char str[100];

	ptr=fopen("iotdata.txt","w");//w
	scanf(" %[^\n]s",str);
	while(strcmp(str,"BYE")!=0)
	{
		fputs(str,ptr);
		fputs("\n",ptr);
		scanf(" %[^\n]s",str);
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
