/**
 * @file node.hpp
 * @brief Definição da classe Node para uma lista ligada
 */

#ifndef NODE_H_
#define NODE_H_

/**
 * @brief Estrutura para um nó de lista ligada
 * @tparam T Tipo de dados armazenado no nó
 */
template <typename T>
struct Node
{
    T value; /**< Valor armazenado no nó */
    Node<T> *next; /**< Ponteiro para o próximo nó */

    /**
     * @brief Construtor padrão da classe
     */
    Node() {}
};

#endif