#include <iostream>
using namespace std;

int main(void)
{
    bool tourJoueur = true;
    char accepter = 'a'; // Variable accecpter definie a 'a' pour valeur de neutre
    int nbManche = 5;
    int ptBateau = 600;
    int ptCapitaine = 500;
    int ptEquipage = 400;
    int scoreJoueur;
    int scoreMachine;
    int scoreLancer;
    string equipage;
    string nomJoueur;

    /***********************************************************
    INNITIATION DE LA PARTIE
    Demande du nom du joueur et la modification des paramètres
    des points
    ************************************************************/
    cout << "Veuillez notez votre pseudo : ";
    cin >> nomJoueur;
    while (accepter != 'n' || accepter != 'y')
    {
        cout << "Voulez vous changez de paramètre ? (y/n) " << endl;
        cin >> accepter;
    }
    if (accepter == 'n')
    {
        accepter == 'a';
    }
    if (accepter == 'y')
    {
        cout << "Saisir le nombre de manche : ";
        cin >> nbManche;
    }
}