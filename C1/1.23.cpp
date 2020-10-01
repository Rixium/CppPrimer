#include <iostream>
#include <string>
#include "Sales_item.h"

int main() {
    int transactionCount;
    std::string last_item_isbn;
    Sales_item item;

    while(std::cin >> item) {
        if(!last_item_isbn.empty() && item.isbn() != last_item_isbn) {
            std::cout << "Transactions for " << last_item_isbn << ": " << transactionCount << std::endl;
            transactionCount = 0;
        }
        transactionCount++;
        last_item_isbn = item.isbn();
    }

    std::cout << "Transactions for " << last_item_isbn << ": " << transactionCount << std::endl;

    return 0;
}