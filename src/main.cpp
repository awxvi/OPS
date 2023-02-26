#include <iostream>
#include <string.h>

#include <SFML/Network.hpp>

// TO TEST IF WORKING, SCAN: scanme.nmap.org

void check() { 
    
    std::cout << "What IP address / Web adress would you like to scan?";
    sf::IpAddress scannedIP; scannedIP.toString(); std::cout << " Adress: "; std::cin >> scannedIP;

    std::cout << "IP Adress entered: " << scannedIP << "\n";

    std::cout << "What port would you like to scan?"; std::cout << " PORT: "; int port; std::cin >> port;

    sf::TcpSocket soc;
    
    if( soc.connect( scannedIP, port ) == sf::Socket::Done ) {
        std::cout << "Port is open \n";
    }  else {
        std::cout << "Port is closed \n";
    }
}

int main( void ) {
    
    std::cout << "IP address: " << sf::IpAddress::getLocalAddress() << "\n";

    check();

    return 0;
}