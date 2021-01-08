#include <stdio.h>
#include <string.h>
int main (){
	char s,str1[15]={"WILL MAKE "},str2[10]={"AMERICAN "};
	char str3[10]={"GREAT "},str4[10]={"AGAIN!!"};
	scanf("%c",&s);
	printf("%c ",s);
	strcat(str1,str2);
	strcat(str1,str3);
	strcat(str1,str4);
	puts(str1);
	return 0;
}
