//Chiarel Federica 4^C
//Dopo aver acquisito da tastiera i nomi e i voti ottenuti da due candidati in un ballottaggio, calcolare la percentuale
//di ciascuno rispetto alla somma dei voti e scrivere i nomi dei candidati in ordine decrescente di percentuale. ESERCIZIO 43 PAGINA 128.


#include <iostream>
#include <string>
using namespace std;


void acquisizione();
float percentuale();
void ordinamento();
int somma_voti();
string nome_1;
string nome_2;
int voti_1;
int voti_2;
float percetuale_1;
float percentuale_2;


int main() {
	void acquisizione();
	cout<<"la percentuale di........é     "<<percentuale();
	
return 0;
}	


void acquisizione() 
{ 
  cout<<"inserire il nome del primo candidato";
  cin>>nome_1;
  cout<<"inserire il nome del secondo candidato";
  cin>>nome_2;
  cout<<"insersci numero voti del primo candidato";
  cin>>voti_1;
  cout<<"inscerisci numero voti del secondo candidato";
  cin>>voti_2;
}	
	

int somma_voti()
{ 

  int voti;
  somma_voti=(voti_1+voti_2)

return somma_voti;
}  


float percentuale()
{
	
   float percentuale_1;
   percentuale_1=(somma_voti*voti_1)/100
   float percentuale_2;
   percentuale_2=(somma_voti*voti_2)/100
   
return percentuale;
}

void ordinamento()
{
	if ((percentuale_1)>(percentuale_2)){
    cout<<percentuale_1<<endl;
    cout<<percentuale_2<<endl;
	
}
    else {
    cout<<percentuale_2<<endl;
	cout<<percentuale_1<<endl;	

}
  
return 0;

}




