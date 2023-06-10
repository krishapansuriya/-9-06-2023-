#include<stdio.h>
main ()
{
	FILE *p;
	char data[1000];
	p=fopen("read.txt","r");
    if(p==NULL)
    {
    	printf("Could not file open.");
	}
	else
	{
		while(fgets(data,25,p)!=NULL)
		{
			printf("%s",data);
		}
	}
	fclose(p);
}
