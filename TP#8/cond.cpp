/*AED K1051
2019
169040-1 
Echaide, Juan Ignacio
TP # 8 */

#include <iostream>
#include <cassert>

double f3(double);

int main(){
assert(-4==f3(-4));
assert(0== f3(0));
assert(2==f3(-2));
assert(-2==f3(2));
assert(4==f3(4));
}

double f3(double x){
	return (x>-3 and x<3) ? -x :
							 x ;
}
