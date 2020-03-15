#include<iostream>
using namespace std;
class consumers{
public:
void def_con(){
cout << "Cosumers are those who are dependent on others for food" << "\n";
}
};
class herbivorous: public virtual consumers{
public:
void def_herb(){
cout << "herbivorous are the consumers , depend upon herbs." << "\n";
def_con();
}
};
class carnivorous: public virtual consumers{
public:
void def_carn(){
cout << "carnivorous are the consumers , depend upon meat." << "\n";
def_con();
}
};
class omnivorous: public herbivorous,public carnivorous{
public:
void def_Omn(){
cout << "omnivorous are the consumers , depend upon herbivorous and carnivorous." << "\n";
def_herb();
def_carn();
}
};
int main(){
omnivorous O;
O.def_Omn();
return 0;
}
