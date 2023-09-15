#include<stdio.h>
int main()
{
    int t,i;
    char s1[10],s2[10];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s %s",s1,s2);
        if(s1[0]=='p'&&s1[1]=='a'&&s2[0]=='p'&&s2[1]=='a') printf("Ambos venceram\n");
        else if(s1[0]=='p'&&s1[1]=='e'&&s2[0]=='p'&&s2[1]=='e') printf("Sem ganhador\n");
        else if(s1[0]=='a'&&s2[0]=='a') printf("Aniquilacao mutua\n");
        else if(s1[4]=='u'&&s2[4]=='a') printf("Jogador 1 venceu\n");
        else if(s1[4]=='a'&&s2[4]=='u') printf("Jogador 2 venceu\n");
        else if(s1[4]=='a'&&s2[4]=='l') printf("Jogador 1 venceu\n");
        else if(s1[4]=='l'&&s2[4]=='a') printf("Jogador 2 venceu\n");
        else if(s1[4]=='u'&&s2[4]=='l') printf("Jogador 1 venceu\n");
        else if(s1[4]=='l'&&s2[4]=='u') printf("Jogador 2 venceu\n");
    }
}

