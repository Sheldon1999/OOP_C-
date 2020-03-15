#include<iostream>
using namespace std;
class data{
int a,b;
public:
void getdata(){
cout << "enter the numbers:";
cin >> a >> b;
}
void operator-();
void operator++();
void operator++(int);
friend void operator--(data);
friend void operator--(data,int);
void display(){
cout << "numbers after operation:" << a << " " << b << "\n";
}
};
void data :: operator-(){
cout << "=>for unary minus overloading;\n";
getdata();
a = -a;
b = -b;
display(); 
}
void data :: operator++(){
cout << "=>for preincrement overloading;\n";
getdata();
a = ++a;
b = ++b;
display();
}
void data :: operator++(int){
cout << "=>for postincrement overloading;\n";
getdata();
a = a++;
b = b++;
display();
}
void operator--(data d){
cout << "=>for predecrement overloading;\n";
d.getdata();
d.a = --d.a;
d.b = --d.b;
d.display();
}
void operator--(data d,int){
cout << "=>for postdecrement overloading;\n";
d.getdata();
d.a = d.a--;
d.b = d.b--;
d.display();
}
int main(){
data d;
-d;
++d;
d++;
--d;
d--;
cout << "programme ended :)";
return 0;
}
