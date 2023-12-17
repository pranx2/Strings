#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
         // char name [100];       
         // fgets (name,100,stdin);//Input data;
         char name[]="PRANTO";//Declared Data;
          printf("total number of name is :");
          int length = strlen(name);
          printf("%d",length);//If input data taken then it will count '\0' also,
                              //so every time -1 will be do in this case; 
          printf("\nName is :");
          puts(name); 
 return 0;
}
