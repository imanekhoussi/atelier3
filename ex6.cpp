//KHOUSSI Imane
#include <iostream>
using namespace std;

class Personne {
	protected:
	string nom;
	string prenom;
	int DateN; 
	public:
	Personne(string nom,string prenom,int DateN){
	this->nom=nom;
	this->prenom=prenom;
	this->DateN=DateN; 
}
	void Afficher(){
	cout<<"Le nom est "<<nom<<" son prenom est "<<prenom<<"sa date naissance est "<<DateN;
	} 
	};

	class Employe : public Personne{
		private	:
		float Salaire;
		public:
		Employe(string nom,string prenom,int DateN,int salaire):Personne(nom,prenom,DateN){
				this->Salaire=salaire;
		}
		void Afficher(){
			Personne::Afficher();
			cout<<"son salaire est : "<<Salaire;
					}
			};

class Chef :public Employe{
	private:
		string service;
	public:
		Chef(string nom,string prenom,int DateN,float salaire,string service):Employe(nom,prenom,DateN,salaire){
			this->service=service;
}
		void Afficher(){
			Employe::Afficher();
			cout<<"son service est :"<<service;
} 
};

class Directeur:public Chef{
	private:
		string societe;
	public:
		Directeur(string nom,string prenom,int DateN,float salaire,string service,string societe):Chef(nom,prenom,DateN,salaire,service){
			this->societe=societe;
}
void Afficher(){
		Chef::Afficher();
		cout<<"sa societe est : "<<societe;
} 
};
int main(){

Personne P("mohamed","hamed ",1970);
Employe E("Nihal","Kamal ",1990,3000);
Chef C( "Sohaib","Mohamed ",2000,5000,"Compta");
Directeur D("Karim","karami ",1980,9000,"compta","sarl");
cout<<"La personne"<<endl;
P.Afficher();
cout<<"Lemploye"<<endl;
E.Afficher();
cout<<"Le chef"<<endl;
C.Afficher();
cout<<"Le directeur"<<endl;
D.Afficher();
}

