#include<stdio.h>
#include<string.h>


int main(int argc, char const *argv[])
{
    char name1[]="A";
    char name2[]="B";
    printf("Both name is : %s and %s",name1,name2);
    int compare = strcmp(name1 ,name2);//If 0 -> equal;
                                       //if 1 -> positive(1st is bigger then 2nd);
                                       //if -1 -> negative(2nd is bigger then 1st);
    printf("\n%d\n",compare);
 return 0;
}
