/*AED K1051
2019
169040-1 
Echaide, Juan Ignacio
TP # 8 */

#include <iostream>

bool IsBisiesto(int);
int main(){

assert(true==IsBisiesto(2000));
assert(false==IsBisiesto(2001));
assert(true==IsBisiesto(1888));
assert(true==IsBisiesto(1889));
}

bool IsBisiesto(int y){

	return (y%4==0) ? true:
			(y%100!=0 and y%400==0) ? true:
			false;

}
