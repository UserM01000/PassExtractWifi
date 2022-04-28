//proyecto comenzado el 22/02/2022 
//actualizacion del proyecto 27/04/2022 
//Nota: deje el proyecto por motivos de falta de practica pero despues de 2 meses acabe este proyecto XD
#include <iostream>
#include <windows.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string red;
    string perfil;

    system("cls"); 
    cout<<"Escaneando redes conectadas al dispositivo...\n";  
    Sleep(5000);
    cout<<"\n[Redes conectadas a estes dispositivo]\n\n";
    system("netsh.exe wlan show profile | findstr /C:\"Perfil de todos los usuarios\"");

    cout<<"\nPonga un nombre de red aqui: "; getline(cin, red);  
    cout<<"\n";
    string todo = "netsh.exe wlan show profile \"" + red + "\" key=clear | findstr /C:\"Contenido de la clave\"";
    system(todo.c_str());
    
    cout<<"\n";
    system("PAUSE");
    
    return 0;
}