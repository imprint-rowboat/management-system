// inventory.h

#ifndef INVENTORY_H
#define INVENTORY_H

#include "product.h"

#define MAX_PRODUCTS 100

struct Inventory {
    struct Product products[MAX_PRODUCTS];
    int productCount;
};

void initInventory(struct Inventory *inventory);
void addProduct(struct Inventory *inventory, const struct Product *product);
void displayInventory(const struct Inventory *inventory);

#endif
