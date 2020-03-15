#include<iostream>
using namespace std;
class data1{
int a;
public:
void getdata(){
cout << "enter the first number:";
cin >> a;
}
friend class mul;
};
class data2{
int b;
public:
void getdata(){
cout << "enter the second number:";
cin >> b;
}
friend class mul;
};
class mul{
int c;
public:
void display(data1 &A,data2 &B){
cout << "multiplication is:" << A.a * B.b;
}
};
int main(){
data1 x;
data2 y;
mul z;
x.getdata();
y.getdata();
z.display(x,y);
return 0;
} 
