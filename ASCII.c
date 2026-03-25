#include <stdio.h>
int main()
{
    printf("%c\n", '\'');
    printf("%s\n", "\"");
    printf("c:\\test\\code\\test.c\n");
    printf("\a");
    printf("%c\n", '\130'); //130是8进制，转换成10进制是88，以88作为ASCII码值的字符是'X'
    printf("%c\n", '\x30'); //x30中的30是16进制，转换成10进制是48，以48作为ASCII码值的字符是'0'
return 0;
}