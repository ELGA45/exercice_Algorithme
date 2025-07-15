#include<iostream>
#include<string>
using namespace std;

int saisirTaille(){
    int n;
    do{
        cout<<"saisir la taile du tableau: ";
        cin>>n;
    }while(n <= 0);
    return n;
}

int* remplirTableau(int n){
    int i;
    int* tab = new int[n];
    for(i=0; i<n; i++){
        cout<<"Saisir un entier: ";
        cin>>tab[i];
    }
    return tab;
}

void afficheTableau(int* tab, int n){
    for(int i=0; i<n; i++){
        cout<<"|"<<tab[i];
    }
    cout<<"|";
}

void plus_longue_sequence_croissante(int* tab, int n, int& longueur, int& debut, int k) {
    int maxLongueur = 1;
    int currentLongueur = 1;
    int currentDebut = 0;
    debut = 0;
    longueur = 1;
    som = 0;

    for(int i = 1; i < n; i++) {
        if(tab[i] >= tab[i-1]) {
            currentLongueur++;
            som = som + tab[0];
            if(currentLongueur > maxLongueur && som % K = 0) {
                maxLongueur = currentLongueur;
                debut = currentDebut;
                longueur = maxLongueur;
            }
        } else {
                currentLongueur = 1;
                currentDebut = i;
            }
        }
}

void affichage_sous_tableau_croissant(int* tab, int longueur, int debut) {
    cout << "\nPlus longue sequence croissante (" << longueur << " elements): ";
    for(int i = debut; i < debut + longueur; i++) {
        cout << "|" << tab[i];
    }
    cout << "|";
}

int main() {
    int n, longueur, debut;
    n =  saisirTaille();
    cout<<"\n";
    int* tab = remplirTableau(n);
    cout<<"\n Affichage du tableau saisi: \n";
    afficheTableau(tab, n);
    plus_longue_sequence_croissante(tab, n, longueur, debut);
    cout<<"\n";
    affichage_sous_tableau_croissant(tab, longueur, debut);

    return 0;
}
