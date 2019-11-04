#include <stdio.h>
#include <unistd.h>

int main()
{
   char  *pass;

   pass=getpass("Enter your password:");
   
 if( !strcmp(pass,"1234")){

int choice;

printf("welcome\n what would like to do\n");
printf("1.........view disk usage information\n");
printf("2........view system usage\n");
printf("3........exit\n");
scanf("%d",&choice);
switch(choice){
case 1:
system("cd /etc/init.d/syslog && gcc test.c -o test");
system("cd /etc/init.d/syslog && ./test");
break;

case 2:
system("nano p.txt");
break;

case 3:
printf("bye bye fool!!!");
break;

default: 
printf("sorry invalid input");

break;
}
}
else{printf("wrong password,now exiting....");}
   return 0;
}
