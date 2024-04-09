//utilizzo header guard
#ifndef COMPLESSO_HPP
#define COMPLESSO_HPP

#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;


/*dichiaro la classe complesso, che ha in privato due campi, il primo che contiene la parte reale
del numero complesso, e il secondo la parte immaginaria.
In public invece sono dichiarati tutti i metodi esportati da questa classe, quindi tutte e sole
le operazioni che si possono svolgere sulla classe complesso.
I metodi sono poi definiti in "complesso.cpp"
NB: stampauguaglianza non è un metodo in quanto lavora su booleani e non su complessi
*/

class complesso
{
    int reale;
    int immaginario;

public:
    complesso();
    complesso(int a, int b);
    void stampacomplesso(ofstream& file, complesso x);
    complesso sommacomplex(complesso a, complesso b);
    complesso coniugato(complesso a);
    bool uguaglianzacomplex(complesso a, complesso b);

};



void stampauguaglianza(ofstream& file, bool a);






#endif // COMPLESSO_HPP
