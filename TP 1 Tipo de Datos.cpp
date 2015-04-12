/* Tp#1 Tipos de Datos
Andres Bettinelli - K1091
Ultima modificacion 12/04/2015
*/

#include <iostream>
using namespace std;
int main (){
int cantn, i;
double nota, total;
char cond;
i=1;
string nombre;
cout<<"Cual es el nombre del alumno?";
cin>>nombre;
cout<<"Cuantas notas posee "<<nombre<<"?";
cin>>cantn;
while (i<=cantn){
	cout<<"Ingrese la nota num "<<i<<":";
	cin>>nota;
	i++;
	total= (total + nota);
}
cout<<"La nota promedio fue de: "<<total / cantn<<"\n\n";

do{cout<<"Ingrese el caracter S si la condicion del alumno es regular, caso contrario ingrese N:";
cin>>cond;
}
while ((cond  != 's')&&(cond != 'n')&&(cond != 'N')&&(cond != 'S'));

bool logico (((total/cantn) >= 7 && cond == 's') || ((total/cantn) >= 7)&& cond == 'S');

if(logico)
{cout<<"El alumno "<<nombre<<" ha promocionado la materia.\n\n";
}
else
{cout<<"El alumno "<<nombre<<" no ha promocionado la materia.\n\n";
}

 
system("pause");
}
