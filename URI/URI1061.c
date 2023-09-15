/*hs=hour start,ms=min start,ss=sec start,he=hour end,me=min end,se=sec end,dss=day sec start,dse=day sec end*/
#include<stdio.h>
int main()
{
    int start,end,hs,ms,ss,he,me,se,r,day,hour,min,sec,dss,dse;
    scanf("%*s %d",&start);
    scanf("%d %*s",&hs);
    scanf("%d %*s",&ms);
    scanf("%d",&ss);
    scanf("%*s %d",&end);
    scanf("%d %*s",&he);
    scanf("%d %*s",&me);
    scanf("%d",&se);
    dss=(start*24*60*60)+(hs*3600)+(ms*60)+ss;
    dse=(end*24*60*60)+(he*3600)+(me*60)+se;
    r=dse-dss;
    day=r/86400;
    r%=86400;
    hour=r/3600;
    r%=3600;
    min=r/60;
    sec=r%60;
    printf("%d dia(s)\n",day);
    printf("%d hora(s)\n",hour);
    printf("%d minuto(s)\n",min);
    printf("%d segundo(s)\n",sec);
    return 0;
}
