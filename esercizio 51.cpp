//Chiarel Federica 4^C
//Dopo aver caricato in memoria un array di numeri interi con 10 componenti, contare le componenti 
//che hanno valore superiore a 5. ESERCIZIO 51 PAGINA 128.

#include <iostream>
using namespace std;

int array_interi [10]; //array di dimensione 10
int conta;    //conta le componenti di valore>5
int i;       //posizione all'interno del'array



int main() {
   
   for(i=0;i<10;i=i+1){     //(valore_iniziale;condizione;incremento;)

cout<< "inserisci un valore " << i+1 << "il valore è:" ;
cin >> array_interi [i];

 }
 
   for(i=0;i<10;i=i+1){
 	
 if(array_interi[i]>5){    
   conta=conta+1;	
 }
 else { 
   conta=conta;
 }
   
 }
cout<<"Le componenti di valore maggiore a 5 sono: "<<conta<< endl;

return 0;
}

 
