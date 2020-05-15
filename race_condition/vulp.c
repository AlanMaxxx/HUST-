#include<stdio.h>
#include<string.h>
#include<unistd.h>
#define DELAY 10000

int main()
{
	char *fn="/tmp/XYZ";
	char buffer[60];
	FILE *fp;
	long int i,num;
	int a1,a2,a3,a4,a5;
	char *fn1,*fn2,*fn3,*fn4;
	/*get user input*/
	scanf("%50s",buffer);
	/*Principle of Least Privilege*/
//	uid_t euid=geteuid();
//	seteuid(getuid());//effective uid=real uid
	if(a1=!access(fn,W_OK))
	{
		/*
		/*add probability of success* /
		for(i=0;i<DELAY;i++)
		{
			num=i*i;
		}
		*/
		//Nesting n levels
		*fn1=*fn;
		a2=!access(fn1,W_OK);
		*fn2=*fn1;
		a3=!access(fn2,W_OK);
   		*fn3=*fn2;
		a4=!access(fn3,W_OK);
		*fn4=*fn3;
		a5=!access(fn4,W_OK);
		if((a1==a2)&&(a2==a3)&&(a3==a4)&&(a4==a5))
		{
			fp=fopen(fn4,"a+");
			fwrite("\n",sizeof(char),1,fp);
			fwrite(buffer,sizeof(char),strlen(buffer),fp);
			fclose(fp);
		}
		else
		{
			printf("No permission\n");
		}
	}
	else
	{
		printf("No permission\n");
	}
//	seteuid(euid);//recover privilege
	return 0;
}
