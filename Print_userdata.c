#include<stdio.h>
int main(int argc, char const *argv[])
{
  char data[100];
  char scan;
  int i = 0;

  while (scan != '\n')//until user press enter;
  {
      scanf("%c",&scan);//scan data by character;
      data[i]=scan;//every time changing value;
      i++;//by i ++ ;
  }
          data[i] = '\0';//AT the end add null to stop the data;
          puts(data);//show the fully data;
 return 0;
}
