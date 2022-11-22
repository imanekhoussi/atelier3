//KHOUSSI Imane
#include <iostream>
#include<cstring>

using namespace std;

class media{
 public:
     char titre[15];

	char *id(char *i){
 strcpy(titre,i);
 return titre;
}

 virtual void imprimer(){
 cout<<"l'id du media est :"<<titre<<endl;}};



class audio:public media{
public:
    int duree;
    int getDuree(){
    return duree;}

    void imprimer(){

        media::imprimer();
    cout<<"le duration de l audio est "<<duree<<"sec"<<endl;}};




class livre:public media{
public:

string auteur;
    string getAuteur(){
    	return auteur;}

    void imprimer(){

  media::imprimer();
    cout<<"le nom de l auteur de livre  est "<<auteur<<endl;}};




class press:public media{
public:

	string nomP;
    string getNomP(){
	    return nomP;}

    void imprimer(){

     media::imprimer();
    cout<<"le nom du press  est "<<nomP<<endl; }};




class journal: public press{
	public :
    string journaliste;
    string getJournaliste(){
    	return journaliste;}

    void imprimer(){

     press::imprimer();
    cout<<"le nom du journaliste est "<<journaliste<<endl; }};


class magasine: public press{
	public :
     string nomM;
    	string getnomM(){
    		return nomM;}

    void imprimer(){

     press::imprimer();
    cout<<"le nom du magasine est "<<nomM<<endl; }};



class revue: public press{
public :
     string scientist;
	 string getScientist(){
	 	return scientist;
	 }

    void imprimer(){

     press::imprimer();
    cout<<"le nom de scientifique est : "<<scientist<<endl; }

};


class disque: public audio{
	public :

		string disc;
    	string getDisc(){
	    return disc;}

    void imprimer(){

     audio::imprimer();
   	 cout<<"le nom du disque est : "<<disc<<endl; }

};


class cd: public audio{
public :
    string marque;
 	string getMarque() {
			 return marque;
			 }

    void imprimer(){
     audio::imprimer();
    cout<<"la marque de cd est  : "<<marque<<endl; }};

class cassette: public audio{
	public :
  	  string nomc;
		 string getNomc(){
		    return nomc;}

    void imprimer(){

     audio::imprimer();
			    cout<<"le titre de casette est   : "<<nomc<<endl; }};
			
			
			
			
			
			
			
			int main()
			{
			
			media M;
			M.id("M10");
			M.imprimer();
			
			
			audio A;
			A.id("A55");
			A.duree=3;
			A.getDuree();
			A.imprimer();
		
			
			livre L;
			L.id("L15");
			L.auteur='Ahmed';
			L.getAuteur();
			L.imprimer();
		
		
			press P;
			P.id("cj145279");
			P.nomP='alsabah';
			P.getNomP();
			P.imprimer();
			

			
			cd C;
			C.id("lj22");
			C.marque='marka';
			C.duree=4;
			C.getMarque();
			C.getDuree();
			C.imprimer();
			
			cassette C1;
			C1.id("C555");
			C1.nomc='caseta';
			C1.duree='5';
			C1.getNomc();
			C1.getDuree();
			C1.imprimer();
			
			journal J1;
			J1.id("J44");
			J1.journaliste='Mohamed';
			J1.getJournaliste();
			J1.imprimer();
	
			}
