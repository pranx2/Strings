#include<stdio.h>

 // void printStrings(char array[]);

int main(int argc, char const *argv[])
{
 //char name [] = {'P','R', 'A', 'N', 'T', 'O', '\0'}; //Two ways name formate;
 //char firstName[] = "PRANTO";//two ways name define;
 //char lastName [] ="KUMAR";
 //        printStrings(name);
 //        printStrings(lastName);
 /////2nd phrase->

 //  char FirstName [50];
 //  char LastName [50];
 //printf("Enter your name : ");
 //scanf("%s %s",FirstName);
 //printf("Your  name is : %s",FirstName);
                //gets & puts

                char name[100];
                fgets(name,100,stdin);
                puts(name);
 return 0;
}

//void printStrings(char array[]){
// for (int i = 0; array[i] !='\0'; i++)
// {
//        printf("%c",array[i]);
// }
// printf("\t");
//}