#include<stdio.h>

int main(){
	char a[100];
	scanf("%[^\n]", a);
	
	puts("#include <stdio.h>");
	puts("int main()");
	puts("{");
	printf("    printf(\"%%s\\n\",\"%s\");\n", a);
	puts("    return 0;");
	puts("}");
	
	
	
	return 0;
}
