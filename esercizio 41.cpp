//Chiarel Federica 4^C
//Dato un elenco di reparti con l'indicazione del nome e dell'incasso giornaliero calcolare l'incasso medio.
//Definire una funzione per l'acquisizione e la somma dei dati e una funzione per il calcolo della media. ESERCIO 41 PAGINA 128.



#include <iostream>
using namespace std;

  float frutta_verdura;
  float macelleria;
  float pescheria;
  float panetteria;
  
void acquisizione_reparti ();
float somma_reparti();
float media_reparti();
  
  int main()
{
  	
acquisizione_reparti();	
somma_reparti();
 cout<<"la media degli incassi è:" <<media_reparti();
 
 return 0;
}
   
 void acquisizione_reparti ()
  {
 	
  cout<<"inserire incasso giornaliero del reparto frutta_verdura:";
  cin>>frutta_verdura;
  cout<<"inserire incasso giornaliero del reparto macelleria:";
  cin>>macelleria;
  cout<<"inserire incasso giornaliero del reparto pescheria:";
  cin>>pescheria;
  cout<<"inserire incasso giornaliero del reparto panetteria:";
  cin>>panetteria;
  
  } 
 
 float somma_reparti();
{ 
   
   float somma_reparti;
   somma=(frutta-verdura+macelleria+pescheria+panetteria)
    
  return somma_reparti; 
}  
 

 float media_reparti()
 {
   
   float media_reparti;
   media=((somma_reparti)5);
   
  return media_reparti;
   
 }
