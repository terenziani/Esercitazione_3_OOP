#include "complesso.hpp"



//costruttore di default
complesso::complesso(){

}


//costruttore con parametri: crea il numero complesso dati due parametri interi
complesso::complesso(int a , int b){
    reale=a;
    immaginario=b;
}


//metodo che stampa sul file output il numero complesso in forma a+bi
void complesso::stampacomplesso(ofstream& file, complesso x)
{
    if (x.immaginario==0){
        file<<x.reale<<"\n";
    }
    else if (x.immaginario>0)
    {
        file<<x.reale<<"+"<<x.immaginario<<"i\n";
    }
    else
    {
        file<<x.reale<<x.immaginario<<"i\n";
    }

}


//metodo che restituisce un complesso che è la somma dei due numeri complessi passati come parametri
complesso complesso::sommacomplex(complesso a, complesso b)
{
    complesso sum;
    sum.reale=a.reale+b.reale;
    sum.immaginario=a.immaginario+b.immaginario;
    return sum;
}


//metodo che restituisce un booleano. Esso sarà True solo se i due complessi passati come parametri sono uguali
bool complesso::uguaglianzacomplex(complesso a, complesso b)
{

    if (a.reale==b.reale)
    {
        return (a.immaginario==b.immaginario);

    }
    else
    {
        return (false);
    }
}


//metodo che restituisce un complesso che è il coniugato del numero complesso passato come parametro
complesso complesso::coniugato(complesso a)
{
    complesso coniug;
    coniug.reale=a.reale;
    coniug.immaginario=-(a.immaginario);
    return coniug;
}


//funzione stampa (NB non è un metodo)
void stampauguaglianza(ofstream& file, bool a)
{
    if (a==true)
    {
        file<<"I due numeri complessi sono uguali \n";
    }
    else
    {
        file<<"I due numeri complessi sono diversi \n";
    }

}


