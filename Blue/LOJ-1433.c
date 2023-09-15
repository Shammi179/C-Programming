#include<stdio.h>
#include<math.h>
int main()
{
    double ox,oy,ax,ay,bx,by,arc,ab,oa,r,theta;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf %lf %lf %lf %lf",&ox,&oy,&ax,&ay,&bx,&by);
        ab=sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay));
        oa=sqrt((ox-ax)*(ox-ax)+(oy-ay)*(oy-ay));
        theta=acos(((oa*oa)+(oa*oa)-(ab*ab))/(2.0*oa*oa));
        arc=oa*theta;
        printf("Case %d: %lf\n",i,arc);
    }
}
