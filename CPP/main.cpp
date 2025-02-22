#include "petshop.cpp"

int main() {
    PetShop shop;
    int pilihan;

    do {
        cout << "\n=== Menu ===\n"
             << "1. Tambah Produk\n"
             << "2. Ubah Produk\n"
             << "3. Hapus Produk\n"
             << "4. Tampilkan Produk\n"
             << "5. Tampilkan Jumlah Produk\n"
             << "0. Keluar\n"
             << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                Product p;
                cout << "Masukkan ID: ";
                cin >> p.id;
                cin.ignore();
                cout << "Masukkan Nama: ";
                getline(cin, p.nama);
                cout << "Masukkan Kategori: ";
                getline(cin, p.kategori);
                cout << "Masukkan Harga: ";
                cin >> p.harga;
                shop.tambahProduk(p);
                break;
            }
            case 2: {
                int idx;
                cout << "Masukkan index produk yang akan diubah: ";
                cin >> idx;
                Product p;
                cout << "Masukkan ID baru: ";
                cin >> p.id;
                cin.ignore();
                cout << "Masukkan Nama baru: ";
                getline(cin, p.nama);
                cout << "Masukkan Kategori baru: ";
                getline(cin, p.kategori);
                cout << "Masukkan Harga baru: ";
                cin >> p.harga;
                shop.ubahProduk(idx, p);
                break;
            }
            case 3: {
                int idx;
                cout << "Masukkan index produk yang akan dihapus: ";
                cin >> idx;
                shop.hapusProduk(idx);
                break;
            }
            case 4: {
                shop.tampilkanProduk();
                break;
            }
            case 5: {
                cout << "Jumlah produk: " << shop.getTotalProduk() << "\n";
                break;
            }
            case 0:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 0);

    return 0;
}
