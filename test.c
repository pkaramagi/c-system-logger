/*
test.c 
program to compile and redirect output to textfiles
*/
#include<stdio.h>
#include<string.h>
int main(){
char fname[20];
printf("please enter file name for disk usage: ");
scanf("%s",fname);//capture file name
char fcommand[60] = "cd /etc/init.d/syslog && ./ziwa >" ;//array containing command to return to syslog folder and redirects output ./ziwa to file
strcat(fcommand,fname);//join command and file name
char fcom[60] = "cd /etc/init.d/syslog && ./ca >>";//array containing command to return to syslog folder and redirects output ./ca to  file
strcat(fcom,fname);//join command and file name
system("cd /etc/init.d/syslog && gcc ziwa.c -o ziwa");//return to syslog folder and compile ziwa.c 
system(fcommand);//run command
system("cd /etc/init.d/syslog && ./ziwa >> p1.txt");//return to syslog folder and redirects output ./ziwa to text file
system("cd /etc/init.d/syslog && gcc c.c -o ca");//return to syslog folder and compile c.c 
system(fcom);//run command
char fopn[60]="cd /etc/init.d/syslog && nano ";//return to syslog folder and open text file
strcat(fopn,fname);//join command and file name
system(fopn);//run command
return 0;
}
