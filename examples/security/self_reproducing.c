
char t[] = {'0', ' ', '}', ';',
'/', '*',
' ', '*', ' ', 'c', 'o', 'm', 'm', 'e', 'n', 't', '*', '/', '\n',
'#', 'i', 'n', 'c', 'l', 'u', 'd', 'e', ' ', '<', 's', 't', 'd', 'i', 'o', '.', 'h', '>', '\n',
'i', 'n', 't', ' ', 'm', 'a', 'i', 'n', '(', 'v', 'o', 'i', 'd', ')',
'{',
'i', 'n', 't', ' ', 'i', ';', 
'p', 'r', 'i', 'n', 't', 'f', '(', '"', 'c', 'h', 'a', 'r', 
               ' ', 't', '[', ']', ' ', '=', ' ', '{', '"', ')', ';',
'f', 'o', 'r', ' ', '(', 'i', '=', '0', ' ', ';', 't', '[', 'i', ']',
 				'!', '=', '0', ';', ' ', 'i', '+', '+', ')',
'p', 'r', 'i', 'n', 't', 'f', '(', '"', '%', 'd', ',', ' ', '"',',','t', '[', 'i', ']',')', ';', 
'p', 'r', 'i', 'n', 't', 'f', '(', '"', '%', 's', '"', ',', ' ', 't', ')', ';',
'r', 'e', 't', 'u', 'r', 'n', '(', '0', ')', ';',
'}',
0};

#include <stdio.h>

/*
* comment
*/
int main(void){
	int i;

	printf("char t[] = {");
    for (i=0; t[i] !=0; i++) 
		printf("%d, ", t[i]);
    printf("%s", t);
	return (0);
}
