#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double charge = 1.5e-6;
    double distance = 0.05;
    double k = 8.99e9;
    
    double eField = (k * charge) / pow(distance, 2);
    
    cout << "Electric Field Strength: " << eField << " N/C" << endl;
    return 0;
}
