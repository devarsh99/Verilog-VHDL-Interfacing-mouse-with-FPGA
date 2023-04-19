#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void ChildProcess();
void ParentProcess();

int main()
{
pid_t pid;
pid = fork();
if(pid==0){
ChildProcess();
}
else{
ParentProcess();
}
return 0;
}

void ChildProcess(){
printf("Child Process\n");
}
void ParentProcess(){
printf("Parent Process\n");
}

