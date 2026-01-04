#include <stdio.h>
#include <string.h>

int main() {
    const int MAX = 100;

    int id[MAX];
    char nama[MAX][50];
    char jabatan[MAX][50];
    float gaji[MAX];

    int jumlah = 0;
    int pilihan;

    do {
        printf("\n===== MENU MANAJEMEN DATA KARYAWAN =====\n");
        printf("1. Tambah Data Karyawan\n");
        printf("2. Tampilkan 1 Data Karyawan (Filter ID)\n");
        printf("3. Keluar\n");
        printf("Pilih menu (1-3): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
        case 1:
            if (jumlah < MAX) {
                printf("\n--- Input Data Karyawan ---\n");

                printf("ID Karyawan   : ");
                scanf("%d", &id[jumlah]);

                printf("Nama Karyawan : ");
                scanf(" %[^\n]", nama[jumlah]);

                printf("Jabatan       : ");
                scanf(" %[^\n]", jabatan[jumlah]);

                printf("Gaji          : ");
                scanf("%f", &gaji[jumlah]);

                jumlah++;
                printf("Data berhasil ditambahkan!\n");
            } else {
                printf("Data karyawan sudah penuh!\n");
            }
            break;

        case 2:
            if (jumlah == 0) {
                printf("\nBelum ada data karyawan.\n");
            } else {
                int cariID;
                int ditemukan = 0;

                printf("\nMasukkan ID Karyawan yang ingin ditampilkan: ");
                scanf("%d", &cariID);

                for (int i = 0; i < jumlah; i++) {
                    if (id[i] == cariID) {
                        printf("\n===== DATA KARYAWAN =====\n");
                        printf("ID      : %d\n", id[i]);
                        printf("Nama    : %s\n", nama[i]);
                        printf("Jabatan : %s\n", jabatan[i]);
                        printf("Gaji    : Rp %.2f\n", gaji[i]);
                        ditemukan = 1;
                        break;
                    }
                }

                if (!ditemukan) {
                    printf("\nData karyawan dengan ID tersebut tidak ditemukan.\n");
                }
            }
            break;

        case 3:
            printf("\nTerima kasih telah menggunakan program.\n");
            break;

        default:
            printf("\nPilihan tidak valid!\n");
        }

    } while (pilihan != 3);

    return 0;
}
