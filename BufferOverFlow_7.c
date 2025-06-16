#include <stdio.h>
#include <string.h>
int main ( void ){
int check = 0;
char pass[8];
printf("%d-%d-%d-%d\n"
,&pass[0],&pass[1],&pass[7],&check);
printf("%c-%c-%c-%d\n"
,pass[0] ,pass[1] ,pass[7] ,check);
printf("Input Password\n");
scanf("%s",pass);
printf("%c-%c-%c-%d\n"
,pass[0] ,pass[1] ,pass[7] ,check);
if ( strcmp(pass,"Pass") == 0 ){
check = 1;
}
printf("%c-%c-%c-%d\n"
,pass[0] ,pass[1] ,pass[7] ,check);
if ( check ) printf("OK\n");
else printf("NG\n");
return 0;
}