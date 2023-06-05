#include "../include/playlist.hpp"

using namespace std;

void playlist::AddMusicPlaylist(const playlist& playlistTwo)
{
    Node<music>* currentNode = playlistTwo.list.first;
    while(currentNode != nullptr)
    {
        list.add(currentNode->value);
        currentNode = currentNode->next;
    }
}

void playlist::AddMusicPlaylist(music x)
{
    list.add(x);
}

int playlist::RemoveMusicPlaylist(const playlist& playlistTwo)
{
    int count = 0;
    for ( int i=0; i<playlistTwo.list.size(); i++)
    {
        music m = playlistTwo.list.get(i);
        for(int j=0; j<list.size(); j++)
        {
            if( m == list.get(j))
            {
                list.remove(j);
                count++;
                break;
            }
        }
    }
    return count;
}

void playlist::RemoveMusicPlaylist(music m)
{
    for (int i = 0; i < list.size(); i++)
    {
        if (m == list.get(i))
            list.remove(i);
    }
}

playlist playlist::operator+(const playlist &playlist2) const
{
    playlist resultPlaylist;
    resultPlaylist.SetName(GetPlaylist() + " + " + playlist2.GetPlaylist());

    Node<music> *currentNode = list.first;
    while( currentNode != nullptr)
    {
        resultPlaylist.list.add(currentNode->value);
        currentNode = currentNode->next;
    }

    currentNode = playlist2.list.first;
    while(currentNode != nullptr) {
        if (!resultPlaylist.list.contains(currentNode->value)){
            resultPlaylist.list.add(currentNode->value);
        }
        currentNode = currentNode->next;
    }
    return resultPlaylist;
}

playlist playlist::operator+(const music& m) const
{
    playlist resultPlaylist(*this);

    resultPlaylist.list.add(m);
    
    return resultPlaylist;
}

playlist playlist::operator-(const playlist& other)const
{
    playlist resultPlaylist;

    Node<music>* currentNode = list.first;

    while(currentNode != nullptr)
    {
        if(!other.list.contains(currentNode->value))
        {
            resultPlaylist.list.add(currentNode->value);
        }
        currentNode = currentNode->next;
    }

    return resultPlaylist;
}

playlist playlist::operator-(const music& m) const
{
    playlist resultPlaylist;

    Node<music>* currentNode = list.first;

    while (currentNode != nullptr)
    {
        
        if (currentNode->value != m)
        {
           
            resultPlaylist.list.add(currentNode->value);
        }

        currentNode = currentNode->next;
    }

    return resultPlaylist;
}

void playlist::operator>>(music& m)
{
    if (list.isEmpty())
    {
        m = music();
        return;
    }
    
    //salva ultima musica da lista atual
    music lastMusic = list.get(list.size() - 1);
    
    //remove a ultima musica da lista
    list.remove(list.size() - 1);

    //salva a ultima musica dentro do paramentro
    m = lastMusic;
}
void playlist::operator<<(music& m)
{
    if (&m == nullptr) {
    return;
    }

    Node<music>* newNode = new Node<music>;
    newNode->value = m;
    newNode->next = nullptr;

    if (list.isEmpty()) {
        list.add(newNode->value);
    } else {
        Node<music>* lastNode = list.getFirst();
        while (lastNode->next != nullptr) {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode; 
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
        cout << "  - " << node->value.GetTitle() << " by " << node->value.GetAuthor() << endl;
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