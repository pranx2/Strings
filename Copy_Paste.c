#include<stdio.h>
#include<string.h>

char salt (char user_password [] );
int main(int argc, char const *argv[])
{
      char user_password[100];
      printf("Enter your password : ");
      gets(user_password);
      printf("Your Password is :");
      puts(user_password);
      printf("After Salting the password: ");
      salt(user_password);
 return 0;

}

char salt(char user_password[]){
 char mix[]="1234";
 char New_password[200];
 strcpy(New_password,user_password);//Copy the password and paste it in new_password;
 strcat(New_password,mix);//creating a join mix in new password and mix value;
 puts(New_password);
}