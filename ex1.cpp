//KHOUSSI Imane
#include<iostream>
using namespace std;
class Mere{
	public:
		void display(){
			cout<<"Je suis la classe mere";
		}
};
class Fille:public Mere{
	public:
		void display(){
			cout<<"Je suis la classe fille";
		}
};
int main(){
	Fille A;
	A.display();	
}
