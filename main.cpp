#include <iostream>

using namespace std;

int main()
{
    int Choix;
    cout<<"1) Saisir une adresse IP d’un poste du réseau " << endl << " 2) Saisir un masque de sous-réseau en format adresse IPV4 " << endl << "  3) Saisir un masque de sous-réseau en format CIDR " << endl << "  4) Afficher l’adresse IP en cours " << endl << "  5) Afficher le masque en cours " << endl << "  6) Afficher les infos réseau  Cette option affichera l’adresse réseau, le masque, l’adresse IP la plus petite du réseau, l’adresse IP la plus grande du réseau et l’adresse de broadcast. " << endl << "  7) Afficher l’adresse IP du poste en format binaire " << endl << "  8) Quitter " << endl;
    cin >> Choix;
    if (Choix == 1){
        cout << "Choix 1" << endl;
    }
    if (Choix == 2){
        cout << "Choix 2" << endl;
    }
    if (Choix == 3){
        cout << "Choix 3" << endl;
    }
    if (Choix == 4){
        cout << "Choix 4" << endl;
    }
    if (Choix == 5){
        cout << "Choix 5" << endl;
    }
    if (Choix == 6){
        cout << "Choix 6" << endl;
    }
    if (Choix == 7){
        cout << "Choix 7" << endl;
    }
    if (Choix == 8){
        cout << "Choix 8" << endl;
    }
    return 0;
}