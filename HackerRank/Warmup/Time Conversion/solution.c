#include <stdio.h>
#include <string.h>

int main() {
	char a[2];
	int hr,min,sec;
	scanf("%d:%d:%d%s",&hr,&min,&sec,a);
	
	if (strcmp(a,"PM")==0 && hr!=12) hr += 12 ;
    if (strcmp(a,"AM")==0 && hr==12) hr = 0 ;
	  

	 printf("%02d:%02d:%02d",hr,min,sec); 

    return 0;
}
