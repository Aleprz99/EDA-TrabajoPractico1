
#include <ctype.h>
#include <conio.h>
#include<iostream>

using namespace std;



int main(){
		int vec[100],n;
	
	
		cout<<"ingrese la cantidad de n numeros "<< endl;
		cin>>n;
			
		for(int i=0;i<n;i++){
		
		cout<<"Digite un número "<< endl;
		
		
		cin>> vec[i];}

	
		for (int i=0;i<n; i++){
		
		cout<<i<< " = "<<vec[i]<<endl;
	}

	getch();
	return 0;
}
