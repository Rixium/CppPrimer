#include <iostream>
#include <string>
#include "Sales_item.h"

int main() {
    Sales_item item;
    Sales_item sumItem;

    while(std::cin >> item) {
        if(sumItem.isbn().empty()) {
            sumItem = item;
        } else if(item.isbn() != sumItem.isbn()){
            std::cout << "Ending transaction.." << std::endl;
            break;
        } else {
            sumItem += item;
        }
    }

    std::cout << sumItem << std::endl;

    return 0;
}