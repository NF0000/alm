#include <stdio.h>
#include <string.h>
int main ( void ){
int check = 0;
char pass[8];
printf("Input Password\n");
scanf("%s",pass);
if ( strcmp(pass,"Pass") == 0 ){
check = 1;
}
if ( check ) printf("OK\n");
else printf("NG\n");
return 0;
}