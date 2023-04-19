#ifndef MUSIC_HPP
#define MUSIC_HPP
#include <iostream>
#include <string>

using namespace std;

class music
{
    string title;
    string author;

public:
    music(string title, string author)
    {
        this->title = title;
        this->author = author;
    }
    ~music()
    {
    }
    string GetTitle()
    {
        return title;
    }
    string Getauthor()
    {
        return author;
    }
    void SetTitle(string x)
    {
        title = x;
    }
    void SetAuthor(string y)
    {
        author = y;
    }
};

class MusicList
{
    struct Node
    {
        music *value;
        Node *next;
    };
    Node *first;

public:
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