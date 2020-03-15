#include<iostream>
using namespace std;
struct grade{
    string name;
    int marks_p,marks_c,marks_m,per; 
};
int main(){
struct grade s[3];
int i;
for(i=0;i<3;i++){
cout << "enter the name of student-" << i+1 <<":";
cin >> s[i].name;
cout << "enter the marks of physics:";
cin >> s[i].marks_p;
cout << "enter the marks of chemistry:";
cin >> s[i].marks_c;
cout << "enter the marks of maths:";
cin >> s[i].marks_m;
s[i].per = (s[i].marks_p + s[i].marks_c + s[i].marks_m)/3;
}
for(i=0;i<3;i++){
cout << "Grade of student-" << s[i].name << ":";
if(s[i].per>=80)
cout << "A";
else if(s[i].per>=60&&s[i].per<80)
cout << "B";
else if(s[i].per>=50&&s[i].per<60)
cout << "C";
else if(s[i].per>=40&&s[i].per<50)
cout << "D";
else
cout << "F";
cout << "\n";
}
return 0;
}


