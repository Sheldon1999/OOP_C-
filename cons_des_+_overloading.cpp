#include<iostream>
using namespace std;
class mul{
int a,b,c;
public:
//constructor:
mul();
//constructor overloading:
mul(int a);
mul(double s,double d);
//copy constructor:
mul(mul & x){
a = x.a;
b = x.b;
c = a * b;
}
int multiply();
void display();
//desructor:
~mul();
};
mul::mul(){
cout << "enter the values:";
cin >> a >> b;
}
mul::mul(int a){
c = 5 * a;
}
mul::mul(double s,double d){
c = s * d;
}
int mul::multiply(){
c = a * b;
}
void mul::display(){
cout << "answer is:" << c << "\n";
}
mul::~mul(){
cout << "Thank you";
}
int main(){
mul m;mul m1(2);mul m3(3.9,6.7);mul m4(m3);
m.multiply();m.display();m1.display();m3.display();m4.display();

return 0;
}

