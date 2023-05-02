#include "playlist.hpp"
using namespace std;

void playlist::AddMusicPlaylist(music x)
{
    list.add(x);
}

void playlist::RemoveMusicPlaylist(music m)
{
    for (int i = 0; i < list.size(); i++)
    {
        if (m == list.get(i))
            list.remove(i);
    }
}

void playlist::print()
{
    cout << "PLAYLIST " << this->name << ":" << endl;

    PrintMusic(list.first);
}

void playlist::PrintMusic(Node<music> *node)
{
    if (node != nullptr)
    {
        cout << "  - " << node->value.GetTitle() << " by " << node->value.Getauthor() << endl;
        PrintMusic(node->next);
    }
}

music *playlist::NextMusic()
{
    if (now->next == nullptr)
    {
        return nullptr;
    }
    else
    {
        music *nextMusic = &now->value;
        now = now->next;
        return nextMusic;
    }
}