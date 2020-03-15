#include<iostream>
using namespace std;
class Ank{
int A,B;
public:
void getdata(){
cout << "enter the values:";
cin >> A >> B;
}
void print_sum();
};
void Ank::print_sum(){
cout << "Sum is:" << A + B;
}
int main(){
Ank a;
a.getdata();
a.print_sum();
return 0;
}

