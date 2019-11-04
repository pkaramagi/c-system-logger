/*

karamagi.c
program to compile and run mark.c
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

system("cd /etc/init.d/syslog && gcc mark.c -o mark");//return to syslog folder and compile mark.c 
system("cd /etc/init.d/syslog && ./mark");//return to syslog folder and run ./mark 
return 0;
}
