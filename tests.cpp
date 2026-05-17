#include <iostream>
#include "storage.h"


void test() {
    Storage storage;

    storage.Add("pussy", "is_swag");
    std::optional<std::string> value = storage.Get("pussy");
    if (value.has_value())
        std::cout << value.value() << std::endl;

    storage.Update("pussy", "is_not_swag");
    value = storage.Get("pussy");
    if (value.has_value())
        std::cout << value.value() << std::endl;

    storage.Delete("pussy");

    value = storage.Get("pussy");
    if (value.has_value())
        std::cout << value.value() << std::endl;
    else
        std::cout << "Нихуя\n";
}