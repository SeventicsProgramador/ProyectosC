#include<iostream>
using namespace std;
int main(){
	int numA;
	float sueldo;
	float aumento;
	int numE = 1;
		do{
			
			cout<<"Ingrese el sueldo base mensual del empleado "<<numE<<"\n";
			cin>>sueldo;						
			if(sueldo!=0){
				numE++;
				cout<<"Ingrese el numero de años que trabaja en la empresa\n";
			    cin>>numA;
				if (numA >= 10){
					aumento = sueldo*0.10;
					cout<<"aumento de 10% equivalente a: "<<aumento<<"$\n";
					sueldo = sueldo + aumento ;	
				}
				else{
					aumento  = sueldo*0.05;
					cout<<"aumento de 5% equivalente a: "<<aumento<<"$\n";					
					sueldo = sueldo + aumento ;	
				}
				cout<<"el sueldo con aumento es: "<<sueldo<<"$\n";
			}
			else{
			cout<<"+++++++++ Gracias por utilizar nuestro software ++++++++++++";	
			}
		}while(sueldo!=0);
	
	return 0;		
}
