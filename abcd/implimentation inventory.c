#include <stdio.h>
int main(){
 FILE *fp;
 typedef struct{
 int no;
 char name[20];
 float price;
 }Asset;
 Asset a;
 int choice;
 fp = fopen("inv.txt", "a");
 if (fp == NULL){
 printf("File does not exists \n");
 return;
 }
 do{
 printf("\nEnter the Asset no : ");
 scanf("%d", &a.no);
 fprintf(fp, "Asset No = %d\n", a.no);
 printf("\nEnter the Asset Name : ");
 scanf("%s", &a.name);
 fprintf(fp, "Asset name = %s\n", a.name);
 printf("\nEnter the Asset price :");
 scanf("%f", &a.price);
 fprintf(fp, "Asset price = %.2f\n\n", a.price);
printf("\nDo you want to add another record yes=1 no=0 : ");
 scanf("%d", &choice);
}while(choice);
printf(" \n Thank you !!!! ");
fclose(fp);
return 0;
}
