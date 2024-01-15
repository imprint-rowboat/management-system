// inventory.c

#include <stdio.h>
#include "inventory.h"

void initInventory(struct Inventory *inventory) {
    inventory->productCount = 0;
}

void addProduct(struct Inventory *inventory, const struct Product *product) {
    if (inventory->productCount < MAX_PRODUCTS) {
        inventory->products[inventory->productCount++] = *product;
    } else {
        printf("Inventory is full. Cannot add more products.\n");
    }
}

void displayInventory(const struct Inventory *inventory) {
    printf("Inventory:\n");
    for (int i = 0; i < inventory->productCount; ++i) {
        displayProduct(&inventory->products[i]);
    }
}
