//Codigo para explicacion del Metodo Burbuja
//Autor: Eduardo Isaac Davila Bernal
//Fecha: 15/02/2019

#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
	int array[50];
	int i=0 ,j=0 ,aux=0 ,n=0 ;
	
	cout<<"Cuantos numeros quieres ordenar?: "; cin>>n;
	
	for(i=1; i<=n; i++){
		cout<<"Numero: "; cin>>array[i];
	}
	
	for(i=1;i<n-1;i++){
		for(j=1;j<n-1;j++){
			if(array[j] > array[j+1]){	
				aux = array[j];
				array[j] = array[j+1];
				array[j+1] = aux;
			}
		}
	}
	
	cout<<"Numeros de forma Ascendente: ";
	for(i=1;i<=n;i++){
		cout<<array[i]<<" ";
	}
	
	cout<<"\nNumeros de forma Descendente: ";
	for(i=n;i>=1;i--){
		cout<<array[i]<<" ";
	}
	
	getch();
	return 0;
}
