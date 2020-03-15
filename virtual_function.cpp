#include<iostream>
using namespace std;
class per{
public:
virtual void name() = 0;
virtual void number() = 0;
};
class student : public per{
string na;
int roll_num;
long long int num; 
public:
student(){
cout << " ##Enter the deatails of student :" << "\n";
}
~student(){
cout << "   🙏🙏🙏🙏🙏🙏" << "\n";
}
void name(){
cout << "enter the name:";
cin >> na;
}
void number(){
cout << "enter phone number:";
cin >> num;
}
void rollnum(){
cout << "enter roll number:";
cin >> roll_num;
}
void show_st(){
cout << ">>> here are details of student:" << "\n";
cout << "        Name : " << na << "\n";
cout << "Phone Number : " << num << "\n";
cout << " Roll Number : " << roll_num << "\n";
}
};
class faculty : public per{
string na,sub;
long long int num;
public:
faculty(){
cout << " ##Enter the deatails of faculty :" << "\n";
}
~faculty(){
cout << "   🙏🙏🙏🙏🙏🙏" << "\n";
}
void name(){
cout << "enter the name:";
cin >> na;
}
void number(){
cout << "enter phone number:";
cin >> num;
}
void subject(){
cout << "enter subject:";
cin >> sub;
}
void show_fy(){
cout << ">>> here are details of faculty:" << "\n";
cout << "            Name : " << na << "\n";
cout << "    Phone Number : " << num << "\n";
cout << "teaching subject : " << sub << "\n";
}
};
int main(){
student s;
s.name();
s.number();
s.rollnum();
s.show_st();
faculty f;
f.name();
f.number();
f.subject();
f.show_fy();
return 0;
}
