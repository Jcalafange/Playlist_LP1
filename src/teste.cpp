#include <iostream>
#include "../include/LinkedList.hpp"

int main(){

    LinkedList<int> lista;
    lista.add(3);
    lista.add(3);
    lista.add(3);

    lista.print();

    return 0;
}