/* Tp#1 Tipos de Datos
Andres Bettinelli - K1091
Ultima modificacion 17/04/2015
*/

#include <iostream>
using namespace std;
int main (){
int cantn, i=1;
double nota, total;
char cond;
string nombre;
cout<<"Cual es el nombre del alumno?"<<endl;
getline (cin, nombre);
cout<<"\nCuantas notas posee "<<nombre<<"?"<<endl;
cin>>cantn;
while (i<=cantn){
	cout<<"Ingrese la nota num "<<i<<":";
	cin>>nota;
	i++;
	total= (total + nota);
}
cout<<"La nota promedio fue de: "<<total / cantn<<".\n\n";

do{cout<<"Ingrese el caracter S si la condicion  del alumno es regular,"<<endl<<"caso contrario ingrese N:\n";
cin>>cond;
}
while ((cond  != 's')&&(cond != 'n')&&(cond != 'N')&&(cond != 'S'));

bool logico (((total/cantn) >= 7 && cond == 's') || ((total/cantn) >= 7)&& cond == 'S');

if(logico)
{cout<<"\nEl alumno "<<nombre<<" ha promocionado la materia.\n\n";
}
else
{cout<<"\nEl alumno "<<nombre<<" no ha promocionado la materia.\n\n";
}

system("pause");
}
