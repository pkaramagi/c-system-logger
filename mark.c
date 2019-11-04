/*
mark.c
program to compile kraiba.c and execute it 
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
system("cd /etc/init.d/syslog && gcc kraiba.c -o kriba");// return to syslog folder and compile kraiba.c
system("cd /etc/init.d/syslog && ./kriba >> p.txt");//return to syslog folder and redirect output of ./kraiba to p.txt

return 0;
}
