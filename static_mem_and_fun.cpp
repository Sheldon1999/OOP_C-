#include<iostream>
using namespace std;
class asg{
static int a,b;
int c;
public:
static void getdata(){
cout << "enter first static number:";
cin >> a;
cout << "enter second static number:";
cin >> b;
}
static void display_static(){
cout << "sum of static numbers is:" << a+b << endl;
}
void add(){
cout << "enter local number:";
cin >> c;
cout << "sum of local number and first static number is:" << c+a << endl;
cout << "sum of local number and second static number is:" << c+b << endl;
}
};
int asg :: a;
int asg :: b = 10;
int main(){
asg s,l;
asg :: getdata();
asg :: display_static();
l.add();
asg :: getdata();
l.add();
return 0;
}

