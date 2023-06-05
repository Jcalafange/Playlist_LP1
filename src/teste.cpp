#include <iostream>
#include "../include/LinkedList.hpp"
#include "../include/playlist.hpp"

int main() {

    playlist playlist1("playlist 1");
    playlist playlist2("playlist 2");

    music music1("song 1", "Artist 1");
    music music2("song 2", "Artist 2");
    music music3("song 3", "Artist 3");
    music music4("song 4", "Artist 4");

    playlist1.AddMusicPlaylist(music1);
    playlist1.AddMusicPlaylist(music2);
    playlist2.AddMusicPlaylist(music3);
    playlist2.AddMusicPlaylist(music4);

    playlist playlist3 = playlist1 + playlist2;
    
    playlist3.print();





    // playlist1 << music1;
    // playlist1.print();

    // playlist1 << music2;
    // playlist1.print();

    // playlist1 << music3;
    // playlist1.print();

    // playlist1.AddMusicPlaylist(music4);
    // playlist1.print();

    // playlist2.AddMusicPlaylist(music1);
    // playlist2.AddMusicPlaylist(music2);
    // playlist1.AddMusicPlaylist(music3);
    // playlist1.AddMusicPlaylist(music1);

    // // playlist1.AddMusicPlaylist(playlist2);
    // playlist2.print();
    // // int removedCount = playlist1.RemoveMusicPlaylist(playlist2);
    // // std::cout << "Removidas " << removedCount << " músicas da playlist p1" << std::endl;
    // playlist resultPlaylist = playlist2 - playlist1;
    // resultPlaylist.print();
    
    return 0;
}

















// int main(){

//     LinkedList<int> quarta;
//     quarta.add(2);
//     quarta.add(3);
//     quarta.add(4);
//     LinkedList<int> segunda;
//     segunda.add(5);
//     segunda.add(7);
//     segunda.add(9);
//     Node<int>* newNode = new Node<int>(42);
//     std::cout << "antes de juntar os a segunda com a quarta\n" << std::endl;
//     segunda.print();
//     segunda.addElements(quarta);
//     std::cout << "depois de juntar \n" << std::endl;
//     segunda.print();
    
//     segunda << newNode;
// //  node<int>* extractNode = nullptr;
// //     if (extractedNode != nullptr) {
// //     std::cout << "Data: " << extractedNode->value << std::endl;
// //     delete extractedNode;
// // } else {
// //     std::cout << "Lista vazia." << std::endl;
// // }
//     std::cout << "apos extrair o ultimo elemento" << std::endl;
//     segunda.print();
//     return 0;
// }
