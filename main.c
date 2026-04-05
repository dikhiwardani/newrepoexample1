int main() {
    int pilihan; // Deklarasi variabel pilihan agar tidak merah

    do {
        printf("\n================================\n");
        printf("   KALKULATOR KONVERSI SATUAN   \n");
        printf("================================\n");
        printf("1. Konversi Suhu\n");
        printf("2. Konversi Jarak\n");
        printf("3. Konversi Berat\n");
        printf("4. Konversi Waktu\n");
        printf("0. Keluar\n");
        printf("--------------------------------\n");
        printf("Pilih Menu (0-4): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1: konversiSuhu(); break;
            case 2: konversiJarak(); break;
            case 3: konversiBerat(); break;
            case 4: konversiWaktu(); break;
            case 0: printf("Terima kasih telah menggunakan program ini!\n"); break;
            default: printf("Pilihan tidak valid!\n");
        }
    } while (pilihan != 0);

    return 0;
}
void konversiJarak() {
    float km;
    printf("\n--- Konversi Jarak ---\n");
    printf("Masukkan jarak dalam Kilometer: ");
    scanf("%f", &km);
    printf("Meter: %.2f m\n", km * 1000);
    printf("Centimeter: %.2f cm\n", km * 100000);
} // <--- Tadi kamu lupa tutup kurung ini!
