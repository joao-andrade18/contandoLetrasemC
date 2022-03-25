#include<stdio.h>
#include<stdlib.h>


void contarVogaisConsoantes(char* str) {
    int vogais = 0;
    int consoantes = 0;
    int i = 0;
    char ch;
    for(i = 0; str[i] != '\0'; i++){
        ch = str[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vogais++;
             else if (ch == ' ')
                continue;
             else
                consoantes++;
    }
    printf("%d\t", vogais);
    printf("%d\n", consoantes);
}
int main ()
{
    char strings [100][80];
	int count;
	int numero = 0;
	scanf("%d%*c", &numero);
	for (count=0;count<numero;count++)
        {
        	gets (strings[count]);
        }
	for (count=0;count<numero;count++)
        {
        contarVogaisConsoantes(strings[count]);
	    }
    return 0;
}
