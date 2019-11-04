/*
c.c
program to advise user on disk usage
*/
#include <stdio.h>
#include <stdlib.h>  
#include <string.h>
  
int per;
  
typedef struct {
  
int count; // counter to use the word's occurrence
char word[20];
} word;
  
       
int main() {
word myword[50];
FILE *myfile;

if ((myfile = fopen("p2.txt", "r")) == NULL) {
 
printf("\n Error:Can't open file \n ");
exit(0);
  
      }
  
char str[150];
int position = 0;
  
while (fscanf(myfile, "%s", str) != EOF) {
strcpy(myword[position].word ,str);
position++;
  
if (position == 50) {
break;
  
      }
  
     
 }

  
per = atoi(myword[11].word);

if(per>70){

printf("DANGER!!!!,PLEASE DELETE SOME FILES");
}
else{ printf("thank you for using space efficiently");}
return 0;
  
      }
