#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,n,s;
    char st[1000];
    while(scanf("%d",&t))
    {
        if(t==0) break;
        else
        {
            s=0;
            for(i=0;i<t;i++){
            scanf("%d",&n);
            getchar();
            gets(st);
            if(st[2]=='c') s=s+(n*120);
            else if(st[0]=='m'&&st[2]=='r') s=s+(n*85);
            else if(st[2]=='m') s=s+(n*85);
            else if(st[2]=='i') s=s+(n*70);
            else if(st[2]=='n') s=s+(n*56);
            else if(st[0]=='l'&&st[2]=='r') s=s+(n*50);
            else if(st[2]=='o') s=s+(n*34);
            }
            if(s>=110&&s<=130) printf("%d mg\n",s);
            else if(s<110) printf("Mais %d mg\n",110-s);
            else if(s>130) printf("Menos %d mg\n",s-130);

        }
    }
}
