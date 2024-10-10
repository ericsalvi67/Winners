#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 6

typedef struct piloto
{
    char nome[51];
    char equipe[51];
    int pontuacao[22];
}PILOTO;

void calcula_classificacao(PILOTO v[N],PILOTO *campeao,PILOTO *vice)
{
    int i,j;
    int soma[N];
    int p1,p2;
    *campeao=v[0];
    *vice=v[1];

    for(i=0;i<N;i++)
    {
        soma[i]=0;
        for(j=0;j<22;j++)
        {
            soma[i]+=v[i].pontuacao[j];
        }   
    }
    p1=soma[0];
    p2=soma[0];

    for(i=0;i<N;i++)
    {
        if(soma[i]>p1)
        {
            *vice=*campeao;
            *campeao=v[i];
            p2=p1;
            p1=soma[i];
        }
        else if (soma[i]>p2)
        {
            *vice=v[i];
            p2=soma[i];
        }
    }
}

void escreve_piloto(PILOTO v[N])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        printf("NOME PILOTO: ");
        gets(v[i].nome);
        printf("EQUIPE: ");
        gets(v[i].equipe);

        for(j=0;j<22;j++)
        {
            printf("CORRIDA %d - PONTUACAO: ",j+1);
            scanf("%d", &v[i].pontuacao[j]);
        }
        fflush(stdin);
    }
}

int main()
{
    PILOTO v[N];
    PILOTO campeao,vice;

    escreve_piloto(v);
    calcula_classificacao(v,&campeao,&vice);

    printf("CAMPEAO - NOME %s - EQUIPE %s\n",campeao.nome,campeao.equipe);
    printf("VICE - NOME %s - EQUIPE %s\n",vice.nome,vice.equipe);
}
