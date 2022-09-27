#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

int main() {

    std::cout << "Jmeno a prijmeni: ";
    std::string jmeno;
    std::string prijmeni;
    std::cin >> jmeno >> prijmeni;

    std::cout << "Vek: ";
    std::string vek;
    std::cin >> vek;


    std::cout << "Vzdelani (zs, ss, vs): ";
    std::string skola;
    std::cin >> skola;


    std::cout << "Jmeno: " << jmeno << "\n";
    std::cout << "Prijmeni: " << prijmeni << "\n";
    std::cout << "Vek: " << vek << "\n";
    std::cout << "Skola: " << skola << "\n";

    std::ofstream vystupni_soubor("vystup.txt");

    vystupni_soubor << "Jmeno: " << jmeno << "Prijmeni: " << prijmeni << "Vek: " << vek << "\n";

    return 0;
}
