/**
 * @file sistema.hpp
 * @brief Declaração da classe Sistema e seus métodos para gerenciamento de músicas e playlists.
 */

#ifndef SYSTEM_HPP
#define SYSTEM_HPP

#include "LinkedList.hpp"
#include "playlist.hpp"
#include "node.hpp"

/**
 * @brief Classe que representa o sistema de gerenciamento de músicas e playlists.
 * 
 * Esta classe contém as listas de músicas registradas e de playlists criadas pelo usuário, 
 * além dos métodos para adicionar e remover músicas e playlists, além de mostrar as informações 
 * armazenadas.
 */
class sistema
{
    LinkedList<music> list{}; /**< Lista de músicas registradas. */
    LinkedList<playlist> playlists{}; /**< Lista de playlists criadas pelo usuário. */

public:
    /**
     * @brief Construtor padrão da classe Sistema.
     */
    sistema() : list{}, playlists{} {}

    /**
     * @brief Destrutor padrão da classe Sistema.
     */
    ~sistema() {}

    /**
     * @brief Registra uma música no sistema.
     * 
     * @param m Objeto do tipo music a ser registrado.
     */
    void RegisterMusic(music m);

    /**
     * @brief Remove uma música do sistema.
     * 
     * @param m Objeto do tipo music a ser removido.
     */
    void RemoveMusicSystem(music m);

    /**
     * @brief Mostra as músicas registradas no sistema.
     */
    void ShowRegistredMusic();

    /**
     * @brief Adiciona uma nova playlist no sistema.
     * 
     * @param p Objeto do tipo playlist a ser adicionado.
     */
    void AddPlaylist(playlist p);

    /**
     * @brief Remove uma playlist do sistema.
     * 
     * @param p Objeto do tipo playlist a ser removido.
     */
    void RemovePlaylist(playlist p);

    /**
     * @brief Mostra todas as playlists criadas no sistema.
     */
    void ShowPlaylist();
};

#endif
