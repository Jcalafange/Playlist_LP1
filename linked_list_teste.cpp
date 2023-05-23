#include "LinkedList.hpp"
#include "string"

int main(int argc, char const *argv[])
{
    LinkedList<string> list;
    LinkedList<double> doubleList;
    list.add("teste_1 ");
    list.add("teste_2");
    list.add("teste_3");
    list.print();
    return 0;
}
