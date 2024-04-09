/* Andrea Terenziani s284817
 * Questo programma riceve in input coppie di numeri interi, e li rende un numero
 * complesso nella forma a+bi che verrà poi stampato.
 * Su tali numeri verranno inoltre eseguite le operazioni di somma, uguaglianza e calcolo del coniugato.
 * Tutti gli output saranno inseriti all'interno di un file output "result.csv"
 *
 * Tutte le operazioni proprie dei complessi, sono state definite come metodi interni alla classe complesso,
 * così che l'utente sappia le tutte e sole operazioni ammissibili su tale classe

*/





#include <fstream>
#include "complesso.hpp"
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    //dichiaro il file di output
    string filename2("result.csv");
    ofstream ofs(filename2);


    //controllo se il file è stato aperto correttamente
    if (! ofs.is_open())
    { cout<< "errore di apertura del file di output \n";
    }



    //vengono dati in input i numeri naturali che costituiranno la parte
    //reale e immaginaria del numero complesso
    int a,b,c,d;
    a=8;
    b=4;
    c=-8;
    d=-7;

    bool uguale;

    //creo i numeri complessi richiamando il costruttore con parametri della classe complesso
    complesso c1(a,b);
    complesso c2(c,d);


    //stampo in output i numeri complessi appena creati utilizzando il metodo (della classe complesso) di stampa
    ofs<< "il numero complesso e ";
    c2.stampacomplesso(ofs, c1);
    ofs<< "il numero complesso e ";
    c2.stampacomplesso(ofs,c2);


    //calcolo e stampo in output la somma dei due numeri complessi richiamando rispettivamente
    //il metodo somma e stampa (sempre della classe complesso)
    complesso somma;
    somma=somma.sommacomplex(c1,c2);
    ofs<< "La somma e ";
    c2.stampacomplesso(ofs, somma);


    //calcolo e stampo in output l'uguaglianza dei due numeri complessi richiamando rispettivamente
    //il metodo uguaglianza e stampa (sempre della classe complesso)
    uguale=c1.uguaglianzacomplex(c1,c2);
    stampauguaglianza(ofs, uguale);


    //calcolo e stampo in output il coniugato dei complessi
    complesso coniug1;
    coniug1=coniug1.coniugato(c1);
    complesso coniug2;
    coniug2=coniug2.coniugato(c2);
    ofs<<"Il coniugato e ";
    coniug1.stampacomplesso(ofs, coniug1);
    ofs<<"Il coniugato e ";
    coniug2.stampacomplesso(ofs, coniug2);






    //chiudo il file output
    ofs.close();
    return 0;
}
