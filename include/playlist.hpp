/**
 * @file playlist.hpp
 * @brief Definição da classe playlist para gerenciar playlists de músicas em uma lista ligada
 */

#ifndef PLAYLIST_HPP
#define PLAYLIST_HPP

#include "music.hpp"
#include "LinkedList.hpp"
#include <string>

using namespace std;

/**
 * @brief Classe para gerenciar playlists de músicas em uma lista ligada
 */
class playlist
{
private:
    string name; /**< Nome da playlist */
    Node<music> *now = list.first; /**< Ponteiro para a música atual */

public:
    LinkedList<music> list; /**< Lista ligada que armazena as músicas da playlist */

    /**
     * @brief Construtor de cópia da classe
     * @param other Objeto a ser copiado
     */
    playlist(const playlist &other)
    {
        this->name = other.name;
    }

    /**
     * @brief Construtor padrão da classe
     */
    playlist()
    {
    }

    /**
     * @brief Construtor da classe
     * @param name Nome da playlist
     */
    playlist(string name)
    {
        this->name = name;
    }

    /**
     * @brief Destrutor da classe
     */
    ~playlist()
    {
    }

    /**
     * @brief Retorna o nome da playlist
     * @return Nome da playlist
     */
    string GetPlaylist()
    {
        return name;
    }

    /**
     * @brief Adiciona uma música à playlist
     * @param x Música a ser adicionada
     */
    void AddMusicPlaylist(music x);

    /**
     * @brief Remove uma música da playlist
     * @param m Música a ser removida
     */
    void RemoveMusicPlaylist(music m);

    /**
     * @brief Retorna a próxima música da playlist
     * @return Ponteiro para a próxima música da playlist
     */
    music *NextMusic();

    /**
     * @brief Imprime as músicas da playlist
     */
    void print();

    /**
     * @brief Imprime as informações de uma música
     * @param node Nó contendo a música a ser impressa
     */
    void PrintMusic(Node<music> *node);
};

#endif
