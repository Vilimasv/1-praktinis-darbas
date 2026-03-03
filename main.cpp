#include <iostream>     // Leidžia naudoti cout ir cin (įvestis/išvestis)
#include <iomanip>      // Leidžia formatuoti skaičius, pvz. setprecision()
using namespace std;    // Kad nereikėtų rašyti std::cout, std::cin

int main() {
    // Kintamieji vartotojo pasirinkimams ir skaičiavimams
    int pasirinkimas, valiuta;
    double suma, apskaiciuotaValiuta;

    // Valiutų kursai: bendras, pirkimo ir pardavimo
    float GBP_Bendras = 0.8729;
    float GBP_Pirkti = 0.8600;
    float GBP_Parduoti = 0.9220;

    float USD_Bendras = 1.1793;
    float USD_Pirkti = 1.1460;
    float USD_Parduoti = 1.2340;

    float INR_Bendras = 104.6918;
    float INR_Pirkti = 101.3862;
    float INR_Parduoti = 107.8546;

    // Nustatome, kad visi skaičiai būtų rodomi su 2 skaičiais po kablelio
    cout << fixed << setprecision(2);

    // -----------------------------
    //        PAGRINDINIS MENIU
    // -----------------------------
    cout << "1 - Palyginti valiuta" << endl;   // Rodo bendrą kursą
    cout << "2 - Pirkti valiuta" << endl;      // EUR -> kita valiuta
    cout << "3 - Parduoti valiuta" << endl;    // Kita valiuta -> EUR
    cout << "Pasirinkimas: ";
    cin >> pasirinkimas;                       // Vartotojas įveda pasirinkimą

    // -----------------------------
    //       VALIUTOS PASIRINKIMAS
    // -----------------------------
    cout <<"Pasirinkite valiuta:" << endl;
    cout << "1 - GBP" << endl;
    cout << "2 - USD" << endl;
    cout << "3 - INR" << endl;
    cout << "Jusu pasirinkimas: ";
    cin >> valiuta;

    // -----------------------------
    // 1. PALYGINIMAS (rodyti kursą)
    // -----------------------------
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

    // -----------------------------
    // 2. PIRKIMAS (EUR -> valiuta)
    // -----------------------------
    else if (pasirinkimas == 2) {

        cout << "Iveskite suma eurais: ";
        cin >> suma;   // Vartotojas įveda kiek EUR nori iškeisti

        // Pagal pasirinktą valiutą dauginame iš pirkimo kurso
        if (valiuta == 1)
            apskaiciuotaValiuta = suma * GBP_Pirkti;
        else if (valiuta == 2)
            apskaiciuotaValiuta = suma * USD_Pirkti;
        else if (valiuta == 3)
            apskaiciuotaValiuta = suma * INR_Pirkti;
        else {
            cout << "Neteisingas valiutos pasirinkimas" << endl;
            return 0; // Baigia programą, jei įvesta bloga valiuta
        }

        cout << "Jusu nauja valiuta: " << apskaiciuotaValiuta << endl;
    }

    // -----------------------------
    // 3. PARDAVIMAS (valiuta -> EUR)
    // -----------------------------
    else if (pasirinkimas == 3) {

        cout << "Iveskite valiutos suma: ";
        cin >> suma;  // Vartotojas įveda kiek turi valiutos

        // Daliname iš pardavimo kurso, kad gautume EUR
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

    // -----------------------------
    // NETEISINGAS MENIU PASIRINKIMAS
    // -----------------------------
    else {
        cout << "Neteisingas pasirinkimas" << endl;
    }

    return 0; // Programos pabaiga
}
