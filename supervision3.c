#include<stdio.h>
main()
{
	FILE *p;
	char data[1000];
	p=fopen("append.txt","a");
	if(p==NULL)
	{
		printf("Could not file open.");
	}
	else
	{
		printf("Enter data:-");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("Data add successful...");
	}
	fclose(p);
	printf("\n====================================\n");
	p=fopen("append.txt","r");
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
