// product.h

#ifndef PRODUCT_H
#define PRODUCT_H

struct Product {
    int productId;
    char productName[50];
    double price;
};

void displayProduct(const struct Product *product);

#endif
