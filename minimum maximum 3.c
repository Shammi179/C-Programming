#include <stdio.h>
#define MIN(x,y)((x)<(y))?(x):(y)
#define MAX(x,y)((x)>(y))?(x):(y)
void main()
{
    int i,j,k,l,m,n,o,p,MIN,MAX;
    printf("First:");
    scanf("%d",&i);
    printf("second:");
    scanf("%d",&j);
    printf("third:");
    scanf("%d",&k);
    printf("fourth:");
    scanf("%d",&l);
    printf("fifth:");
    scanf("%d",&m);
    printf("sixth:");
    scanf("%d",&n);
    printf("seventh:");
    scanf("%d",&o);
    printf("eighth:");
    scanf("%d",&p);
    printf("\nthe minimum of %d %d %d %d %d %d %d %d is: %d ",i,j,k,l,m,n,o,p,MIN(MIN(MIN(MIN(MIN(MIN(MIN(i,j),k),l),m),n),o),p));
    printf("\nthe maximum of %d %d %d %d %d %d %d %d is: %d ",i,j,k,l,m,n,o,p,MAX(MAX(MAX(MAX(MAX(MAX(MAX(i,j),k),l),m),n),o),p));
}
