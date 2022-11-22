#include<iostream>
#include<cmath>
using namespace std;
class vecteur3d {
	private:
	float x,y,z;
	
	public:
	
	vecteur3d(float x = 0, float y = 0, float z = 0)  
	{
		this->x=x;
		this->y=y;
		this->z=z;
		
	}

	
	void afficher() {
		cout << "x= "<<x<<",y= "<<y<<",z="<<z << endl;
	}
	
	//La somme de deux vecteur
	vecteur3d somme(vecteur3d  v) {
		vecteur3d s;
		s.x = x + v.x;
		s.y = y + v.y;
		s.z = z + v.z;
		return s;
		
	}
	
	//Le produit scalaire de deux vecteurs
	float produit(vecteur3d v) {
		return x*v.x + y*v.y + z*v.z;
	}
	
	//si deux vecteurs ont les memes composantes
	bool coincide(const vecteur3d & v) {
		return (x == v.x && y == v.y && z == v.z);
	}
	
	//la norme du vecteur
	float norme() {
		return sqrt(x*x + y*y + z*z);
	}
	
	//le vecteur qui la plus grande norme : par valeur
	vecteur3d normax(vecteur3d v) {
		if( this->norme() > v.norme())
		    return *this;
		    
		return v;
	}
	
	//Retourner le vecteur qui la plus grande norme : par adresse
	vecteur3d * normax(vecteur3d * v) {
		if( this->norme() > v->norme())
		    return this;
		    
		return v;
	}
	
	//Retourner le vecteur qui la plus grande norme : par reference
	vecteur3d & normax(vecteur3d &v) {
		if( this->norme() > v.norme())
		    return *this;
		    
		return v;
	}
};

int main() {
	vecteur3d v1(1,1,1);
	cout << "Vecteur V1";
	v1.afficher();
	vecteur3d v2(2,2,2);
	cout << "Vecteur V2";
	v2.afficher();
	cout<<endl;
	cout << "La somme des vecteurs v1 et v2 est : ";
	(v1.somme(v2)).afficher();
	cout << "Le produit scalaire des vecteurs v1 et v2 est : " << v1.produit(v2) << endl;
	cout<<endl;
	
	if(v1.coincide(v2))
	    cout << "Les vecteurs v1 et v2 sont confondus " << endl; 
	else
	    cout << "Les vecteurs v1 et v2 ne sot pas confondus " << endl;
	
	cout<<endl;
	cout << "Le vecteur qui a la plus grande norme par valeur est : ";
	(v1.normax(v2)).afficher();
	cout << "Le vecteur qui a la plus grande norme par adresse est:  ";
	(v1.normax(&v2))->afficher();
	cout << "Le vecteur qui a la plus grande norme  par reference est :";
	(v1.normax(v2)).afficher();
	cout<<endl;
}
