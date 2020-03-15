#include<iostream>
using namespace std;
class sum2;
class sum1{
int a;
public:
void getdata(){
cout << "enter the first number:";
cin >> a;
}
friend void addition(sum1,sum2);
};
class sum2{
int b;
public:
void getdata(){
cout << "enter the second number:";
cin >> b;
}
friend void addition(sum1,sum2);
};
void addition(sum1 x,sum2 y){
int c;
c = x.a + y.b;
cout << "sum of numbers is:" << c;
}
int main(){
sum1 w;
sum2 t;
w.getdata();
t.getdata();
addition(w,t);
return 0;
}
