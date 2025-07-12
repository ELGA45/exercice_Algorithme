#include<iostream>
#include<string>
#include<vector>
#include<map>

using namespace std;


class Vente {
    private: string dateVente, prenomClient;
            int numVente;
    public:
        void saisir(){
            cout<<"Saisir le numero de vente :";
            cin>>numVente;
            cin.ignore();
            cout<<"Saisir le prenom et nom du client :";
            getline(cin, prenomClient);
            cout<<"Saisir la date de vente :";
            getline(cin, dateVente);

        }

        void afficherVente(){
            cout<<"[Numero de vente: "<<numVente<<", Penom et Nom du client: "<<prenomClient<<", Date de vente: "<<dateVente<<"]\n";
        }
        int getNumVente(){
            return numVente;
        }

        friend ostream& operator<<(ostream& cou, const Vente& v){
                cou<<"[Numero de vente: "<<v.numVente<<", Prenom et Nom du client: "<<v.prenomClient<<", Date de vente: "<<v.dateVente<<"]\n";
                return cou;
        }

};

class Vendeur {
    private:
        string matricule, nom, prenom;
        int nbrVente;
        vector<Vente> ventes;
    public:
        /*Vendeur(int nbVentes) : nbrVente(nbVentes) {}*/
        void saisir(){
            cout<<"Saisir le Maticule :";
            cin>>matricule;
            cout<<"Saisir le nom :";
            cin>>nom;
            cout<<"Saisir le prenom :";
            cin>>prenom;
            do{
                cout<<"Saisir le nbr de vente :";
                cin>>nbrVente;
            }while(nbrVente <= 0);
        }

        string getMatricule()const {
            return matricule;
        }

        int getNbrVente(){
            return nbrVente;
        }

        vector<Vente> getVente(){
            return ventes;
        }

        void addVente(Vente vt){
            ventes.push_back(vt);
        }

        /*void afficherTabVente() const {
            int j = 1;
            for(Vente v : ventes){
                cout<<"Vente "<<j<<" :\n";
                cout<<v;
                j++;
            }
        }*/

        /*void afficherVendeur() const {
            cout<<"[Nom : "<<nom<<", Prenom: "<<prenom<<"]\n";
            cout<<"les ventes:\n";
            afficherTabVente();
        }*/

        friend ostream& operator<<(ostream& out,const Vendeur& v){
                out<<"[Nom : "<<v.nom<<", Prenom: "<<v.prenom<<"]\n";
                out<<"les ventes:\n";
                for(const Vente& vt : v.ventes){
                    int j = 1;
                    out<<"Vente "<<j<<" :\n";
                    out<<vt;
                    j++;
                }
                return out;
            }
        /*Vendeur operator+(const Vendeur& v){
            return Vendeur(nbrVente + v.nbrVente);
        }
         void display(){
                cout<<nbrVente;
            }*/

};
 #define n 2

int main(){
    map<string, Vendeur> vendeurs;
    for(int i=0; i<n; i++){
        Vendeur v;
        v.saisir();
        for(int j=0; j < v.getNbrVente(); j++){
            Vente vt;
            vt.saisir();
            v.addVente(vt);
        }
        vendeurs[v.getMatricule()] = v;
    }

    for(const auto& pair : vendeurs){
        const Vendeur& vd = pair.second;
        cout<<pair.first <<" "<<vd<< endl;
    }

     /*Vendeur v1(24);
    Vendeur v2(10);
    Vendeur v3 = v1 + v2;
    cout<<"\n";
    v3.display();*/

    return 0;
}
