#include "sistema.hpp"

int main(int argc, char const *argv[])
{
    playlist treino{"treino"};
    treino.AddMusicPlaylist(music{"The Search", "NF"});
    treino.AddMusicPlaylist(music{"Cloulds", "NF"});
    sistema s;
    s.AddPlaylist(treino);
    cout << "oi!\n";

    treino.print();
    s.ShowPlaylist();
}
