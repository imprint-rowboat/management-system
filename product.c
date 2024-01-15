// product.c

#include <stdio.h>
#include "product.h"

void displayProduct(const struct Product *product) {
    printf("Product ID: %d\n", product->productId);
    printf("Product Name: %s\n", product->productName);
    printf("Price: $%.2f\n\n", product->price);
}
