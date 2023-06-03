#include <iostream>
#include "../include/LinkedList.hpp"

int main(){

    LinkedList<int> quarta;
    quarta.add(2);
    quarta.add(3);
    quarta.add(4);
    LinkedList<int> segunda;
    segunda.add(5);
    segunda.add(7);
    segunda.add(9);
    Node<int>* newNode = new Node<int>(42);
    std::cout << "antes de juntar os a segunda com a quarta\n" << std::endl;
    segunda.print();
    segunda.addElements(quarta);
    std::cout << "depois de juntar \n" << std::endl;
    segunda.print();
    
    segunda << newNode;
//  node<int>* extractNode = nullptr;
//     if (extractedNode != nullptr) {
//     std::cout << "Data: " << extractedNode->value << std::endl;
//     delete extractedNode;
// } else {
//     std::cout << "Lista vazia." << std::endl;
// }
    std::cout << "apos extrair o ultimo elemento" << std::endl;
    segunda.print();
    return 0;
}
