#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>
struct dirent *dptr;
void main(int argc, char argv[])
{
	char buff[100];
	DIR *dirp;
	printf("\n\nEnter Directory name");
	scanf("%s",buff);
	if(!(dirp=opendir(buff)))
	{ 
	printf("Directory does not exist");
	exit(1);
	}
while(dptr=readdir(dirp))
{
printf("%s\n",dptr->d_name);
}
closedir(dirp);
}

