//KHOUSSI Imane
#include <iostream>

using namespace std;

class animal{       

public:
   int age;        
   string nom;
   animal(){}
    void set_value(int age,string nom){
    this->age=age;
    this->nom=nom;
	}
	
	};

class zebra : public animal {    

 public :
    string origine; 
     zebra(){
     }

    int get_age(){
    return age;}
    string get_name(){
    return nom; }
    void set_origine(string x){
    origine=x;}

    string get_origine(){
    return origine; }




 void detail() {      

cout<<"l'age du zebra est : "<<get_age()<<endl;
cout<<"son nom est : "<<get_name()<<endl;
cout<<"son origine est : "<<get_origine()<<endl;}
} ;



class dolphine : public animal {   //declaration du sous class doplhine
 public :
    string origine;
     dolphine(){
     }

    int get_age(){
    return age;}
    string get_name(){
    return nom;
    }
    void set_origine(string x){
    origine=x;
    }
    string get_origine(){
    return origine; }


 void details() {      
cout<<"l'age du dolphine est : "<<get_age()<<endl;
cout<<"son nom est : "<<get_name()<<endl;
cout<<"son origine est : "<<get_origine()<<endl; }} ;






int main()
{

zebra z1; 
  z1.set_value(10,"zebra");
  z1.set_origine("africa");
  z1.detail();
dolphine d1;    
 d1.set_value(25,"dolphine");
 d1.set_origine("europe");
  d1.details();


    return 0;
}
