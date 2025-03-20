#include <iostream>

using namespace std;

main (){
	int n1=0, n2=0, n3=0,promedio=0;
	cout<<"ingrese nota 1:";
	cin>>n1;
	cout<<"ingrese nota 2:";
	cin>>n2;
	cout<<"ingrese nota 3:";
	cin>>n3;
	promedio = (n1+n2+n3) / 3;
	cout<<promedio<<endl;
    
    string mensaje="";
    mensaje = promedio>=61 ? "aprovado"   :  "reprovado";
    cout<<"su promedio es de "<<promedio<<" por lo tanto "<<mensaje<<endl;
    
    if(promedio>0 && promedio <61){
    	cout<<"mala nota"<<endl;
	}
	
	if(promedio>61 && promedio <90){
    	cout<<"buena nota"<<endl;
	}
    
	if(promedio>90){
    	cout<<"exelente nota"<<endl;
	}
	
	
	system("pause");
	
}
