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
