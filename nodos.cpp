#include <iostream>

using namespace std;
int i; 
struct elemento {
	int numero;
	int numero2;
	int numero3;
	elemento *sgte;
};

struct elemento *pinicial, *pfinal,*pauxiliar;

void insertar_lista(int valor, int valor2, int valor3)
{
	if (pinicial==NULL)
	{
		pinicial= new elemento();
		pinicial->numero=valor;
		pinicial->numero2=valor2;
		pinicial->numero3=valor3;
		pfinal=pinicial;

	} 
	
	else 
	{
		pauxiliar = new elemento();
		pfinal->sgte=pauxiliar;
		pauxiliar->numero=valor;
		pauxiliar->numero2=valor2;
		pauxiliar->numero3=valor3;
		pfinal=pauxiliar;
		
	}
	
	pfinal->sgte=NULL;
}

void mostrar()
{
	pauxiliar=pinicial;
	i=1;
	cout<<"Listas"<<endl;
	while (pauxiliar != NULL)
	{
		cout<<"Estudiante "<<i++<<": "<<pauxiliar->numero<<pauxiliar->numero2<<pauxiliar->numero3<<endl;
		int resul1=(pauxiliar->numero + pauxiliar->numero2 + pauxiliar->numero3)/3;
		cout<<"Promedio: "<<resul1<<endl;
		pauxiliar=pauxiliar->sgte;
		cout<<"Estudiante "<<i++<<": "<<pauxiliar->numero<<pauxiliar->numero2 <<pauxiliar->numero3<<endl;
		int resul2=(pauxiliar->numero + pauxiliar->numero2 + pauxiliar->numero3)/3;
		cout<<"Promedio: "<<resul2<<endl;
		pauxiliar=pauxiliar->sgte;
		cout<<"Estudiante "<<i++<<": "<<pauxiliar->numero<<pauxiliar->numero2<<pauxiliar->numero3<<endl;
		int resul3=(pauxiliar->numero + pauxiliar->numero2 + pauxiliar->numero3)/3;
		cout<<"Promedio: "<<resul3<<endl;
		pauxiliar=pauxiliar->sgte;
	}
	
}



int main()
{
	i=1;
	int valor, valor2, valor3;
	
	
	for (int y=1;y <=10; y++)
	{
		cout<<"Ingrese notas estudiante "<<i++<<endl;
		cout<<"ingrese nota 1: "<<endl;
		cin>>valor;
		cout<<"ingrese nota 2: "<<endl;
		cin>>valor2;
		cout<<"ingrese nota 3: "<<endl;
		cin>>valor3;
		
		insertar_lista(valor, valor2, valor3);
		
	}
	
	mostrar();
}
