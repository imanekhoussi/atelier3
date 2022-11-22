#include<iostream>
using namespace std;
class Complexe{
	public:
		float rel,img;
	Complexe(float rel=0,float img=0){
	this->rel=rel;
	this->img=img;
	}
	void Afficher(){
		cout<<rel;
		if(img>0)
	 cout<<"+i "<< img<<endl;
		else
		  cout<<"-i "<<img<<endl;
	}
Complexe operator + (Complexe const &obj) {
         Complexe res;
         res.rel = rel + obj.rel;
         res.img = img + obj.img;
         return res;
    }
	Complexe operator- (Complexe C){
		Complexe S;
	S.img=img-C.img;
	S.rel=rel-C.rel;
	return S;
		
	}
	Complexe operator* (Complexe C){
		Complexe M;
	M.img=img*C.img;
	M.rel=rel*C.rel;
	return M;
}
	Complexe operator/ (Complexe C){
		Complexe D;
	D.img=img/D.img;
	D.rel=rel/D.rel;
	return D;
	}

	void Egalite(Complexe C){
	if(img==C.img&&rel==C.rel)
		cout<<"les deux complexes sont egaux"<<endl;
	else
	cout<<"les deux complexes ne sont pas egaux"<<endl;
	
	}
		
	
};
int main(){
	Complexe C1;
	cout<<"Entrer la partie reele de 1er nombre complexe"<<endl;
	cin>>C1.rel;
	cout<<"Entrer la partie imaginaire"<<endl;
	cin>>C1.img;
	Complexe C2;
	cout<<"Entrer la partie reele de deuxieme nombre"<<endl;
	cin>>C2.rel;
	cout<<"Entrer la partie imaginaire"<<endl;
	cin>>C2.img;
	Complexe S,M;
	S=C1+C2;
	cout<<S.Afficher()<<endl;
	M=C1*C2;
	cout <<"la multiplication des deux nombres est"<< M.Afficher()<<endl;
	
	
return 0;
	
}
	
