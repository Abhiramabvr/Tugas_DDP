#include <iostream>
using namespace std;

int main() {
    int apa, dimana;
    cout << "=========== Program Pembuatan Kotak Kotak ============\n";
    cout << "Input Baris Dulu! :  ";
    cin >> apa;
    cout << "Input Kolom Dulu! :  ";
    cin >> dimana;
    for (int siapa = 1; siapa <= 1; siapa++) {
        for (int kenapa = 1; kenapa < dimana; kenapa++) {
            cout << " ___ ";
        }
        cout << " ___ " << endl;
    }
    for (int siapa = 1; siapa <= dimana; siapa++) {
        for (int kenapa = 1; kenapa < dimana; kenapa++) {
            //out << " ___ " << endl;
            cout << "|___|";
            continue;
        }

        cout << "|___|" << endl;
    }
    return 0;
}
