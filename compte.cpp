#include "compte.h"



compte_bancaire::compte_bancaire(){
    introduction_carte();




    int choix2;
    cin >> choix2;
}

compte_bancaire::~compte_bancaire(){

}

void compte_bancaire::introduction_carte(){
    cout << "bienvenue" << endl;
    cout << "entrez votre nom"<< endl;

    cin >> utilisateur;
cout << endl;cout << endl;
    cout << utilisateur << endl << "Entrez votre code secret" << endl;
cout << endl;cout << endl;
    int *choix;
    choix = new int;
    cin >> *choix;
cout << endl;cout << endl;
            if(*choix == 0000) {
                operation_souhaite();
            }
            else{
    int essai = 1;

     cout << "faux" << endl;
     cout << endl;cout << endl;
     cout << utilisateur << endl << "Entrez votre code secret a nouveau" << endl;

     cin >> *choix;
     cout << endl;cout << endl;
                if(*choix == 0000) {
                    operation_souhaite();
                    essai++;
                }

     cout << "faux" << endl;
     cout << endl;cout << endl;cout << endl;
     cout << utilisateur << endl << "Entrez votre code secret a nouveau" << endl;

     cin >> *choix;
     cout << endl;cout << endl;
                if(*choix == 0000) {
                    operation_souhaite();
                    essai++;
                } else {
        cout << utilisateur << " tu t'es trompe 3fois t'es sur que c'est ta carte ? Je la garde au cas ou..." << endl;
        exit(1);
                }


            }

}

void compte_bancaire::operation_souhaite(){
int operation;
    cout << "entrez l'operation choisie"<< endl;
    cout << "1 : voir solde || 2: retrait || 3: virement" << endl;
    cin >> operation;

            if( operation== 1 ){
                voirsolde();

            }
            if( operation== 2 ){
                retrait();
            }
            if( operation== 3 ){
                virement();
            }

    exit(1);

}

void compte_bancaire::voirsolde(){

int compte1 = 2000;
int compte2 = 400;
int compte;
int compte3= -150;

    cout << "entrez le compte a voir"<< endl;
    cout << " compte 1 / compte 2 / compte 3" << endl;

    cin >> compte;
            if( compte== 1 ){
    cout << "compte1 : "<< compte1 << endl;
    exit(1);
            }
            if( compte== 2 ){
    cout << "compte2 : "<< compte2 << endl;
    exit(1);
            }
            if( compte== 3 ){
    cout << "compte3 : "<< compte3 << endl;
    exit(1);
            }

    exit(1);

}

void compte_bancaire::retrait(){

int compte1 = 2000;
int compte2 = 400;
int compte;
int *sommeadebiter;
sommeadebiter = new int;
int compte3= -150;

    cout << "entrez le compte a debiter"<< endl;
    cout << " compte 1 / compte 2 / compte 3" << endl;

    cin >> compte;
            if( compte== 1 ){
    cout << "compte1 : "<< compte1 << endl;
    cout << "combien voulez-vous retirer ?" << endl;

    cin >> *sommeadebiter;

    compte1= compte1-*sommeadebiter;
    cout << "compte1 nouveau solde : "<< compte1 << endl;
    exit(1);
            }
            if( compte== 2 ){
    cout << "compte2 : "<< compte2 << endl;
    cout << "combien voulez-vous retirer ?" << endl;

    cin >> *sommeadebiter;

    compte2= compte2-*sommeadebiter;
    cout << "compte2 nouveau solde : "<< compte2 << endl;
    exit(1);
            }
            if( compte== 3 ){
    cout << "compte3 : "<< compte3 << endl;
    cout << "combien voulez-vous retirer ?" << endl;

    cin >> *sommeadebiter;

    compte3= compte3-*sommeadebiter;
    cout << "compte3 nouveau solde : "<< compte3 << endl;
    exit(1);
            }

    exit(1);
}


void compte_bancaire::virement(){
int compte1 = 2000;
int compte2 = 400;
int compte;
int *sommeadebiter;
sommeadebiter = new int;
int compte3= -150;
int *compteacrediter;
compteacrediter = new int;
int sommeatransferer;

    cout << "entrez le compte a debiter"<< endl;
cout << " compte 1 / compte 2 / compte 3" << endl;
    cin >> compte;
    cout << endl;cout << endl;
        if( compte== 1 ){
        cout << "compte1"<< compte1 << endl;
        cout << "combien voulez-vous retirer ?" << endl;

        cin >> *sommeadebiter;
        cout << endl;cout << endl;
        compte1= compte1-*sommeadebiter;
        sommeatransferer=*sommeadebiter;
        cout << "compte1 nouveau solde : "<< compte1 << endl;

        cout << "Vers quel compte faire le virement ?" << endl << endl << "compte 2 touche 2 || compte3 touche 3" ;
        cin >> *compteacrediter;
        cout << endl;cout << endl;

            if( *compteacrediter== 2 ){
            cout << "compte2"<< compte2 << endl;
            compte2 = compte2+sommeatransferer;
            cout << endl;cout << endl;
            cout << "compte2 nouveau solde"<< compte2 << endl;
            exit(1);
            }
            if( *compteacrediter== 3 ){
            cout << "compte3"<< compte3 << endl;
            compte3 = compte3+sommeatransferer;
            cout << endl;cout << endl;
            cout << "compte3 nouveau solde"<< compte3 << endl;
                exit(1);
            }

                exit(1);
        }

        if( compte== 2 ){
    cout << "compte2"<< compte2 << endl;
    exit(1);
            }
            if( compte== 3 ){
    cout << "compte3"<< compte3 << endl;
    exit(1);
            }

    exit(1);

}

