/*

install.c
program to install system logger

*/
#include<stdio.h>
#include<stdlib.h>
int main(){

system("cd /etc/init.d/syslog && gcc karamagi.c -o mag");//return to syslog folder and compile the file karamagi.c
system("mv /etc/init.d/syslog/mag /etc/init.d/ ");//move the executable file mag to init.d
system("update-rc.d mag start 20 0 6 .");/*update system to run 'mag' at shut down and restart*/
system("cd /etc/init.d/syslog && gcc menu.c -o menu");//return to syslog folder compile the file menu.c containing the menu
return 0;
}
