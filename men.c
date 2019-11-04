/*
menu.c 
program to display the system logger menu
b-4-1
*/


#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
   char  *pass;
   pass=getpass("Enter your password:");//request systems admin to enter login password
   //check if password is correct 
 while( !strcmp(pass,"1234")){

char choice;
do{
/*display the system logger menu using printf*/
printf("\nwelcome\n what would like to do\n");
printf("1.........view disk usage information\n");
printf("2........view system usage\n");
printf("3........exit\n");
scanf("%c",&choice);//capture user choice

do{

switch(choice){
case '1':
//display disk usage menu
printf("1.........view current disk usage information\n");
printf("2.........view previous disk usage information\n");
printf("3.........exit\n");

int option;
scanf("%d",&option);//capture user disk menu option
if(option == 1){
system("cd /etc/init.d/syslog && gcc test.c -o test");//compile the test.c 
system("cd /etc/init.d/syslog && ./test"); //execute the executable file test
break;
}
else if(option == 2){system("nano p1.txt");//display previous disk usage using nano
break;
}

else if(option == 3){ break; 
}
else{printf("Invalid input sorry!\nRetry");}//output if input is invalid
break;

case '2':
system("nano p.txt");//display p.txt containing using gedit
break;
case '3':
exit(0);//exits from system logger

default: 
printf("sorry invalid input\n"); //output if input is invalid

break;
}

}while(choice != 3);
}while(1);
}
if(strcmp(pass,"1234")){printf("wrong password,now exiting....\n");}//output if wrong password input
   return 0;
}
