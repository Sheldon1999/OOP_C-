#include<iostream>
using namespace std;
class Aha;
class Ank{
int p,q;
public:
Ank(){ }
Ank(int x,int y){
p = x;
q = y;
}
int get_p(){
return p;
}
int get_q(){
return q;
}
};
class Aha{
int a,b;
public:
Aha(){}
Aha(int x){
a = x;
b = 0;
}
Aha(int x,int y){
a = x;
b = y;
}
Aha(Ank t){
a = t.get_p();
b = t.get_q();
}
void show(){
cout << "data entered:" << "\n" << "a:" << a << " " << "b:" << b << "\n";
}
operator int(){
return (a + b);
}
};
int main(){
int data;
cout << "   ###basic to class conversion###" << "\n";
cout << "enter the data:";
cin >> data;
Aha A;
A = data;
A.show();
cout << "   ###class to basic conversion###" << "\n";
cout << " values are 5 and 7" << "\n";
Aha B(5,7);
data = B;
cout << "sum is:" << data << "\n";
cout << "   ###class to class conversion###" << "\n";
cout << " values are 4 and 5" << "\n";
Ank C(4,5);
Aha D;
D = C;
D.show();
return 0;
}






