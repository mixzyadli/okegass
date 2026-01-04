#include <iostream>
using namespace std;

int main() {
    const int MAX = 5;
    int id[MAX], vote[MAX] = {0};
    string nama[MAX];

    int jumlah, pilihan;

    cout << "Jumlah karyawan yang akan divoting (max 5): ";
    cin >> jumlah;
    cin.ignore();

    // Input data karyawan
    for (int i = 0; i < jumlah; i++) {
        cout << "\nKaryawan ke-" << i + 1 << endl;
        cout << "ID   : ";
        cin >> id[i];
        cin.ignore();

        cout << "Nama : ";
        getline(cin, nama[i]);
    }

    // Menu voting
    do {
        cout << "\n===== MENU VOTING KARYAWAN TERBAIK =====\n";
        for (int i = 0; i < jumlah; i++) {
            cout << i + 1 << ". " << nama[i] << endl;
        }
        cout << "0. Selesai Voting\n";
        cout << "Pilih nomor karyawan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= jumlah) {
            vote[pilihan - 1]++;
            cout << "Vote berhasil!\n";
        } else if (pilihan != 0) {
            cout << "Pilihan tidak valid!\n";
        }

    } while (pilihan != 0);

    // Tampilkan hasil voting
    cout << "\n===== HASIL VOTING =====\n";
    for (int i = 0; i < jumlah; i++) {
        cout << nama[i] << " : " << vote[i] << " suara\n";
    }

    return 0;
}
