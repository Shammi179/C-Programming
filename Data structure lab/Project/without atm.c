#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<windows.h>
void create_created_acccount();
void create_acc();
void update();
void menu();
void remove_account();
void transaction();
void close();
void display_account_created(int oparetion);
void admin_panel();
void f_menu();
void Start();
void cash(int oparetion);
int num_of_account=0;
 FILE *ptr;
struct account
{
    char  id[1000];
    char name[100];
    int age ;
    char phone[100];
    char password[100];
    double cash;
    int  account_validation;
    struct account *next;
    struct account *previous;
}*start=NULL,*end=NULL,*current;
struct employe
{
    char name[100];
    int age ;
    char phone[100];
    char post[100];
    struct account *next;
    struct account *previous;
}*start1=NULL,*end1=NULL,*current1;




///file work
void create_created_acccount()
{
    int i;
   // FILE *ptr;
    ptr=fopen("accounts_information.txt","a+");
    for(i=0; i<num_of_account; i++)
    {
        int date,month,year;
        struct account *new_account;
        new_account=(struct account*)malloc(sizeof(struct account));
        if(i>0)
            fgetc(ptr);
        fscanf(ptr,"%[^\n]s",new_account->name);
        fscanf(ptr,"%s",new_account->id);
        fscanf(ptr,"%s",&new_account->password);
        fscanf(ptr,"%s",&new_account->phone);
        fscanf(ptr,"%d",&new_account->age);
        fscanf(ptr,"%lf",&new_account->cash);
        fscanf(ptr,"%d",&new_account->account_validation);
        new_account->next=NULL;
        new_account->previous=NULL;
        if(start==NULL)
        {
            start=new_account;
            current=new_account;
        }
        else
        {
            current->next=new_account;
            new_account->previous=current;
            current=new_account;
            end=current;
        }
    }
    fclose(ptr);
}
void close()
{
    int i;
    //FILE *ptr;
    ptr=fopen("accounts_information.txt","w");
    struct account *temp=start;
    while(temp!=NULL)
    {
        fprintf(ptr,"%s\n",temp->name);
        fprintf(ptr,"%s\n",temp->id);
        fprintf(ptr,"%s\n",temp->password);
        fprintf(ptr,"%s\n",temp->phone);
        fprintf(ptr,"%d\n",temp->age);
        fprintf(ptr,"%lf\n",temp->cash);
        fprintf(ptr,"%d\n",temp->account_validation);
        temp=temp->next;
    }
    fclose(ptr);
    ptr=fopen("number_of_account.txt","w");
    fprintf(ptr,"%d",num_of_account);
    fclose(ptr);
}
///file work





void loan()
{
    system("cls");
    struct account *temp=start;
    printf("\n\n\t\t\t\t\t\t  THE DUMBS NATIONAL BANK");
    printf("\n\n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO YOUR BANKING APP \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\tDo you have any account?\n\t\t[1] YES\n\t\t[2] NO\n");
    int a;
    printf("\n\tEnter your choice: ");
    scanf("%d",&a);
    if(a==1)
    {
        printf("\n\n\n\t\t\t\t ****Fill up these correctly for seeing ACCOUNT Details**** \n");
        char id[100];
        printf("\n\tEnter your ID: ");
        scanf("%s",id);
        getchar();
        while(temp!=NULL)
        {
            if(strcmp(id,temp->id)==0)
                break;
            temp=temp->next;
        }
        if(temp==NULL)
        {
            printf("\n\n\tAccount is not found!!!\n\n\tPlease create your account first :) \n\n");
            printf("Press Enter for Home: ");
            getchar();
            menu();
            return;
        }
        int limite=0;
        while(1)
        {
            printf("\tEnter Your password: ");
            char pass[1000];
            scanf("%s",pass);
            if(strcmp(temp->password,pass)!=0)
            {
                limite++;
                printf("\t*****************Wrong Password!!!\n");
                if(limite==3)
                {
                    //getchar();
                    printf("\tYou have to remind your original password.\n");
                    printf("Press Enter for Home: ");
                    getchar();
                    menu();
                    break;
                }
            }
            else
                break;
        }
    }
    else if(a==2)
    {
        printf("\n\n\t\tEnter C to create account or E to exit:");
        char c;
        scanf("%c",&c);
        if(c=='C')
            create_acc();
        else
            menu();
    }
    system("cls");
    printf("\n\n\t\t\t\t\t\t  THE DUMBS NATIONAL BANK");
    printf("\n\n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO YOUR BANKING APP \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\t\t  THE DUMBS BANKING LOAN FEATURES\n");
    printf("\n\t\t\t\tNO  -   PURPOSE    -   RANGE(Up to)    -   INTEREST RATE\n\n");
    printf("\t\t\t\t[1] -  Education   -  BDT 200,000/=    -   (9-12) %%\n");
    printf("\t\t\t\t[2] -  Business    -  BDT 50,00,000/=  -   (14-17) %%\n");
    printf("\t\t\t\t[3] -  Agriculture -  BDT 300,000/=    -   (7-10) %%\n");
    printf("\t\t\t\t[4] -  IT Industry -  BDT 20,00,000/=  -   (13-16) %%\n");
    printf("\t\t\t\t[5] -  Treatment   -  BDT 10,00,000/=  -   (6-9) %%\n");
    printf("\t\t\t\t[6] -  Others      -  BDT 500,000/=    -   (10-13) %%\n");
    printf("\n\t\t\tInstallment should be completed between 36 Months(3 Years)\n");
    printf("\n\t\tAre you interested to take loan?\n\t\t[1] YES\n\t\t[2] NO\n");
    int l;
    printf("\tEnter your choice: ");
    scanf("%d",&l);
    if(l==1)
    {
        printf("\tEnter Purpose:");
        int p;
        scanf("%d",&p);

        double am,ir,res;
        int m;
        if(p==1)
            ir=9.00,printf("\n\t\t\t\tYou have selected for Educational Purpose");
        else if(p==2)
            ir=14.00,printf("\n\t\t\t\tYou have selected for Business Purpose");
        else if(p==3)
            ir=7.00,printf("\n\t\t\t\tYou have selected for Agricultural Purpose ");
        else if(p==4)
            ir=13.00,printf("\n\t\t\t\tYou have selected for IT Industry Purpose ");
        else if(p==5)
            ir=6.00,printf("\n\t\t\t\tYou have selected for Treatment Purpose ");
        else if(p==6)
            ir=10.00,printf("\n\t\t\t\tYou have selected for Others Purpose");
        printf("\n\t\tEnter amount:");
        scanf("%lf",&am);
        printf("\t\tEnter desired months:");
        scanf("%d",&m);
        res=cal(m,am,ir) ;
        printf("\n\tCongratulations!!!\n\tYou are eligible for loan!!!\n\tYou have to pay BDT %.2lf/= per month.\n",res);
        printf("\tYou have to come to our bank with necessary documents and complete the formalities to take loan.\n");
        printf("\tWe are eager to give you the loan.\n\t\tThank You!!!\n");
        getch();
        menu();
    }
    else if(l==2)
        menu();
}
int cal(int m,double am,double ir)
{
    double s,mm;
    s=am/m;
    if(m<=12)
    {
        mm=(ir*s)/100;
        s+=mm;
    }
    else if(m>12&&m<=24)
    {
        ir+=1.50;
        mm=(ir*s)/100;
        s+=mm;
    }
    else if(m>24&&m<=36)
    {
        ir+=1.50;
        mm=(ir*s)/100;
        s+=mm;
    }
    return s;
}



void transaction()
{
    system("cls");
    int opt,a,i,am,z,p=0;
    int prev=1000;
    printf("\n\n\t\t\t\t\t\t  THE DUMBS NATIONAL BANK");
    printf("\n\n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO YOUR BANKING APP \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\t\t\t**********Transaction**********\n\n");
    printf("\t[1] Deposit\n\t[2] Withdraw\n\t[3] Fund Transfer\n\t[4] Main menu\n\n\nEnter your choice: ");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1:
        cash(1);
        break;
    case 2:
        cash(2);
        break;
    case 3:
        cash(3);
        break;
    case 4:
        menu();
        break;
    }

}
void cash(int oparetion)
{
    system("cls");
    printf("\n\n\t\t\t\t\t\t  THE DUMBS NATIONAL BANK");
    printf("\n\n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO YOUR BANKING APP \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    if(oparetion==1)
        printf("\n\t\t\t\t**********Deposit**********\n\n");
         else if(oparetion==2)
        printf("\n\t\t\t\t**********Withdraw**********\n\n");
    if(oparetion==3)
        printf("\n\t\t\t\t**********Fund Transferring**********\n\n");
    char id[100];
    printf("Enter your account ID:");
    scanf("%s",id);
    struct account *temp,*temp2;
    temp=start;
    while(temp!=NULL)
    {

        int compare;
        compare=strcmp(id,temp->id);
        if(compare==0)
            break;
        temp=temp->next;

    }
    if(temp==NULL)
        {
            printf("\n\n\tAccount is not found!!!\n\n\tPlease create your account first :) \n\n");
            printf("Press Enter for Home: ");
            getchar();
            menu();
            return;
        }
    else
    {
        if(temp->account_validation!=0)
        {
            int compare,limit_of_password=0;
wrong:
            printf("Enter Your Password:");
            char password[100];
            scanf("%s",password);
            compare=strcmp(password,temp->password);
            if(compare!=0)
            {
                limit_of_password++;
                printf("\t*****************Wrong Password!!!\n");
                if(limit_of_password==3)
                {
                    printf("Your Account Has been Deactivated!!\n");
                    temp->account_validation=0;
                    close();
                    printf("Press Enter for main menu:");
                    getchar();
                    getchar();
                    system("cls");
                    menu();
                    return;
                }
                goto wrong;
            }
            else
            {
                double money;
                char transfer_id[1000];
try_aging:
                if(oparetion==3)
                    printf("\tEnter transfer Money: ");
                else if(oparetion==2)
                    printf("\tEnter Withdraw Money: ");
                else
                    printf("\tEnter Deposit Money: ");
                scanf("%lf",&money);

                if(money+500>temp->cash&&(oparetion==2||oparetion==3))
                {
                    printf("Sorry you do not have enough money \n");
                    printf("You have : %.2lf\n",temp->cash);
                    printf("\t\t\t[1] Try again\t\t[2] Return\nEnter your choice : ");
                    int opt;
                    scanf("%d",&opt);

                    switch(opt)
                    {
                    case 1:
                        goto try_aging;
                    }
                    system("cls");
                    transaction();
                    return;
                }
                else if(oparetion==1)
                {
                    temp->cash+=money;
                    close();
                    getchar();
                    printf("\n\n\t\t\tMoney is Deposit successfully:\n\n");
                    printf("\nNow your Balance : BDT %.2lf/=\n\n",temp->cash);
                    printf("Press Enter for Home : ");
                    getchar();
                    system("cls");
                    transaction();
                    return;
                }
                else if(oparetion==2)
                {
                    temp->cash-=money;
                    close();
                    getchar();
                    printf("\n\n\t\t\tMoney is Withdraw successfully:\n\n");
                    printf("\nNow your Balance : BDT %.2lf/=\n\n",temp->cash);
                    printf("Press Enter for Home :");
                    getchar();
                    system("cls");
                    transaction();
                    return;
                }
                while (1)
                {
                    printf("Enter transfer Id:");
                    scanf("%s",transfer_id);
                    temp2=start;
                    while(temp2!=NULL)
                    {
                        int compear;
                        compare=strcmp(transfer_id,temp2->id);
                        if(compare==0)
                            break;
                        temp2=temp2->next;

                    }
                    if(temp2==NULL)
                    {
                        printf("Account not found\n");
                    }
                    else
                        break;
                }
                temp2->cash+=money;
                temp->cash-=money;
                printf("Money has been transfered successfully!!\n");
                close();
                getchar();
                printf("\nNow your Balance : %.2lf/=\n\n",temp->cash);
                printf("Press Enter for Home:");
                getchar();
                transaction();
                return;
            }
        }
        else
        {
            printf("Your account is Inactive\n");
            printf("Press [1] Account Active :");
            int atv;
            scanf("%d",&atv);
            system("cls");
            if(atv==1)
            {
                admin_panel();
                return;
            }
            else
            {
                menu();
                return;
            }
        }
    }
}

/*
 incomplete  do not use
struct account search(struct account *ptr)
{
    struct account *temp=start;
    while(temp!=NULL)
    {
        if(strcmp(temp->id,id_for_search)==0)break;
        temp=temp->next;

    }
    *ptr=temp;
    ///for search use search(receiving pointer address (&ptr) And use id_for_search global variable for search any id)

}*/
void update()
{
    struct account *temp=start;
    printf("\n\n\t\t\t\t\t\t  THE DUMBS NATIONAL BANK");
    printf("\n\n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO YOUR BANKING APP \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    char id[100];
    printf("\n\n\t\tEnter your ID: ");
    scanf("%s",id);
    getchar();
    while(temp!=NULL)
    {
        if(strcmp(id,temp->id)==0)
            break;
        temp=temp->next;
    }
    if(temp==NULL)
        {
            printf("\n\n\tAccount is not found!!!\n\n\tPlease create your account first :) \n\n");
            printf("Press Enter for Home: ");
            getchar();
            menu();
            return;
        }
    int limite=0;
    while(1)
    {

        printf("\n\t\tEnter Your password:");
        char pass[1000];
        scanf("%s",pass);
        if(strcmp(temp->password,pass)!=0)
        {
            limite++;
            printf("\t*****************Wrong Password!!!\n");
            if(limite==3)
            {
                getchar();
                printf("Press Enter for Home:");
                getchar();
                system("cls");
                break;
            }
        }
        else
        {
            printf("Press [1] Password &&[2] Phone :");
            int oparetion;
            scanf("%d",&oparetion);
            if(oparetion==1)
            {
                printf("\n\t\tEnter your New password:");
                scanf("%s",temp->password);
                printf("\n\tPassword is Change successfully!!\n");
            }
            else
            {

                printf("\n\tEnter your New Phone Number:");
                scanf("%s",temp->phone);
                printf("\n\tPhone Number is Change successfully!!\n");

            }
            close();
            getchar();
            printf("Press Enter for Home:");
            getchar();
            menu();
            return;
        }
    }
}
void remove_account()
{
    struct account *temp=start,*temp2;
    printf("\n\n\t\t\t\t\t\t  THE DUMBS NATIONAL BANK");
    printf("\n\n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO YOUR BANKING APP \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    char id[100];
    printf("\n\n\t\tEnter your ID:");
    scanf("%s",id);
    getchar();
    while(temp!=NULL)
    {
        if(strcmp(id,temp->id)==0)
            break;
        temp=temp->next;
    }
    if(temp==NULL)
        {
            printf("\n\n\tAccount is not found!!!\n\n\tPlease create your account first :) \n\n");
            printf("Press Enter for Home: ");
            getchar();
            menu();
            return;
        }
    int limite=0;
    while(1)
    {

        printf("Enter Your password:");
        char pass[1000];
        scanf("%s",pass);
        if(strcmp(temp->password,pass)!=0)
        {
            limite++;
            printf("\t*****************Wrong Password!!!\n");
            if(limite==3)
            {
                getchar();
                printf("Press Enter for Home:");
                getchar();
                menu();
                return;
            }
        }
        else
            break;
    }
    ///still have problem to slove do not use

    if(temp->next==NULL)
        temp->previous->next=NULL;
    else if(temp->previous==NULL)
        start=temp->next;
    else
    {
        temp->next->previous=temp->previous;
        temp->previous->next=temp->next;
    }
    num_of_account--;
    close();
    getchar();
    printf("\n\n\n\t\t\t\tPress Enter for home:");
    getchar();
    menu();
    return;

}

void display_account_created(int oparetion)
{
    printf("\n\n\t\t\t\t\t\t  THE DUMBS NATIONAL BANK");
    printf("\n\n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO YOUR BANKING APP \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");

    struct account *temp=start;
    if(oparetion==1)
    {
        printf("\n\n\n\t\t\t\t\t All ACCOUNT Details \n");
        while(temp!=NULL)
        {
            printf("\t\tName : %s\n",temp->name);
            printf("\t\tACCOUNT ID : %s\n",temp->id);
            printf("\t\tPassword : %s\n",temp->password);
            printf("\t\tAge : %d\n",temp->age);
            printf("\t\tPhone : %s\n",temp->phone);
            printf("\t\tBalance : TK %.2lf/=\n",temp->cash);
            if(temp->account_validation==1)
                printf("\t\tAccount is Active\n");
            else
                printf("\t\tAccount is Inactive\n");
            printf("\n\n");
            temp=temp->next;
        }
    }
    else
    {
        printf("\n\n\n\t\t\t\t ****Fill up these correctly for seeing ACCOUNT Details**** \n");
        char id[100];
        printf("\n\tEnter your ID: ");
        scanf("%s",id);
        getchar();
        while(temp!=NULL)
        {
            if(strcmp(id,temp->id)==0)
                break;
            temp=temp->next;
        }
        if(temp==NULL)
        {
            printf("\n\n\tAccount is not found!!!\n\n\tPlease create your account first :) \n\n");
            printf("Press Enter for Home: ");
            getchar();
            menu();
            return;
        }
        int limite=0;
        while(1)
        {
            printf("\tEnter Your password: ");
            char pass[1000];
            scanf("%s",pass);
            if(strcmp(temp->password,pass)!=0)
            {
                limite++;
                printf("\t*****************Wrong Password!!!\n");
                if(limite==3)
                {
                    getchar();
                    printf("\tYou have to remind your original password.\n");
                    printf("Press Enter for Home: ");
                    getchar();
                    menu();
                    break;
                }
            }
            else
            {
                printf("\n\n\n\t\t\t\t\t Here is your ACCOUNT Details \n\n");
                printf("\t\tName : %s\n",temp->name);
                printf("\t\tACCOUNT ID : %s\n",temp->id);
                //printf("\t\tPassword : %s\n",temp->password);
                //printf("\t\tAge : %d\n",temp->age);
                printf("\t\tPhone : %s\n",temp->phone);
                printf("\t\tBalance : TK %.2lf/=\n",temp->cash);
                if(temp->account_validation==1)
                    printf("\t\tAccount is Active\n");
                else
                    printf("\t\tAccount is Inactive\n");
                printf("\n\n");
                getchar();
                printf("Press Enter for Home:");
                getchar();
                menu();
                return;
            }
        }
    }
}
void create_acc()
{
    num_of_account++;
    int date,month,year;
    struct account *new_account;
    new_account=(struct account*)malloc(sizeof(struct account));
    printf("\n\n\t\t\t\t\t\t  THE DUMBS NATIONAL BANK");
    printf("\n\n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO YOUR BANKING APP \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\t\t****Fill up and Create your own Account****\n\n");
    printf("\n\t\t\tEnter Today's Date \n\t\t\t(DD/MM/YYYY): ");
    scanf("%d/%d/%d",&date,&month,&year);
    getchar();
    printf("\n\t\t\tEnter Your Name: ");
    gets(new_account->name);
    printf("\n\t\t\tEnter Your Password: ");
    scanf("%s",&new_account->password);
    sprintf(new_account->id,"%d",year*10000+num_of_account);
    printf("\n\t\t\tEnter Your Phone number: ");
    scanf("%s",&new_account->phone);
    printf("\n\t\t\tEnter Your Age: ");
    scanf("%d",&new_account->age);
    printf("\n\t\t\tFirst Deposit(more than 500/=): ");
    new_account->cash=0;
    scanf("%lf",&new_account->cash);
    printf("\n\t\t\t\t\t.:*:. Congratulations .:*:.");
    printf("\n\t\tYour Account is successfully created, Here is your Account ID : \n");
    printf("\n\t\t\t\tYour ACCOUNT ID is -> %s\n\n",new_account->id);
    new_account->account_validation=1;
    new_account->next=NULL;
    new_account->previous=NULL;
    close();
    if(start==NULL)
    {
        start=new_account;
        current=new_account;
    }
    else
    {
        current->next=new_account;
        new_account->previous=current;
        current=new_account;
        end=current;
    }
    getchar();
    printf("Press Enter for main menu: ");
    getchar();
    menu();
    return;
}
void menu()
{
    system("cls");
    int choice;
    printf("\n\n\t\t\t\t\t\t  THE DUMBS NATIONAL BANK");
    printf("\n\n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO YOUR BANKING APP \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\t[1] Create new account\n\t\t\t\t[2] Check your Balance\n\t\t\t\t[3] Transaction\n\t\t\t\t[4] Loan\n\t\t\t\t[5] Update Password or Phone Number\n\t\t\t\t[6] Removing existing account\n\t\t\t\t[7] Password Recovery\n\t\t\t\t[8] Exit\n\n\n\n\n\t\t\t\t Enter your choice: ");
    scanf("%d",&choice);

    system("cls");
    switch(choice)
    {
    case 1:
        create_acc();
        break;
    case 2:
        display_account_created(2);
        break;
    case 3:
        transaction();
        break;
    case 4:
        loan();
        break;
    case 5:
        update();
        break;
    case 6:
        remove_account();
        return;
    case 7:
        admin_panel();
        return;
    case 8:
        f_menu();
        break;
    }
}
void f_menu()
{
    int c;
    printf("\n\n\t\t\t\t\t\t  THE DUMBS NATIONAL BANK");
    printf("\n\n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO YOUR BANKING APP \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\t[1] BANK SECTION \t[2] ATM SECTION \t[3] ADMIN PANEL\n\t\t\n\n\n\n\n\n\nEnter your choice & Enter [4] to EXIT: ");
    scanf("%d",&c);
    system("cls");
    switch(c)
    {
    case 1:
        menu();
        break;
    /*case 2:atm();
    break;*/
    case 3:
        admin_panel();
        break;
    case 4:
        break;
    }
}
void Start()
{
    FILE *ptr;
    ptr=fopen("number_of_account.txt","a+");
    fscanf(ptr,"%d",&num_of_account);
    create_created_acccount();
    fclose(ptr);
}
int main()
{
    Start();
    system("color 0F");
    //struct account *temp=start;
    f_menu();
    printf("\n\n\t\t\t\t\t.:*:. Congratulations .:*:.\n\n");
    printf("\n\n\n\n\t\t\t****Wish you a very good day form DUMBS Banking. Hope I'll see you again.****\n\n\n\t\t\t\tThe Project successfully Shutdown ^_^ ^_^ ^_^\n\n\n\n");
    close();
    getch();

}







///ADMIN PANEL

void admin_panel()
{
    system("cls");
    printf("\n\n\t\t\t\t\t\t  THE DUMBS NATIONAL BANK");
    printf("\n\n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO YOUR BANKING APP \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\t\t\t*****Administration*****");
    printf("\n\n\t\t***Only Bank Administration can access this, Please go to the Bank then the Admin can help you.\n");
    char admin[]="Dumbs_Rocking",pass[100];
    char blocking_id[100];
    getchar();
jump:
    printf("\n\n\n\t\t\t\tEnter Password:" );
    gets(pass);
    if(strcmp(pass,admin)==0)
    {
jump1:
        system("cls");
        printf("\t\t\t\t\t\t*****Administration*****\n\n");
        printf("\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Chose operation \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
        printf("\n\n\t\t\t[1] Bank Accounts\n\t\t\t[2] Account Block\n\t\t\t[3] Account Active\n\t\t\t[4] Employe Managment\n\t\t\n\n\n\n\n\n\nEnter your choice & Enter [5] for main menu: ");
        int option;
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            system("cls");
            printf("\n\n\t\t\t\tNumbers of created accounts:%d\n\n",num_of_account);
            display_account_created(1);
            printf("Press enter for back:");
            getchar();
            getchar();
            goto jump1;
            break;
        case 2:
block:
            printf("Enter Account id:");
            scanf("%s",blocking_id);
            struct account *temp=start;
            while(temp!=NULL)
            {
                if(strcmp(temp->id,blocking_id)==0)
                    break;
                temp=temp->next;
            }
            if(temp==NULL)
            {
                printf("Wrong ID \n");
                printf("Press [1] Try again [2] Menu");
                int opt;
                scanf("%d",&opt);
                switch(opt)
                {
                case 1:
                    goto block;

                }
                goto jump1;
                return;
            }
            else
            {
                printf("Press [1] confirm :");
                int cfr;
                scanf("%d",&cfr);
                switch(cfr)
                {
                case 1:
                    temp->account_validation=0;
                    close();
                    printf("Account has been blocked\n");
                    printf("Press enter to back : ");
                    getchar();
                    getchar();
                    close();
                    goto jump1;
                }
                goto jump1;
                return;
            /*case 4:
               employe_manegment();
               break;*/
            case 5:
                system("cls");
                f_menu();
                return;
            case 3:
active:
                printf("Enter Account ID: ");
                char search_id[100];

                scanf("%s",search_id);
                struct account *temp=start;
                while(temp!=NULL)
                {
                    if(strcmp(search_id,temp->id)==0)
                        break;
                    temp=temp->next;
                }
                if(temp==NULL)
                    printf("Account id not found\n");
                else
                {
                    printf("Account id Activated\n");
                    temp->account_validation=1;
                    close();
                }
                getchar();
                printf("Press Enter for menu:");
                getchar();
                goto jump1;
            }

        }
    }
    else
    {
        printf("\t\t\t\tWrong Password\n");
        printf("\t\t\t\tPress \"Enter\" for Try again:");
        getchar();
        system("cls");
        goto jump;
    }

}

