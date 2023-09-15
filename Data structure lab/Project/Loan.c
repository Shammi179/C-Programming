#include<stdio.h>
void loan()
{
    printf("*******Welcome To Loan Section*******\n");
    printf("\n\n\tDo you have any account?\n\t[1] Yes\n\t[2] No\n");
    int a;
    scanf("%d",&a);
    if(a==1)
    {
        printf("\tEnter your account ID:");
        int id;
        scanf("%d",&id);
        printf("\n\tHere is our loan criteria:\n\t");
        printf("[1] Educational purpose\n\n\t    Range: Up to 500000\n\t    Monthly Installment:\n\t    [1] 12 Month - 7.80%%\n\t    [2] 24 Month - 10%%\n\t    [3] 36 Month - 13.30%%\n\n\t");
        printf("[2] Business purpose\n\n\t    Range: Up to 5000000\n\t    Monthly Installment:\n\t    [1] 12 Month - 10%%\n\t    [2] 24 Month - 12.89%%\n\t    [3] 36 Month - 14.90%%\n\n\t");
        printf("[3] Agricultural purpose\n\n\t    Range: Up to 200000\n\t    Monthly Installment:\n\t    [1] 12 Month - 7%%\n\t    [2] 24 Month - 8.89%%\n\t    [3] 36 Month - 11.30%%\n\n\t");
        printf("[4] Treatment purpose\n\n\t    Range: Up to 500000\n\t    Monthly Installment:\n\t    [1] 12 Month - 7.80%%\n\t    [2] 24 Month - 10%%\n\t    [3] 36 Month - 13.30%%\n\n\t");
        printf("[5] IT Farm \n\n\t    Range: Up to 3000000\n\t    Monthly Installment:\n\t    [1] 12 Month - 9.90%%\n\t    [2] 24 Month - 13.33%%\n\t    [3] 36 Month - 16.30%%\n\n\t");
        printf("[6] Other purpose\n\n\t    Range: Up to 200000\n\t    Monthly Installment:\n\t    [1] 12 Month - 6.88%%\n\t    [2] 24 Month - 8.67%%\n\t    [3] 36 Month - 11.30%%\n\n\t");
        int p,c;
        double am,s;
        printf("\tEnter Your purpose:");
        scanf("%d",&p);
        printf("\tEnter your amount:");
        scanf("%lf",&am);
        printf("\tEnter your installment criteria:");
        scanf("%d",&c);
        if(p==1&&c==1)
        {
            am=am/12.0;
            s=am;
            am=am/100;
            s=s+(am*7.80);
            printf("\n\tYou have to pay %.2lf BDT per month.\n\tIf you are interested,please go to the .... and complete the formalities to take loan.\n\tTHANK YOU!!!\n\t",s);
        }
       else if(p==1&&c==2)
        {
            am=am/24.0;
            s=am;
            am=am/100;
            s=s+(am*10.0);
            printf("\n\tYou have to pay %.2lf BDT per month.\n\tIf you are interested,please go to the .... and complete the formalities to take loan.\n\tTHANK YOU!!!\n\t",s);
        }
        else if(p==1&&c==3)
        {
            am=am/36.0;
            s=am;
            am=am/100;
            s=s+(am*13.30);
            printf("\n\tYou have to pay %.2lf BDT per month.\n\tIf you are interested,please go to the .... and complete the formalities to take loan.\n\tTHANK YOU!!!\n\t",s);
        }
        else if(p==2&&c==1)
        {
            am=am/12.0;
            s=am;
            am=am/100;
            s=s+(am*10);
            printf("\n\tYou have to pay %.2lf BDT per month.\n\tIf you are interested,please go to the .... and complete the formalities to take loan.\n\tTHANK YOU!!!\n\t",s);
        }
        else if(p==2&&c==2)
        {
            am=am/24.0;
            s=am;
            am=am/100;
            s=s+(am*12.89);
            printf("\n\tYou have to pay %.2lf BDT per month.\n\tIf you are interested,please go to the .... and complete the formalities to take loan.\n\tTHANK YOU!!!\n\t",s);
        }
        else if(p==2&&c==3)
        {
            am=am/36.0;
            s=am;
            am=am/100;
            s=s+(am*14.90);
            printf("\n\tYou have to pay %.2lf BDT per month.\n\tIf you are interested,please go to the .... and complete the formalities to take loan.\n\tTHANK YOU!!!\n\t",s);
        }
        else if(p==3&&c==1)
        {
            am=am/12.0;
            s=am;
            am=am/100;
            s=s+(am*7);
            printf("\n\tYou have to pay %.2lf BDT per month.\n\tIf you are interested,please go to the .... and complete the formalities to take loan.\n\tTHANK YOU!!!\n\t",s);
        }
        else if(p==3&&c==2)
        {
            am=am/24.0;
            s=am;
            am=am/100;
            s=s+(am*8.89);
            printf("\n\tYou have to pay %.2lf BDT per month.\n\tIf you are interested,please go to the .... and complete the formalities to take loan.\n\tTHANK YOU!!!\n\t",s);
        }
        else if(p==3&&c==3)
        {
            am=am/36.0;
            s=am;
            am=am/100;
            s=s+(am*11.30);
            printf("\n\tYou have to pay %.2lf BDT per month.\n\tIf you are interested,please go to the .... and complete the formalities to take loan.\n\tTHANK YOU!!!\n\t",s);
        }
        else if(p==4&&c==1)
        {
            am=am/12.0;
            s=am;
            am=am/100;
            s=s+(am*7.80);
            printf("\n\tYou have to pay %.2lf BDT per month.\n\tIf you are interested,please go to the .... and complete the formalities to take loan.\n\tTHANK YOU!!!\n\t",s);
        }
        else if(p==4&&c==2)
        {
            am=am/24.0;
            s=am;
            am=am/100;
            s=s+(am*10.0);
            printf("\n\tYou have to pay %.2lf BDT per month.\n\tIf you are interested,please go to the .... and complete the formalities to take loan.\n\tTHANK YOU!!!\n\t",s);
        }
        else if(p==4&&c==3)
        {
            am=am/36.0;
            s=am;
            am=am/100;
            s=s+(am*13.30);
            printf("\n\tYou have to pay %.2lf BDT per month.\n\tIf you are interested,please go to the .... and complete the formalities to take loan.\n\tTHANK YOU!!!\n\t",s);
        }
        else if(p==5&&c==1)
        {
            am=am/12.0;
            s=am;
            am=am/100;
            s=s+(am*9.90);
            printf("\n\tYou have to pay %.2lf BDT per month.\n\tIf you are interested,please go to the .... and complete the formalities to take loan.\n\tTHANK YOU!!!\n\t",s);
        }
        else if(p==5&&c==2)
        {
            am=am/24.0;
            s=am;
            am=am/100;
            s=s+(am*13.33);
            printf("\n\tYou have to pay %.2lf BDT per month.\n\tIf you are interested,please go to the .... and complete the formalities to take loan.\n\tTHANK YOU!!!\n\t",s);
        }
        else if(p==5&&c==3)
        {
            am=am/36.0;
            s=am;
            am=am/100;
            s=s+(am*16.30);
            printf("\n\tYou have to pay %.2lf BDT per month.\n\tIf you are interested,please go to the .... and complete the formalities to take loan.\n\tTHANK YOU!!!\n\t",s);
        }
        else if(p==6&&c==1)
        {
            am=am/12.0;
            s=am;
            am=am/100;
            s=s+(am*6.88);
            printf("\n\tYou have to pay %.2lf BDT per month.\n\tIf you are interested,please go to the .... and complete the formalities to take loan.\n\tTHANK YOU!!!\n\t",s);
        }
        else if(p==6&&c==2)
        {
            am=am/24.0;
            s=am;
            am=am/100;
            s=s+(am*8.67);
            printf("\n\tYou have to pay %.2lf BDT per month.\n\tIf you are interested,please go to the .... and complete the formalities to take loan.\n\tTHANK YOU!!!\n\t",s);
        }
        else if(p==6&&c==3)
        {
            am=am/36.0;
            s=am;
            am=am/100;
            s=s+(am*11.30);
            printf("\n\tYou have to pay %.2lf BDT per month.\n\tIf you are interested,please go to the .... and complete the formalities to take loan.\n\tTHANK YOU!!!\n\t",s);
        }

    }
    else if(a==2)
    {
        printf("Please create an account first.Enter C to create account or enter E to exit.\n\n");
        char c;
        scanf("%c",&c);
        //if(c=='C')
            //create();
            while(c=='E')
                break;
    }
}
int main()
{
    loan();
}
