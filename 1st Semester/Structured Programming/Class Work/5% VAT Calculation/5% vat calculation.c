#include<stdio.h>
//5% VAT calculation
//submitted By:
//Shamim Ibrahim, ID: 2231091024, Batch: 59A.
int main()
{
    float price,vat_price;
    printf("Enter the Price:");
    scanf("%f",&price);
    vat_price=price+(price*.05);
    printf("With VAT Added:%.2f",vat_price);
    getch();
}
