#include "sistema.hpp"

void sistema::RegisterMusic(music m)
{
    list.add(m);

}
void sistema::RemoveMusicSystem(music m)
{

    for (int i = 0; i < list.size(); i++)
    {
        if (list.get(i) == m)
            list.remove(i);
    }
    // retirar de todas as playlists
    for (int i = 0; i < playlists.size(); i++)
    {

        playlists.get(i).RemoveMusicPlaylist(m);
    }

}
void sistema::AddPlaylist(playlist p)
{
    playlists.add(p);
}
void sistema::RemovePlaylist(playlist p)
{

    for (int i = 0; i < playlists.size(); i++)
    {
        if (playlists.get(i).GetPlaylist() == p.GetPlaylist())
            playlists.remove(i);
    }

}
void sistema::ShowPlaylist()
{
    cout << "ESSAS SAO AS PLAYLISTS DO SISTEMA: " << endl;

    for (int i = 0; i < playlists.size(); i++)
    {
        playlists.get(i).print();
    }

 
}
void sistema::ShowRegistredMusic()
{
    cout << "Essas sao as musicas Registradas: " << endl;
    LinkedList<music> copy = list;

    while (copy.first != nullptr)
    {
        cout << copy.first->value.GetTitle() << " - ";
        cout << "by " << copy.first->value.Getauthor() << endl;
        copy.first = copy.first->next;
    }
}