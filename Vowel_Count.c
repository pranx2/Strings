#include<stdio.h>
#include<string.h>

char VF(char data[]);

int main(int argc, char const *argv[])
{
 char data1 [100];
 printf("Enter the data:");
 gets(data1);
 VF(data1);
 return 0;
}
    char VF(char data[]){
        
        int count=0;
        char a,e,i,o,u;
         for (int i=0; data[i]!= '\0' ; i++)
         {
                  if (data[i]== 'a'|| data[i]=='e'|| data[i]=='i'|| data[i]=='o'|| data[i]=='u')
                  {
                   printf("%c",data[i]);
                    count++;
                  }
                  
         }
        printf("\n%d\t",count);
    }