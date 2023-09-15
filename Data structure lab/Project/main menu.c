#include<stdio.h>
int c,num;
char mm='M';
char pass[100]="sas";
void main_menu()
{

    printf("***************BANK MANAGEMENT SYSTEM***************\n\n");
    printf("         *****Welcome to the Main Menu*****         \n\n");
    printf("\t1.Create new account\n\t2.Upadate information of exsisting account\n\t3.Transaction\n");
    printf("\t4.Check the details\n\t5.Remove exsisting account\n\t6.View customer's list\n\t7.Exit\n\n\n");
    printf("Enter your choice: ");
    scanf("%d",&c);
    if(c==3)
    transaction();
}
void transaction()
{
    int t,a,i,am,z,p=0;
    int prev=1000;
    printf("**********Transaction**********\n\n");
    printf("\t1.Deposit\n\t2.Withdraw\n\n\tEnter your choice: ");
    scanf("%d",&t);
    if(t==1)
    {
        printf("Do you have any account?\n\t1.Yes\n\t2.No\n");
        printf("\tEnter 1 or 2:");
        scanf("%d",&a);
        if(a==1)
        {
            printf("Enter your account number: ");
            scanf("%d",&num);
            for(i=1001; i<1099; i++)
            {
                if(i==num){
                        p++;
                    for(i=1; i<=4; i++)
                    {
                        if(i==4){ printf("You provide wrong password 3 times.Your account has been blocked for a temporary time.\n");
                        break;}
                        else{
                        printf("Enter password:");
                        scanf("%s",pass);
                        if(pass[0]=='s'&&pass[1]=='a'&&pass[2]=='s')
                        {
                            printf("How much money you want to deposit?\nEnter ammount: ");
                            scanf("%d",&am);
                            printf("Congrats!\nDeposit SUCCESSFULL!!!\nYour previous balance :%d\nYour Present balance: %d\n\n",prev,prev+am);
                            break;
                        }
                        else
                        {
                            printf("Sorry. The password you provided did not match,\nPlease try again.\n");
                            continue;
                        }
                        }
                    }
                }

            }
            if(p==0)
                {
                    printf("Sorry.You have no account or you provide a wrong number.Please try again or Create a account first.\n");
                    printf("Enter M to go back to the main menu:");
                    scanf("%c",&mm);
                    if(mm=='M')
                   main_menu();
                }

        }
        else if(a==2)
        {
            printf("Please go to the main menu and create an account first.\n\n");
            printf("Enter M to go back to the main menu:");
            scanf("%c",&mm);
            if(mm=='M')
            main_menu();
        }
    }
}
int main()
{
    main_menu();
    transaction();
    return 0;
}


