#include <stdio.h>
int
main ( void ){
char pass[8];
printf("gets sample\n");
gets(pass);
printf("%s\n",pass);
return 0;
}