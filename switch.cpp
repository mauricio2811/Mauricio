#include <iostream>
using namespace std; 
main()
{
 
int dato;
 
for (dato = 3;dato < 13;dato = dato + 1) {
 
switch (dato) {
 
case 3  : cout << "El valor es tres \n";
 
break;
 
case 4  : cout << "El valor es cuatro\n";
 
break;
 
case 5  :
 
case 6  :
 
case 7  :
 
case 8  : cout << "El valor esta entre 5 y 8\n";
 
break;
 
case 11 : cout << "El valor es once\n";
 
break;
 
default : cout << "Es uno de los valores no definidos\n";
 
break;
 
} // fin del switch
 
} //fin del bucle for
 
}
