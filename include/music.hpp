/**
 * @file music.hpp
 * @brief Classe que representa uma música
 */

#ifndef MUSIC_HPP
#define MUSIC_HPP

#include <iostream>
#include <string>

/**
 * @brief Classe que representa uma música
 */
class music {
  private:
    std::string title; /**< Título da música */
    std::string author; /**< Autor da música */

  public:
    /**
     * @brief Construtor padrão da classe
     */
    music() {}

    /**
     * @brief Construtor da classe
     * @param title Título da música
     * @param author Autor da música
     */
    music(std::string title, std::string author) {
        this->title = title;
        this->author = author;
    }

    /**
     * @brief Destrutor da classe
     */
    ~music() {}

    /**
     * @brief Retorna o título da música
     * @return Título da música
     */
    std::string GetTitle() { return title; }

    /**
     * @brief Retorna o autor da música
     * @return Autor da música
     */
    std::string GetAuthor() { return author; }

    /**
     * @brief Define o título da música
     * @param x Título da música
     */
    void SetTitle(std::string x) { title = x; }

    /**
     * @brief Define o autor da música
     * @param y Autor da música
     */
    void SetAuthor(std::string y) { author = y; }

    /**
     * @brief Sobrecarga do operador de igualdade
     * @param m1 Música a ser comparada
     * @return True se as músicas forem iguais, False caso contrário
     */
    bool operator==(music m1) const{
      return m1.GetAuthor() == this->author && m1.GetTitle() == this->title;
    }

    bool operator!=(const music& other) const
    {
      return !(*this == other);
    }

};

#endif
