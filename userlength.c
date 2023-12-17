#include<stdio.h>
//Using For-loop for count-> 
    char nameTake (char Name[]);
    char nameCount(char Name[]);

int main(int argc, char const *argv[])
{
 char Name[100];
 printf("Enter your Name :");
 fgets(Name,100,stdin);
 printf("Your name is : ");
 nameTake(Name);
 printf("Total number of name is :%d",nameCount(Name));
 return 0;
}
       char nameTake (char Name[]){
        for (int i = 0; Name[i] !='\0'; i++)
        {
         printf("%c",Name[i]);
        }
        return 0;
       }
       char nameCount(char Name[]){
        int count = 0;
        for (int i = 0; Name[i] !='\0'; i++)
        {
         count++;//At the End it also count "\0"
        }
        return count-1;//thus it minus the '\0';
       }