/*
	Allan Ogawa - 2023
	Etapa da Aplicação para o Estágio de Análise e Desenvolvimento 
	da Empresa Target Sistemas
*/

/*2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será 
	a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa
	 na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne 
	 uma mensagem avisando se o número informado pertence ou não a sequência.*/
	 
#include <stdio.h>	 
#include <string.h>
void exercicio2(){
	int a=1, b=0, aux= 0;
	int entrada;
	 	
	printf("Informe um numero: ");
	scanf("%d", &entrada);
	
	do{
		aux = a + b;  
		a = b;
		b = aux;
	} while(a < entrada);
	
	/*teste de mesa
		aux = 1 + 0			1 = 1 + 1			2 = 1 + 2			3 = 2 + 3			5 = 3 + 5					
		1 = 0				1 = 1				1 = 2				2 = 3				3 = 5
		0 = aux				1 = 2				2 = 3				3 = 5				5 = 8
	*/
	
	if(a == entrada)
		printf("\nNumero Pertence a sequencia de Fibonacci\n\n");
	
	else
		printf("\nNumero nao Pertence a sequencia de Fibonacci\n\n");
}
	 
	 
/*5) Escreva um programa que inverta os caracteres de um string.
IMPORTANTE:
a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
b) Evite usar funções prontas, como, por exemplo, reverse;*/

void exercicio5(){
	char palavra[25], aux[25];
	int x, tamanho;
	
	printf("Informe uma palavra: ");
	gets(palavra); 
	
	tamanho = strlen(palavra); //strlen é uma função que retorna o tamanho de uma string
	for (x=0; x<tamanho; x++)
		//a string auxiliar recebe o tamanho da palavra - x (do laço de repetição) - 1 (1 pois strings, em C, terminam com
		//um '\0' para determinar o final da string
		aux[tamanho-x-1] = palavra[x]; 
		
	//a ultima letra do aux recebe '\0' para definir que é o final da string
	aux[strlen(palavra)]='\0';
	
	
	/*teste de mesa na palavra 'P A T O \0'
			aux[4 - 0 - 1] = palavra[0]  -> aux[3] = palavra[0]  ->  _  _  _  P  _  = P
			aux[4 - 1 - 1] = palavra[1]  -> aux[2] = palavra[1]  ->  _  _  A  P  _  = A
			aux[4 - 2 - 1] = palavra[2]  -> aux[1] = palavra[2]  ->  _  T  A  P  _  = T
			aux[4 - 3 - 1] = palavra[3]  -> aux[0] = palavra[3]  ->  O  T  A  P  _  = O
	
			aux[4] = '\0' 										 ->  O  T  A  P \0  = O		
	*/
			
	printf("\na palavra em ordem inversa fica: %s\n",aux);
}


int main(void){
	exercicio2();		//executa exercicio 2
	system("pause");	//pausa o terminal e só despausa após alguma tecla
	system("cls");		//limpa a tela do terminal
	fflush(stdin);		//limpa o cache do teclado para prosseguir para o próximo exercicio sem erros
	exercicio5();		//executa o exercicio 5
}