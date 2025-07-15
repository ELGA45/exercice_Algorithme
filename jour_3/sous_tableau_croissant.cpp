#include<iostream>
#include<string>
using namespace std;

int saisirTaille(){
    int n;
    do{
        cout<<"saisir la taile du tableau ou un nombre k: ";
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
    int somme = 0;  // Variable pour calculer la somme
    int maxSomme = 0;  // Pour stocker la somme de la plus longue séquence valide

    for(int i = 1; i < n; i++) {
        if(tab[i] >= tab[i-1]) {
            currentLongueur++;

            // Calculer la somme de la séquence courante
            if(currentLongueur == 1) {
                somme = tab[i-1];  // Premier élément de la séquence
            }
            somme += tab[i];  // Ajouter l'élément courant

            // Vérifier si la séquence est valide (somme divisible par k)
            if(currentLongueur > maxLongueur && somme % k == 0) {
                maxLongueur = currentLongueur;
                debut = currentDebut;
                longueur = maxLongueur;
                maxSomme = somme;
            }
        } else {
            // Réinitialiser pour une nouvelle séquence
            currentLongueur = 1;
            currentDebut = i;
            somme = tab[i];  // Nouvelle somme commence avec cet élément
        }
    }

    // Vérifier une dernière fois au cas où la meilleure séquence serait à la fin
    if(currentLongueur > maxLongueur && somme % k == 0) {
        maxLongueur = currentLongueur;
        debut = currentDebut;
        longueur = maxLongueur;
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
    int n, k, longueur, debut;
    n =  saisirTaille();
    k =  saisirTaille();
    cout<<"\n";
    int* tab = remplirTableau(n);
    cout<<"\n Affichage du tableau saisi: \n";
    afficheTableau(tab, n);
    plus_longue_sequence_croissante(tab, n, k, longueur, debut);
    cout<<"\n";
    affichage_sous_tableau_croissant(tab, longueur, debut);

    return 0;
}
