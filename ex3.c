#include<stdio.h>
#include<unistd.h>
//using namespace std;
int main(int argc, char *argv[]){
	int pid;
	char *args[2];
	pid=fork();
	printf("%d\n",pid);
	if(pid==0)
	{
		args[0]="./a.out";
		args[1]=NULL;
		execv("./a.out",args);
		printf("%d\n",pid);
		printf("oops\n");
	}
	else{
		printf("%d\n",pid);
		printf("Not a problem\n");
	}
	return 0;
}
