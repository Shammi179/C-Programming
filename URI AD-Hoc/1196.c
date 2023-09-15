#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int i;
    while(gets(s))
    {
        for(i=0;i<=strlen(s);i++)
    {
        if(s[i]>='2'&&s[i]<='9') printf("%c",s[i]-1);
        else if(s[i]=='1') printf("`");
        else if(s[i]=='0') printf("9");
        else if(s[i]=='-') printf("0");
        else if(s[i]=='=') printf("-");
        else if(s[i]==92) printf("]");
        else if(s[i]==']') printf("[");
        else if(s[i]=='[') printf("P");
        else if(s[i]=='P') printf("O");
        else if(s[i]=='O') printf("I");
        else if(s[i]=='I') printf("U");
        else if(s[i]=='U') printf("Y");
        else if(s[i]=='Y') printf("T");
        else if(s[i]=='T') printf("R");
        else if(s[i]=='R') printf("E");
        else if(s[i]=='E') printf("W");
        else if(s[i]=='W') printf("Q");
        else if(s[i]==39) printf(";");
        else if(s[i]==';') printf("L");
        else if(s[i]=='L') printf("K");
        else if(s[i]=='K') printf("J");
        else if(s[i]=='J') printf("H");
        else if(s[i]=='H') printf("G");
        else if(s[i]=='G') printf("F");
        else if(s[i]=='F') printf("D");
        else if(s[i]=='D') printf("S");
        else if(s[i]=='S') printf("A");
        else if(s[i]=='/') printf(".");
        else if(s[i]=='.') printf(",");
        else if(s[i]==',') printf("M");
        else if(s[i]=='M') printf("N");
        else if(s[i]=='N') printf("B");
        else if(s[i]=='B') printf("V");
        else if(s[i]=='V') printf("C");
        else if(s[i]=='C') printf("X");
        else if(s[i]=='X') printf("Z");
        else if(s[i]==' ') printf(" ");
    }
    printf("\n");
    }
    return 0;
}
