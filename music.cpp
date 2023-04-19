#include "music.hpp"

using namespace std;
void MusicList::AddMusic(music *obj)
{
    Node *node = new Node;
    node->value = obj;
    node->next = nullptr;

    if (first != nullptr)
    {
        node->next = first;
        first = node;
    }
    else
    {
        first = node;
    }
}
void MusicList::RemoveMusic(int index)
{
    if (index == 0)
    {
        Node *newFirst = first->next;
        delete first;
        first = newFirst;
    }
    Node *last = nullptr;
    Node *now = first;

    for (int i = 0; i < index && now != nullptr; i++)
    {
        last = now;
        now = now->next;
    }
    if (now == nullptr)
    {
        return;
    }
    if (last == nullptr)
    {
        first = now->next;
    }
    else
    {
        last->next = now->next;
    }
    delete now;
}
void MusicList::ShowElements()
{
    cout << "Esses sao os elementos da lista: " << endl;
    Node *v = first;
    while (v != nullptr)
    {
        cout << v->value->GetTitle() << endl;
        v = v->next;
    }
}

int main()
{
    music *obj1 = new music("Hello", "Adele");
    music *obj2 = new music("Vai se fuder no inferno", "meu pau");

    MusicList V;
    V.AddMusic(obj1);
    V.AddMusic(obj2);
    V.RemoveMusic(1);
    V.ShowElements();
}
