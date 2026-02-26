#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int pasirinkimas, valiuta;
    double suma, apskaiciuotaValiuta;
    float GBP_Bendras = 0.8729;
    float GBP_Pirkti = 0.8600;
    float GBP_Parduoti = 0.9220;
    float USD_Bendras = 1.1793;
    float USD_Pirkti = 1.1460;
    float USD_Parduoti = 1.2340;
    float INR_Bendras = 104.6918;
    float INR_Pirkti = 101.3862;
    float INR_Parduoti = 107.8546;

    cout << fixed << setprecision(2);

    cout << "1 - Palyginti valiuta" << endl;
    cout << "2 - Pirkti valiuta" << endl;
    cout << "3 - Parduoti valiuta" << endl;
    cout << "Pasirinkimas: ";
    cin >> pasirinkimas;

    cout <<"Pasirinkite valiuta:" << endl;
    cout << "1 - GBP" << endl;
    cout << "2 - USD" << endl;
    cout << "3 - INR" << endl;
    cout << "Jusu pasirinkimas: ";
    cin >> valiuta;

    if (pasirinkimas == 1) {

        if (valiuta == 1)
            cout << "1 EUR = " << GBP_Bendras << " GBP" << endl;
        else if (valiuta == 2)
            cout << "1 EUR = " << USD_Bendras << " USD" << endl;
        else if (valiuta == 3)
            cout << "1 EUR = " << INR_Bendras << " INR" << endl;
        else
            cout << "Neteisingas valiutos pasirinkimas" << endl;

    }
    else if (pasirinkimas == 2) {

        cout << "Iveskite suma eurais: ";
        cin >> suma;

        if (valiuta == 1)
            apskaiciuotaValiuta = suma * GBP_Pirkti;
        else if (valiuta == 2)
            apskaiciuotaValiuta = suma * USD_Pirkti;
        else if (valiuta == 3)
            apskaiciuotaValiuta = suma * INR_Pirkti;
        else {
            cout << "Neteisingas valiutos pasirinkimas" << endl;
            return 0;
        }

        cout << "Jusu nauja valiuta: " << apskaiciuotaValiuta << endl;
    }
    else if (pasirinkimas == 3) {

        cout << "Iveskite valiutos suma: ";
        cin >> suma;

        if (valiuta == 1)
            apskaiciuotaValiuta = suma / GBP_Parduoti;
        else if (valiuta == 2)
            apskaiciuotaValiuta = suma / USD_Parduoti;
        else if (valiuta == 3)
            apskaiciuotaValiuta = suma / INR_Parduoti;
        else {
            cout << "Neteisingas valiutos pasirinkimas" << endl;
            return 0;
        }

        cout << "Jusu nauja valiuta: " << apskaiciuotaValiuta << " EUR" << endl;
    }
    else {
        cout << "Neteisingas pasirinkimas" << endl;
    }

    return 0;
}
