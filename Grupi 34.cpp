#include <iostream>
using namespace std;

// Definimi i nje enum per llojet e makinave
enum class LlojiMakines {
    Sedan,
    SUV,
    Kamion
};

// Struktura per te perfaqesuar nje makine
struct Makina {
    string marka;
    string modeli;
    int viti;
    LlojiMakines lloji;
};
// Funksion per te printuar informacionin e makines 
 void printoMakinen(const Makina& makina) {
    cout << "Marka: " << makina.marka << endl;
    cout << "Modeli: " << makina.modeli << endl;
    cout << "Viti: " << makina.viti << endl;
    cout << "Lloji: ";
    switch (makina.lloji) {
        case LlojiMakines::Sedan:
            cout << "Sedan" << endl;
            break;
        case LlojiMakines::SUV:
            cout << "SUV" << endl;
            break;
        case LlojiMakines::Kamion:
            cout << "Kamion" << endl;
            break;
            cout << "\n";
    }
 }
    

    // Funksion per te lexuar te dhenat e makines nga tastiera
Makina lexoMakinen() {
    Makina makina;
    int lloji;
    cout << "Shkruani marken e makines: ";
    cin >> makina.marka;
    cout << "Shkruani modelin e makines: ";
    cin >> makina.modeli;
    cout << "Shkruani vitin e makines: ";
    cin >> makina.viti;
    cout << "Shkruani llojin e makines (0 per Sedan, 1 per SUV, 2 per Kamion): ";
    cin >> lloji;
    makina.lloji = static_cast<LlojiMakines>(lloji);
    return makina;
}


// Leximi dhe printimi i te dhenave te makinave nga tastiera
void lexoDhePrintoMakinat() {
    cout << "Shkruani te dhenat per makinen e pare:" << endl;
    Makina makina1 = lexoMakinen();
    cout << "Shkruani te dhenat per makinen e dyte:" << endl;
    Makina makina2 = lexoMakinen();
    cout << "Shkruani te dhenat per makinen e trete:" << endl;
    Makina makina3 = lexoMakinen();

    cout << "\n";
    printoMakinen(makina1);;
    cout << "\n";
    printoMakinen(makina2);
    cout << "\n";
    printoMakinen(makina3);
}
int main() {
    lexoDhePrintoMakinat();
    return 0;
}