#include <stdio.h>
int
main ( void ){
int i = 0;
if ( i < 0 ) printf("1: true\n");
else printf("1: false\n");
i = 0;
if ( i ) printf("2: true\n");
else printf("2: false\n");
if ( i = 10 ) printf("3: true\n");
else printf("3: false\n");
i = 1;
if ( i ) printf("4: true\n");
else printf("4: false\n");
i = -1;
if ( i ) printf("5: true\n");
else printf("5: false\n");
i = 10;
if ( i ) printf("6: true\n");
else printf("6: false\n");
i = -10;
if ( i ) printf("7: true\n");
else printf("7: false\n");
return 0;
}