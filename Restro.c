#include<stdio.h>
#include <time.h>
#define PRICE_COFFIE 15
#define PRICE_TEA 10
#define PRICE_MAGGIE 20
#define PRICE_MANGO 25
#define PRICE_CHOCOLATE 30
int main()
{ int items,quantity;
    int price = 0;
    int amount;
    int choice;
    int q_Coffie =0,q_Mango=0,q_Chocolate=0,q_Maggie=0,q_Tea=0;
     char customerName[50];
     int rating,paymentMethod;
    int total = 0;
    float gst, discount = 0, finalAmount;

    printf("-----------------------------------\n");
    printf("Hello Sir, Welcome to Shivu Restro \n");
    printf("-----------------------------------\n");
    printf("Enter Customer Name: ");
scanf(" %[^\n]", customerName);
time_t t;
time(&t);
    do {
        printf("\n---Menu---\n\n"); 
        printf("1. Coffie         $15\n");
        printf("2. Tea            $10\n");
        printf("3. Maggie         $20\n");
        printf("4. Mango Shake    $25\n");
        printf("5. Chocolate Milk  $30\n");
        
printf("\n Select your order by Number");
scanf("%d",&items);
switch (items)
{
       case 1:
       price = 15;
       printf("Coffee – A hot cup of energy to kick-start your day. \n");
       break;
       case 2:
       price = 10;
       printf(" Tea – Refreshing and soothing, perfect for every mood.\n");
       break;
       case 3:
       price = 20;
       printf("Maggie – Quick, tasty, and everyone's favorite comfort snack. \n");
       break;
       case 4:
       price = 25;
       printf("Mango Shake – A creamy blend of juicy mangoes in every sip. \n");
       break;
       case 5:
       price = 30;
       printf("Chocolate Milk – Rich, sweet, and chocolaty goodness for all ages.\n");
       break;
       default:
       printf("Item was not listed Re write again !!!\n");
       continue;
}      
       printf("Enter quantity\n");
       scanf("%d",&quantity);
       switch(items)
{
    case 1:
        q_Coffie += quantity;
        break;

    case 2:
        q_Tea += quantity;
        break;

    case 3:
        q_Maggie += quantity;
        break;

    case 4:
        q_Mango += quantity;
        break;

    case 5:
        q_Chocolate += quantity;
        break;
}
       amount = price*quantity;
       printf("Current Order Amount = $%d\n", amount);
       total+=amount;
       printf("Running Subtotal     = $%d\n", total);
        printf("\nDo you want anything else?");
        printf("\n1. Yes");
        printf("\n0. No");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);
}
while(choice==1);
gst = total*0.18;
if(total>=100)
{
    discount = total*0.08;
}
finalAmount=total+gst-discount;
printf("\nSelect payment option\n");
printf("1. Cash\n");
printf("2. UPI\n");
printf("3. Card\n\n");
printf("Select Choice by number\n");
scanf("%d",&paymentMethod);

    printf("\n\n================================");
    printf("\n           FINAL BILL");
    printf("\n==================================");
    printf("\nCustomer Name : %s", customerName);
  if(q_Coffie > 0)
    printf("\nCoffie x %d = Rs.%d", q_Coffie, q_Coffie *  PRICE_COFFIE );
   if(q_Tea > 0)
   printf("\nTea x %d = Rs.%d", q_Tea, q_Tea *  PRICE_TEA );
   if(q_Maggie > 0)
    printf("\nMaggie x %d = Rs.%d", q_Maggie, q_Maggie *  PRICE_MAGGIE);
    if(q_Mango > 0)
    printf("\nMango Shake x %d = Rs.%d", q_Mango, q_Mango *  PRICE_MANGO );
    if(q_Chocolate > 0)
    printf("\nChoclate Milk x %d = Rs.%d", q_Chocolate, q_Chocolate *  PRICE_CHOCOLATE );
    printf("\nSubtotal : $%d", total);
    printf("\nGST (18%%): $%.2f", gst);
    printf("\nDiscount : $%.2f", discount);
    printf("\n-------------------------------");
    printf("\nFinal Amount : $%.2f", finalAmount);
    switch(paymentMethod)
{
    case 1: 
       printf("\nPayment Method : Cash");
       break;
    case 2:
       printf("\nPayment Method : UPI");
       break;
    case 3:
       printf("\nPayment Method : Card");
       break;
       default:
       printf("\nInvalid option\n");
}

printf("\nDate & Time: %s", ctime(&t));

    printf("\n\nThank You! Visit Again.");
    printf("\n================================");
    printf("\n\nPlease Rate Our Service (1-5 Stars): ");
scanf("%d", &rating);

if(rating == 5)
{
    printf("Excellent! Thank you.\n");
}
else if(rating == 4)
{
    printf(" Very Good! Thank you.\n");
}
else if(rating == 3)
{
    printf("Good! We'll improve more.\n");
}
else if(rating == 2)
{
    printf("Average. Thanks for your feedback.\n");
}
else if(rating == 1)
{
    printf("Sorry for the bad experience.\n");
}
else
{
    printf("Invalid Rating!\n");
}


return 0;
}