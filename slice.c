#include<stdio.h>
#include<string.h>
char slice(char value [],int n , int m);
int main(int argc, char const *argv[])
{
 char data [100];
    printf("Enter your data: ");
    gets(data);
      printf("Enter the slice n value :");
      int n;
      scanf("%d",&n);
        printf("Enter the slice m value :");
        int m;
        scanf("%d",&m);
    slice(data,n,m);
 return 0;
}
char slice(char value [],int n, int m){// n and m should be valid;
          char new[100];
 for (int i=n ,j=0 ; i <= m ; i++,j++)
 {
     new[j] = value[i];
 }
 puts(new);
}