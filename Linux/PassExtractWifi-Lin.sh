#!/bin/bash

if [[ $(id -u) -ne 0 ]];then
    echo "Please run as root"
else
    clear
    echo "[Escaneando redes conectadas al dispositivo....]"
    sleep 5
    clear
    echo -e "[Redes conectadas a este dispositivo]\n"

    ls /etc/NetworkManager/system-connections/ | cut -d '.' -f1
    echo ""
    read -e -p "Nombre de red: " red
    passwd=$(cat "/etc/NetworkManager/system-connections/$red.nmconnection" | grep "psk=" | cut -b 5-)
    clear
    echo "SSID [ "$red" ]"
    echo "Password [ "$passwd" ]"
fi

