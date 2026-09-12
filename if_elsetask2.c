#include<stdio.h>
int main()
{
    float withdrawal_money,balance;

    printf("Enter the withdrawal amount: ");
    scanf("%f",&withdrawal_money);
    printf("Enter the current balance: ");
    scanf("%f",&balance);
    
    if (withdrawal_money>0 && withdrawal_money<=balance)
    {
        printf ("Withdrawal Approved\n");
    }
    else 
    {
         printf ("Withdrawal Denied\n");
    }
    return 0;  
}