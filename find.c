#include<stdio.h>
#include<string.h>
  void checker (char str[],char ch);

    int main(int argc, char const *argv[])
    {
     char data[100];
     printf("Enter your data: ");
     gets(data);
     char ch ;
     printf("Enter your searching data:");
     scanf("%c",&ch);
checker(data,ch);
     return 0;
    }
    void checker (char str[],char ch){
     for (int i = 0; str[i] != '\0' ; i++)
     {
         if (str[i] == ch )
         {
          printf("The word is  present :)");
            printf("\t%c",ch);
          return ;
         }
     }
     printf("The word is not present :(");
    }