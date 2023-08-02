#include<stdio.h>

#include<stdlib.h>

void addItem();

void deleteItem();

void updateBill();

void displayCart();

int stock[5][3]={{0,0,0},

{1,12,100},

{2,15,200},

{3,17,150},

{4,25,250}};

typedef struct{ int code;

int quantity;

float cost;

}cartItems;

cartItems c[10]; //array of structures

int itemNum=0;

float total=0.0;
int main()

{

int i,j,n,choice;

do {

printf("\n\n Item Code\t Quantity\t Price\n");

for(i=1;i<5;i++)

{ for(j=0;j<3;j++)

printf(" %d\t\t",stock[i][j]);

printf("\n");

}

printf("\nPlease enter your choice.... ");

printf("\n\n 1: Add Item to cart 2: Delete Item from cart 3: Display 4: Exit : ");

scanf("%d",&choice);
switch(choice)

{

case 1: addItem();

break;

case 2: deleteItem();

break;

case 3: displayCart();

break;

default: exit(0);

};

}while(1);

return 0;

}

void addItem()

{

printf("\nYou have called addItem()\n");

printf("\n Enter the code and quantity of the item to be added to your cart ");

scanf("%d%d",&c[itemNum].code,&c[itemNum].quantity);

c[itemNum].cost=c[itemNum].quantity * stock[c[itemNum].code][2];

printf("\n The item with code %d is added to the cart\n", c[itemNum].code);

printf("\n Your cart contains....\n ");

printf("\nItem code\tQuantity\t Total amount\n");

printf(" %d\t\t %d\t\t %5.2f", c[itemNum].code, c[itemNum].quantity,

c[itemNum].cost);

stock[c[itemNum].code][1]=stock[c[itemNum].code][1]-c[itemNum].quantity;

itemNum++;

updateBill();

return;

}

void deleteItem()

{

printf("\nYou have called deleteItemItem()\n");

printf("\nLast item from your cart deleted\n ");

itemNum--;

stock[c[itemNum].code][1]=stock[c[itemNum].code][1]

+c[itemNum].quantity;

updateBill();

return;

}

void updateBill()

{ int i;

total=0;

printf("\n You have called updateBill()\n");

printf("\nThere are %d items in your cart..\n\n ",

itemNum);

for(i=0;i<itemNum;i++)

total=total+c[i].cost;

return;

}

void displayCart()

{

int i;

printf("\nYou have called displayCart()\n");

printf("\n There are %d items in your cart....\n\n ",

itemNum);

printf("\nItem code\tQuantity\tAmount\n");

for(i=0;i<itemNum;i++)

printf("\n %d\t\t%d\t\t%5.2f", c[i].code, c[i].quantity,

c[i].cost);

printf("\n\n\n \t\t\tGrand total is : %5.2f\n ",total);

return;

}
