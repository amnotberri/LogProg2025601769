#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    string pizzaV;
    string ingrediente;

    cout << "Bienvenido a pizzas PreCure!" << endl;
    cout << "¿Quiere una pizza vegetariana?" << endl;
    cin >> pizzaV;
    if (pizzaV == "si") {
        cout << "De acuerdo! estos son nuestros ingredientes, elija solo uno" << endl;
        cout << "Pimiento" << endl;
        cout << "Tofu" << endl;
        cin >> ingrediente;
        cout << "ok! Prepararemos una pizza vegetariana con mozzarella, tomate y " << ingrediente << endl;
    } else {
        cout << "De acuerdo! estos son nuestros ingredientes, elija solo uno" << endl;
        cout << "Peperoni" << endl;
        cout << "Jamon" << endl;
        cout << "Salmon" << endl;
        cin >> ingrediente;
        cout << "ok! Prepararemos una pizza no vegetariana con mozzarella, tomate y " << ingrediente << endl;
    }
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
