#include <iostream>
using namespace std;
class dgt3{ // three 10-ary digits. holds the closed interval [0-999] there is no sign. sign and subtraction will be defined at a later data type.
	public:   // its just 1000-ary number system with only addition and multiplication related functions.
  	bool b[10]={0};
    dgt3(int x=0){ // 12563 ->> 563
    	x%=1000;
    	for(int i=0;i<10;i++){
      	b[i]=x%2;
      	x/=2;}};};
int toint(dgt3 a){// turns digit3 to integer. for printing or some operations.
	int x=0;
	for(int i=0;i<10;i++){
		x*=2;
		x+=a.b[9-i];}
	return x;};
dgt3 operator+(dgt3 a,dgt3 d){// 502+603 = 105.
	int u=toint(a)+toint(d);
	dgt3 w(u);
	return w;}
dgt3 operator+(dgt3 a,int u){// 5555+5=560
   	dgt3 d(u);
	return a+d;};
void operator+=(dgt3 &a,dgt3 b){// 850, 600 --->  450, 600
	a=a+b;};
int operator+=(int &a,dgt3 b){//   850, 600 ---> 1450, 600
	a=a+toint(b);};
dgt3 operator*(dgt3 a,dgt3 b){//  256*256= 536
	dgt3 g;
	if(toint(a)>toint(b)){g=a;a=b;b=g;g=0;}
	for(int i=0;i<toint(a);i++){g+=b;}return g;};
int sumleftover(dgt3 a, dgt3 b){//  256,956 ---> 1
	return (toint(a)+toint(b))/1000;}
int multleftover(dgt3 a, dgt3 b){// 256,256 --> 65 
	return (toint(a)*toint(b))/1000;}

int main(){

return 0;}
