/**
*@file LinkedlList.hpp
*@brief Definição da classe LinkedList e a representação de uma lista generica
*/

#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
#include "music.hpp"
#include "node.hpp"

using namespace std ;
template <typename T>
/**
*@brief Classe representa as funções de uma lista generica que vai manipular nós da classe node, de forma que consiga tratar qualquer tipo de variavel/objeto
*/
class LinkedList
{

    int m_size = 0;

public:
    Node<T> *first;/**< Ponteiro para o primeiro nó da lista*/
    /**
    *@brief Construtor padrão da classe LinkedList
    *
    *cria uma lista vazia, com o ponteiro first inicializado como nulo
    */
    LinkedList()
    {
        first = nullptr;
    }
    /**
    *@brief Destrutor da classe LinkedList.
    *
    *Libera a ménoria alocada para cada nó da lista
    */
    ~LinkedList()
    {
        Node<T> *now = first;
        while (now != nullptr)
        {
            Node<T> *next = now->next;
            delete now;
            now = next;
        }
    }
    /**
    *@brief Retorna o tamanho da lista.
    *
    *@return int Tamanho da lista.
    */
    int size() { return m_size; }
    /**
    *@brief Adciona um elemnto no inicio da lista.
    *
    * Cria um nó e o adciona no inicio da lista
    *
    *@param obj Elemento a ser adcionado na lista
    */
    void add(T obj)
    {
        Node<T> *newNode = new Node<T>;
        newNode->value = obj;
        newNode->next = nullptr;
        if (first == nullptr)
        {
            first = newNode;
        }
        else
        {
            newNode->next = first;
            first = newNode;
        }
        m_size++;
    }

        /**
    * @brief Adiciona os elementos de uma lista ligada à lista atual.
    *
    * Recebe uma lista ligada por referência e adiciona todos os elementos dessa lista à lista atual.
    *
    * @param lista Ligada Lista ligada contendo os elementos a serem adicionados
    */
    void addElements(LinkedList<T>& lista) {
        Node<T>* currentNode = lista.first;

        while (currentNode != nullptr) {
            add(currentNode->value);
            currentNode = currentNode->next;
            m_size++;
        }
    }
    /**
    * @brief sobrecarga do operador + concatenando 2 listas ligadas.
    *
    * Recebe uma lista ligada por referência e adiciona todos os elementos dessa lista à lista atual.
    *
    * @param lista Ligada Lista ligada contendo os elementos a serem adicionados
    */
    LinkedList operator+(const LinkedList& lista) const {
        LinkedList result(*this); // Cria uma cópia da lista atual

        Node<T>* currentNode = lista.first;

        while (currentNode != nullptr) {
            result.add(currentNode->value); 
            currentNode = currentNode->next;
        }

    return result; // Retorna a nova lista concatenada
}
    /**
    *@brief sobrecarga do operador >>, extraindo o ultimo elemento da lista
    *
    *@param node nó para receber os valores do ultimo elemento
    */
    void operator>>(Node<T>*& node){
        if(isEmpty()){
            node = nullptr;
        } else{
            Node<T>* lastNode = nullptr;
            Node<T>* currentNode = first;
        
            while (currentNode->next != nullptr){
                lastNode = currentNode;
                currentNode = currentNode->next;
            }
        

        node = new Node<T>(currentNode->value);
        delete currentNode;

        if(lastNode == nullptr) {
            first = nullptr;
        } else {
            lastNode->next = nullptr;
        }
        m_size--;
        }
    }
    /**
    *@brief insere um node no fim da lista
    *
    *@param node nó a ser inserido
    *
    */
    void operator<<(Node<T>* node) {
        if (node == nullptr){
            return;// se ó nó for nullptr, a função não faz nada
        }

        if (isEmpty()) {
            first = node;
        } else {
            Node<T>* lastNode = first;

            while (lastNode->next != nullptr){
                lastNode = lastNode->next;
            }
            lastNode->next = node; //adcionando o novo node ao final da lista
        }
        if (node != nullptr){
            m_size++;// incrementando apenas se for node tiver algum valor

        }
    }


    /**
    *@brief versão sobrecarregada da função remove, removendo o conteudo de uma lista ligada e retornando a quantidade de musicas removidas.
    *
    *@param lista Lista Ligada contendo os elementos a serem apagados
    */
    void remove(LinkedList<T> lista) {
        std::cout << "oi";
        }

    /**
    *@brief Remove o elemento do indice especificado
    *
    * Remove o elemento da lista de indice especificado, e atualiza os ponteiros dos nós do lado
    *@param index Índice do elemnto a ser removido
    */
    void remove(int index)
    {
        if (index == 0)
        {
            Node<T> *newFirst = first->next;
            delete first;
            first = newFirst;
            return;
        }
        Node<T> *last = nullptr;
        Node<T> *now = first;

        for (int i = 0; i < index && now != nullptr; i++)
        {
            last = now;
            now = now->next;
        }
        if (now == nullptr)
        {
            return;
        }
        if (last == nullptr)
        {
            first = now->next;
        }
        else
        {
            last->next = now->next;
        }
        m_size--;
        delete now;
    }

    /**
    *@brief imprime todos os elementos da lista
    */
    void print()
    {
        cout << "Esses sao os elementos da lista: " << endl;
        Node<T> *v = first;
        while (v != nullptr)
        {
            cout << v->value << endl;
            v = v->next;
        }
    }
    /**
    *@brief retorna o valor do nó no indice da lista
    *@param index Índice do valor a ser retornado
    *@return T Valor do nó
    */
    T get(int index)
    {
        Node<T> *runner = first;
        for (int i = 0; i < index; i++)
        {
            runner = runner->next;
        }
        return runner->value;
    }
    /**
    * @brief função isEmpty verifica se a lista esta vazia verificando o ponteiro first para o primeiro no da lista 
    *
    * @return true caso esteja vazia e false caso tenha algum elemento diferente de nullptr
    */
    bool isEmpty() const {
    return (first == nullptr);
}
};


#endif