#include <iostream>

int main() {

//pointer is a variable that stores a memory address of another variable
        //sometimes its easier to work with a n address

    //& address of operator
    // * dereference operator

    std::string name = "Aiden";
    int age = 20;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};


    std::string *ptrName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    std::cout << *ptrName;
    std::cout << *pAge;
    std::cout << *pFreePizzas;

    // null pointers

    int *pointer = nullptr;
    int x = 123;

    pointer = &x; // setting the pointer to the adress of x in memory

    if (pointer == nullptr) {
        std::cout << "address was not assigned!\n";
    }else {
        std::cout << "address was assigned!\n";
        std::cout << *pointer;
    }



    return 0;
}