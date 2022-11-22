#include<iostream>
using namespace std;
//l'utilisateur genere le destructeur 
string des(){
string destructeur;
cout<<"Entrer votre destructeur "<<endl;
cin>>destructeur;
return destructeur;
}

class MyClass {
public:
int age;
public:

MyClass();

~MyClass();
};

MyClass::MyClass(){
cout<<"I am constructeur "<<endl;
}
MyClass::~MyClass(){
	des();
	cout<<" votre detructeur execute avec succes"<<endl;
}

string destruceur(){
	string des;
	cout<<"Entrer le destructeur "<<endl;
	cin>>des;
	return des;
}
int main(){

MyClass m1;
return 0;
}

