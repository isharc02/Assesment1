#include <stdio.h>
int main()
{
int choice,quantity,amount;
    int Pizza_price = 180;
    int Burger_price = 150;
    int Dosa_price = 120;
    int Idli_price = 50;
    char ans;
    int total = 0;
do
{

    printf("1.Pizza     Pizza_price=180rs/pcs");
    printf("\n2.Burger    Burger_Price=150rs/pcs");
    printf("\n3.Dosa      Dosa_Price=120rs/pcs");
    printf("\n4.Idli     Idali_Price=50rs/pcs");


    printf("\nenter your choice::");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("you have selected Pizza");
        printf("\nenter the quantity:");
        scanf("%d", &quantity);
        amount = Pizza_price * quantity;
        printf("amount is %d", amount);
    }
    else if (choice == 2)
    {
        printf("you have selected Burger");
        printf("\n enter the quantity:");
        scanf("%d",&quantity);
        amount = Burger_price * quantity;
        printf("amount is %d", amount);
    }
    else if (choice == 3)
    {
        printf("you have selected dosa");
        printf("\nenter the quantity:");
        scanf("%d", &quantity);
        amount = Dosa_price * quantity;
        printf("amount is %d", amount);
    }
    else if (choice == 4)
    {
        printf("you have selected Idli");
        printf("\nenter the quantity:");
        scanf("%d", &quantity);
        amount = Idli_price * quantity;
        printf("amount is %d", amount);
    }
    else
    {
    printf("you selected wrong num << please recheack the num.");
    amount=0;
    }

    total += amount;

    printf("\ndo you want any more order?(Y/N):: ");
    scanf(" %c", &ans);
    
 } while (ans == 'Y' || ans == 'y');

 printf("\ntotal amount is %d\n",total);

    return 0;
}
