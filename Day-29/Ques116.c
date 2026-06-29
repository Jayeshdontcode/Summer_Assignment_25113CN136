#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEMS 100
#define NAME_LENGTH 50

typedef struct 
{
    int id;
    char name[NAME_LENGTH];
    int quantity;
    float price;
} Item;

Item inventory[MAX_ITEMS];
int itemCount=0;

void addItem() 
{
    if (itemCount>=MAX_ITEMS) {
        printf("inventory is full\n");
        return;
    }

    Item newItem;
    printf("Enter item ID: ");
    scanf("%d", &newItem.id);
    printf("enter item name: ");
    scanf("%s", newItem.name);
    printf("enter item quantity: ");
    scanf("%d", &newItem.quantity);
    printf("Enter item price: ");
    scanf("%f", &newItem.price);

    inventory[itemCount++]=newItem;
    printf("Item added successfully\n");
}

void displayItems() 
{
    if(itemCount==0) 
    {
        printf("No items in inventory.\n");
        return;
    }

    printf("\nInventory:\n");
    printf("ID\tName\t\tQuantity\tPrice\n");
    for (int i=0;i<itemCount;i++) 
    {
        printf("%d\t%s\t\t%d\t\t%.2f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
    }
}

void searchItem() 
{
    int id,i;
    printf("Enter item ID to search: ");
    scanf("%d", &id);

    for (i=0;i<itemCount;i++) 
    {
        if (inventory[i].id==id) 
        {
            printf("Item found: ID=%d, Name=%s, Quantity=%d, Price=%.2f\n",
                   inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
            return;
        }
    }
    printf("Item not found.\n");
}

void updateItem() 
{
    int id,i;
    printf("Enter item ID to update: ");
    scanf("%d", &id);

    for (i=0;i<itemCount;i++) 
    {
        if (inventory[i].id==id) 
        {
            printf("Enter new quantity: ");
            scanf("%d", &inventory[i].quantity);
            printf("Enter new price: ");
            scanf("%f", &inventory[i].price);
            printf("Item updated successfully!\n");
            return;
        }
    }
    printf("Item not found.\n");
}

void deleteItem() 
{
    int id,i;
    printf("Enter item ID to delete: ");
    scanf("%d", &id);

    for (i=0;i<itemCount;i++) 
    {
        if (inventory[i].id==id) 
        {
            for (int j=i;j<itemCount-1;j++) 
            {
                inventory[j]=inventory[j+1];
            }
            itemCount--;
            printf("Item deleted successfully!\n");
            return;
        }
    }
    printf("item not found\n");
}

int main() 
{
    int choice;

    while (1) {
        printf("\nInventory management system\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Update Item\n");
        printf("5. Delete Item\n");
        printf("6. exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addItem();
                break;
            case 2:
                displayItems();
                break;
            case 3:
                searchItem();
                break;
            case 4:
                updateItem();
                break;
            case 5:
                deleteItem();
                break;
            case 6:
                printf("Exiting program\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}