#include "playlist.hpp"
#include "sistema.hpp"

using namespace std;

int menu()
{
    int option;
    cout << "Escolha uma opcao: " << endl;
    cout << "1- Cadastrar Musica" << endl;
    cout << "2- Gerenciar playlist" << endl;
    cout << "3- Deletar musica" << endl;
    cout << "4- Exibir musicas do sistema" << endl;
    cout << "0- Sair do aplicativo" << endl;
    cin >> option;
    return option;
}
int menu1()
{
    int option;
    cout << "Escolha uma opcao: " << endl;
    cout << "1- Cadastrar playlist " << endl;
    cout << "2- Deletar Playlist " << endl;
    cout << "3- Exibir playlists " << endl;
    cout << "4- voltar ao menu " << endl;
    cin >> option;
    return option;
}

int main()
{
    sistema s;
    int option = -1;

    while (option != 0)
    {
        option = menu();
        switch (option)
        {
        case 1:
        {
            string name;
            string author;
            cout << "Digite o nome da musica: ";
            cin >> name;
            cout << "Digite o autor da musica ";
            cin >> author;
            s.RegisterMusic(music(name, author));
            break;
        }
        case 2:
        {
            int option1 = -1;
            while (option1 != 4)
            {
                option1 = menu1();
                switch (option1)
                {
                case 1:
                {
                    string name;
                    cout << "Digite o nome da playlist: ";
                    cin.ignore();
                    getline(cin, name);
                    s.AddPlaylist(playlist(name));
                    int size;
                    cout << "quantas musicas serao adcionadas a playlist: ";
                    cin >> size;
                    for (int i = 0; i < size; i++)
                    {
                        string musicName;
                        string musicAuthor;
                        cout << "Digite o nome da musica " << i + 1 << ": ";
                        cin.ignore();
                        getline(cin, musicName);
                        cout << "Digite o autor(a) da musica " << i + 1 << ": ";
                        getline(cin, musicAuthor);
                        playlist(name).AddMusicPlaylist(music(musicName, musicAuthor));
                        s.RegisterMusic(music(musicName, musicAuthor));
                    }
                    break;
                }
                case 2:
                {
                    string name;
                    cout << "Digite o nome da playlist a ser removida: ";
                    cin >> name;
                    s.RemovePlaylist(playlist(name));
                    break;
                }
                case 3:
                {
                    s.ShowPlaylist();
                    break;
                }
                case 4:
                {
                    break;
                }
                default:
                {
                    cout << "Opcao invalida!" << endl;
                    break;
                }
                }
            }
            break;
        }
        case 3:
        {
            string name;
            string author;
            cout << "Digite o nome da musica a ser removida: ";
            cin >> name;
            cout << "Digite o autor da musica: ";
            cin >> author;
            s.RemoveMusicSystem(music(name, author));
            break;
        }
        case 4:
        {

            s.ShowRegistredMusic();
            break;
        }
        case 0:
        {
            break;
        }
        default:
        {
            cout << "Opcao invalida! " << endl;
            break;
        }
        }
    }

    return 0;
}
