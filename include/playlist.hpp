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
        this->list = other.list;
        this->now = this->list.first;
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
    string GetPlaylist() const 
    {
        return name;
    }

    /**
     * @brief Define o nome da playlist.
     * @param playlistName O nome da playlist.
     */
    void SetName(const std::string& playlistName) {
        name = playlistName;
    }
    
    /**
     * @brief Adiciona uma música à playlist
     * @param x Música a ser adicionada
     */
    void AddMusicPlaylist(music x);

    /**
    *@brief Adciona uma playlist á outra playlist
    *@param playlistTwo playlist a ser adcionada
    */
    void AddMusicPlaylist(const playlist& playlistTwo);

    music get(int index) const {
        return list.get(index);
    }

    /**
    *@brief sobrecarga o operdaor + para concatenar 2 playlists em 1 nova sem elementos repetidos
    *@param playlist2 playlist a ser concatenada
    *@return playlist concatenada
    */
    playlist operator+(const playlist &playlist2) const;

    /**
    *@brief sobrecarga o operador + para concatenar 1 musica a uma playlist
    *@param m musica a ser concatenada
    *@return o resultado da playlist com a musica concatenada
    */
    playlist operator+(const music& m) const;

    /**
    *@brief sobrecarga o operador - para criar uma nova lista com os elementos de uma primeira a lista menos os elementos de uma lista b
    *@param other playlist com os elementos a serem removidos
    *@return playlist com os elementos removidos
    */
    playlist operator-(const playlist& other)const;

    /**
    *@brief sobrecarga o operador - para criar uma nova lista com os elementos de uma primeira a lista menos umas musica especifica passada pelo paramentro
    *@param m musica a ser removida da nova playlist
    *@return playlist com o elemento removido
    */
    playlist operator-(const music& m) const;

    /**
     * @brief Remove a ultima música da playlist
     * @param m Música removida
     */
    void operator>>(music& m);

    /**
    *@brief insere uma musica na ultima posição da playlist.
    *@param musica a ser inserida
    */
    void operator<<(music& m);

    /**
     * @brief Remove uma música da playlist
     * @param m Música a ser removida
     */
    void RemoveMusicPlaylist(music m);

    /**
     * @brief Remove as musicas presentes em uma playlist da playlist chamada
     * @param playlistTwo playlist a ser removida
     * @return numero de elementos removidos
     */
    int RemoveMusicPlaylist(const playlist& playlistTwo);

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
