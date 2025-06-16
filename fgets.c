#include <stdio.h>
int
main ( void ){
char pass[8];
printf("fgets sample\n");
fgets(pass,8,stdin);
printf("%s\n",pass);
return 0;
}