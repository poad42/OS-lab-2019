#include<stdio.h>
int main()
{
	int fd;
	if((fd=open("file.dat"))==-1)
	{
		perror("cannot open file");
		exit(0);
	}
	else
		printf("File opened");
	return 0;
}
