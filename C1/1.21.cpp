#include <iostream>
#include <string>
#include "Sales_item.h"

int main() {
    Sales_item item;
    Sales_item item2;

    std::cin >> item >> item2;

    if(item.isbn() == item2.isbn()) {
        std::cout << item + item2;
    } else {
        std::cout << "Cannot sum as books do not share same ISBN";
    }
    return 0;
}