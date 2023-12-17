#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
        //  char oldstring[] = "oldstring";
        //  char newstring[] = "Newstring";
        //  strcpy(oldstring,newstring);
        //  puts(oldstring);
        char name1[]="PRANTO";
        char name2[]="Pritom";
        strcpy(name1,name2);
        puts(name1);//name1 value is changed;
        puts(name2);
 return 0;
}
