#include<iostream>
using namespace std;
class area{
int p,q,r;
public:
void AREA(int p,int q){
cout << "area of rectangle is:" << p*q;
}
void AREA(int r){
cout << "area of circle is:" << 3.14*r*r;
}
};
int main(){
int a,b,c,x;
area A;
cout << "for area of ractangle enter 1 and for circle enter 2:";
cin >> x;
if(x == 1){
cout << "enter the first parameter:";
cin >> a;
cout << "enter the second parameter:";
cin >> b;
A.AREA(a,b);
}
else if(x == 2){
cout << "enter the radius:";
cin >> c;
A.AREA(c);
}
return 0;
}
