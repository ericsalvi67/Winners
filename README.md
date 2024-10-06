# Winners

Considere um vetor de estruturas do tipo PILOTO que contém as informações relativas a N pilotos de corrida: nome, equipe e pontuação das 22 provas realizadas. Os campos da estrutura são definidos conforme descrito a seguir:

>struct piloto {  
>  char nome[51];  
>  char equipe[51];  
>  int pontuacao[22];  
>};  
>typedef struct piloto PILOTO;  


Faça uma função em C que receba o vetor com N estruturas do tipo PILOTO e retorne o piloto campeão e o vice-campeão. O campeão será o piloto com maior pontuação, sendo que o total de pontos é dado pela soma da pontuação nas 22 provas. A função implementada deverá obrigatoriamente seguir o protótipo que é definido abaixo.

void calcula_classificacao(PILOVO v[N], PILOTO *campeao, PILOTO *vice) 

Faça ainda o programa principal que leia o vetor de estruturas. Esse programa deverá chamar a função implementada e, posteriormente, escrever o piloto campeão e o vice-campeão.
