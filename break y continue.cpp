#include <iostream>
using namespace std;
 
main()
 
{
	int z=0;
 
int xx;
 
for(xx = 5;xx < 15;xx = xx + 1){
 
if (xx == 8)
 
break;
 
cout <<"En el bucle break, xx es ahora " << xx << "\n"; }
 
for(xx = 5;xx < 15;xx = xx + 1){
 
if (xx == 8)

continue;
 
cout <<"En el bucle continue, xx es ahora " << xx << "\n"; }

}


