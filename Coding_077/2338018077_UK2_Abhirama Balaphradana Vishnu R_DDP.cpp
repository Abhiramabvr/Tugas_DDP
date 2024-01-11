#include <iostream>
#include <array>
using namespace std;

array<char, 9> papan = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

void gambarPapan() {
    system("cls");
    for (int i = 0; i < 9; ++i) {
        cout << papan[i];
        if ((i + 1) % 3 != 0) cout << " ";
        else if (i < 8) cout << "\n";
    }
    cout << '\n';
}

bool cekMenang(char pemain) {
    int menang[8][3] = { {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6} };
    for (int i = 0; i < 8; ++i) {
        if (papan[menang[i][0]] == pemain && papan[menang[i][1]] == pemain && papan[menang[i][2]] == pemain) return true;
    }
    return false;
}

int main() {
    int gerakan = 0;
    while (true) {
        gambarPapan();
        char pemain = (gerakan % 2 == 0) ? 'X' : 'O';
        cout << "Pemain " << pemain << ", masukkan gerakan Anda (angka 1-9): ";
        int posisi;
        cin >> posisi;
        if (posisi < 1 || posisi > 9 || papan[posisi - 1] == 'X' || papan[posisi - 1] == 'O') {
            cout << "Gerakan tidak valid, coba lagi.\n";
            continue;
        }
        papan[posisi - 1] = pemain;
        ++gerakan;
        if (cekMenang(pemain)) {
            gambarPapan();
            cout << "Pemain " << pemain << " menang!\n";
            break;
        }
        if (gerakan == 9) {
            gambarPapan();
            cout << "Hasilnya seri.\n";
            break;
        }
    }
    return 0;
}
