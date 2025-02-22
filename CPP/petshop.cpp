#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

struct Product {
    int id;
    string nama;
    string kategori;
    double harga;
};

class PetShop {
private:
    vector<Product> data;
public:
    void tambahProduk(const Product &p) {
        data.push_back(p);
    }

    void ubahProduk(int index, const Product &p) {
        if (index >= 0 && index < (int)data.size()) {
            data[index] = p;
        } else {
            cout << "Index tidak valid.\n";
        }
    }

    void hapusProduk(int index) {
        if (index >= 0 && index < (int)data.size()) {
            data.erase(data.begin() + index);
        } else {
            cout << "Index tidak valid.\n";
        }
    }

    void tampilkanProduk() {
        if (data.empty()) {
            cout << "Tidak ada produk yang tersimpan.\n";
            return;
        }
        cout << left
             << setw(6) << "Index"    << " | "
             << setw(6) << "ID"       << " | "
             << setw(20) << "Nama"    << " | "
             << setw(15) << "Kategori"<< " | "
             << setw(10) << "Harga"   << "\n";

        cout << string(6+3+6+3+20+3+15+3+10, '-') << "\n";

        for (int i = 0; i < (int)data.size(); i++) {
            cout << left
                 << setw(6) << i             << " | "
                 << setw(6) << data[i].id    << " | "
                 << setw(20) << data[i].nama << " | "
                 << setw(15) << data[i].kategori << " | "
                 << setw(10) << data[i].harga << "\n";
        }
    }

    int getTotalProduk() {
        return (int)data.size();
    }
};
