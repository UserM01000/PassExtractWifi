#include <iostream>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main(){

    string red;
    cout<<"[Escaneando redes conectadas al pc...]"<<endl;
    sleep(5);
    system("clear");
    cout<<"[Redes conectadas al pc]\n\n";
    system("ls /etc/NetworkManager/system-connections/ | cut -d '.' -f1 ");
    cout<<"\nEscriba un nombre de red: "; getline(cin, red);
    string passwd = "sudo cat '/etc/NetworkManager/system-connections/"+red+".nmconnection' | grep 'psk=' | cut -b 5-";
    const char *cmd = passwd.c_str();
    cout<<"\n[Password - SSID: "<<red<<"]\n     |\n     v\n"; system(cmd);

    return 0;
}