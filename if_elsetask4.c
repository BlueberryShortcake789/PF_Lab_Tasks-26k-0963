#include<stdio.h>
int main()
{
    int pr,years;

    printf("Enter Your Performance Rating (1-5): ");
    scanf("%d",&pr);
    printf("Enter Your Years of Service: ");
    scanf("%d",&years);

    if (pr==5 && years>=3)
    {
        printf("Excellent Bonus\n");
}
else if (pr>=4 && pr<=5 && years>=2)
    {
        printf("Good Bonus\n");
    }
  else if (pr>=3 && pr<=5 && years>=1)
    {
        printf("Basic Bonus\n");
    }
    else
    {
        printf("No Bonus\n");
    }
    return 0;
}  
