// main.c

#include "product.h"
#include "inventory.h"

int main() {
    struct Product laptop = {1, "Laptop", 1200};
    struct Product smartphone = {2, "Smartphone", 800};

    struct Inventory inventory;
    initInventory(&inventory);

    addProduct(&inventory, &laptop);
    addProduct(&inventory, &smartphone);

    displayInventory(&inventory);

    return 0;
}
