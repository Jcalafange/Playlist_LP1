#ifndef MUSICLIST_HPP
#define MUSICLIST_HPP
#include "music.hpp"

class MusicList
{

public:
    struct Node
    {
        music *value;
        Node *next;
    };
    Node *first;
    MusicList()
    {
        first = nullptr;
    }
    ~MusicList()
    {
        Node *now = first;
        while (now != nullptr)
        {
            Node *next = now->next;
            delete now;
            now = next;
        }
    }
    void AddMusic(music *obj);
    void RemoveMusic(int index);
    void ShowElements();
};

#endif