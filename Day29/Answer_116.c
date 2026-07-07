#include <stdio.h>
struct Inventory
{
    int id;
    char name[50];
    int quantity;
    float price;
};
int main()
{
    struct Inventory item;
    printf("Enter Item ID: ");
    scanf("%d",&item.id);
    printf("Enter Item Name: ");
    scanf("%s",item.name);
    printf("Enter Quantity: ");
    scanf("%d",&item.quantity);
    printf("Enter Price: ");
    scanf("%f",&item.price);
    printf("\nInventory Details\n");
    printf("ID: %d\n",item.id);
    printf("Name: %s\n",item.name);
    printf("Quantity: %d\n",item.quantity);
    printf("Price: %.2f",item.price);
    return 0;
}