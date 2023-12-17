#include<stdio.h>

int main(int argc, char const *argv[])
{
 //Initialized By Strings pointer->
   char *cng = "Hello World";
      puts(cng);
      cng = "Hello";
      puts(cng);
//initialized by array->
char cngName [] = "Hello World";
       //cngName = "Hello"; // cannot be change value...

 return 0;
}
