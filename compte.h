#ifndef DEF_COMPTE
#define DEF_COMPTE


#include <iostream>
#include <cstring>
#include <stdio.h>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

class compte_bancaire
{
public:
int point;
int choix;
string utilisateur;

compte_bancaire();
virtual ~compte_bancaire();

private:
void introduction_carte();
void operation_souhaite();
void voirsolde();
void virement();
void retrait();
protected:

};


#endif // DEF_GPS
