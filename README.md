# Estagio Target Sistemas
Aplicação para o Estágio de Análise e Desenvolvimento para a empresa Target Sistemas baseada em Ribeirão Preto, São Paulo usando a linguagem tipo C

## 1) 
Observe o trecho de código abaixo:
	int INDICE = 13, SOMA = 0, K = 0;
	enquanto K < INDICE faça{
	K = K + 1;
	SOMA = SOMA + K;
	}
	imprimir(SOMA);
	Ao final do processamento, qual será o valor da variável SOMA?*/


//  SOMA = 91, com o loop se repetindo 13 vezes (começando com k=0 ... k=12)


## 3) 
Descubra a lógica e complete o próximo elemento:
a) 1, 3, 5, 7, ___ 		   // 9 , numeros impares

b) 2, 4, 8, 16, 32, 64, ____ 	   // 128 , a soma dele com ele mesmo

c) 0, 1, 4, 9, 16, 25, 36, ____    // 49 , pois 1 = 0 + 1 ; 4 = 1 + (1+2) ; 9 = 4 + (3+2) ; 16 = 9 + (5+2) [...]

d) 4, 16, 36, 64, ____		   // 100 , devido a soma +2 com os numeros elevados a quadrada (2², 4², 6², 8², 10²)

e) 1, 1, 2, 3, 5, 8, ____ 	   // 13 , sequencia de Fibonacci

f) 2, 10, 12, 16, 17, 18, 19, ____ // 200 , devido a sequencia de numeros naturais com a letra D


## 4) 
Dois veículos (um carro e um caminhão) saem respectivamente de cidades opostas pela mesma rodovia. 
O carro de Ribeirão Preto em direção a Franca, a uma velocidade constante de 110 km/h e o caminhão de Franca em direção a Ribeirão Preto 
a uma velocidade constante de 80 km/h. Quando eles se cruzarem na rodovia, qual estará mais próximo a cidade de Ribeirão Preto?
IMPORTANTE:
a) Considerar a distância de 100km entre a cidade de Ribeirão Preto <-> Franca.
b) Considerar 2 pedágios como obstáculo e que o caminhão leva 5 minutos a mais para passar em cada um deles e o carro possui tag de pedágio (Sem Parar)
c) Explique como chegou no resultado.

//	Ambos estarão na mesma distancia de Ribeirão Preto, pois no momento em que eles se cruzarem, eles estarão no mesmo espaço, um do lado do outro.




