# include <stdio.h>
int main() 
{
	int option;
    int bal,amt,dep;
    printf("Welcome!\nEnter your balance: ");
    scanf("%d",&bal);
    printf("-----------------------------------------------------------------------------------------------------------\n");
    printf("Select an option:\n1.Withdraw Amount\n2.Deposit Amount\n3.Exit\n");
    printf("-----------------------------------------------------------------------------------------------------------\n");
    scanf("%d",&option);
    switch(option) 
	{
        case 1:
            printf("How much amount you want to withdraw from your account?\nAmount: ");
            scanf("%d",&amt);
            bal-=amt;//bal=bal-amt;
            if(amt<=bal)
            printf("Your balance is: %d\nThank you for using the system\n",bal);
            else printf("Isufficient balance\nTry a valid amount");
            break;
        
        case 2:
            printf("How much amount you want to deposit in your account?\nAmount: ");
            scanf("%d",&dep);
            bal+=dep;//bal=bal+dep;
            printf("Your new balance is: %d\nThank you for using the system",bal);
        case 3:
            printf("Thank you for using the system!");
            break;
        default:
            printf("Invalid option!");
            break;
    }
    return 0;
}

