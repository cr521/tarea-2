#include <iostream>

using namespace std;

main (){
	// and (y) &&
	// or (o) ||

	char lapiz,lapicero,cuaderno;
	cout<<"trae lapiz (s/n): ";
	cin>>lapiz;
	cout<<"trae lapicero (s/n): ";
	cin>>lapicero;
	cout<<"trae cuaderno (s/n): ";
	cin>>cuaderno;
	
	
	//puede entar a mi clase si usted trae lapiz o lapicero 
	// and = el valor es verdadero si ambas son verdaderos 
	// puede entrar a mi clase si usted trae un lapiz o un lapicero 
	// or (o) = el valor es verdadero si por lo menos una es verdadera
	//puede entar a mi clase si usted trae un lapiz o un lapicero y un cuaderno 
	
	if ((lapiz=='s' || lapicero=='s') && cuaderno=='s'){
		cout<<"ingresa"<<endl;
		
	}else{
		cout<<"lo siento no puede ingresar: "<<endl;
		
	}
	
	
	
	
	
	
	
	
	
	
	system("pause");
}
