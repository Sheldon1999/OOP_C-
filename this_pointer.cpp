#include<iostream>
using namespace std;
class sum{
private:
int a,b;
public:
void getdata(){
int x,y;
cout << "enter the values:";
cin >> x >> y;
a = x;
b = y;
}
void setdata(){
int a,b;
cout << "enter the values:";
cin >> a >> b;
this->a = a;
this->b = b;
//showing that left ones are belonging to class ad right ones are LOCAL..!
}
void show();
};
void sum :: show(){
cout << "sum is:" << a + b << "\n";
}
int main(){
sum s;
s.getdata();
s.show();
s.setdata();
s.show();
return 0;
}
