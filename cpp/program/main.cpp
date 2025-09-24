#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "TV.cpp" // Sertakan kelas TV

// --- 5 DATA DUMMY ---
std::vector<TV> dataProduk;

void inisialisasiDataDummy() {
    dataProduk.push_back(TV("001", "LG OLED C2", "LG", 20000000, "2 Tahun", "TV OLED", "65 Inch", "4K Ultra HD", "OLED"));
    dataProduk.push_back(TV("002", "Samsung Neo QLED", "Samsung", 18500000, "2 Tahun", "TV QLED", "55 Inch", "4K Ultra HD", "Neo QLED"));
    dataProduk.push_back(TV("003", "Sony Bravia XR", "Sony", 15000000, "1 Tahun", "TV LED", "50 Inch", "4K Ultra HD", "LED"));
    dataProduk.push_back(TV("004", "Polytron Cinemax", "Polytron", 3500000, "3 Tahun", "TV LED", "32 Inch", "HD", "LED"));
    dataProduk.push_back(TV("005", "Xiaomi Smart TV", "Xiaomi", 5200000, "1 Tahun", "TV LED", "43 Inch", "Full HD", "LED"));
}

// Fungsi untuk menampilkan garis pembatas
void garisPembatas(const std::vector<int>& widths) {
    std::cout << "+";
    for (int width : widths) {
        std::cout << std::string(width + 2, '-') << "+";
    }
    std::cout << std::endl;
}

// Fungsi untuk menampilkan data dalam bentuk tabel
void tampilkanDataTabel() {
    if (dataProduk.empty()) {
        std::cout << "Data kosong. Silakan tambahkan data terlebih dahulu." << std::endl;
        return;
    }

    std::vector<std::string> headers = {"ID", "Nama Produk", "Merk", "Harga", "Garansi", "Tipe", "Ukuran", "Resolusi", "Jenis Panel"};
    std::vector<int> colWidths(headers.size());

    // Hitung lebar maksimum untuk setiap kolom
    for (size_t i = 0; i < headers.size(); ++i) {
        colWidths[i] = headers[i].length();
    }
    for (const auto& tv : dataProduk) {
        colWidths[0] = std::max(colWidths[0], (int)tv.getIdProduk().length());
        colWidths[1] = std::max(colWidths[1], (int)tv.getNamaProduk().length());
        colWidths[2] = std::max(colWidths[2], (int)tv.getMerk().length());
        colWidths[3] = std::max(colWidths[3], (int)std::to_string((int)tv.getHarga()).length());
        colWidths[4] = std::max(colWidths[4], (int)tv.getGaransi().length());
        colWidths[5] = std::max(colWidths[5], (int)tv.getTipe().length());
        colWidths[6] = std::max(colWidths[6], (int)tv.getUkuran().length());
        colWidths[7] = std::max(colWidths[7], (int)tv.getResolusi().length());
        colWidths[8] = std::max(colWidths[8], (int)tv.getJenisPanel().length());
    }

    // Cetak header
    garisPembatas(colWidths);
    std::cout << "|";
    for (size_t i = 0; i < headers.size(); ++i) {
        std::cout << " " << std::left << std::setw(colWidths[i]) << headers[i] << " |";
    }
    std::cout << std::endl;
    garisPembatas(colWidths);

    // Cetak data
    for (const auto& tv : dataProduk) {
        std::cout << "|";
        std::cout << " " << std::left << std::setw(colWidths[0]) << tv.getIdProduk() << " |";
        std::cout << " " << std::left << std::setw(colWidths[1]) << tv.getNamaProduk() << " |";
        std::cout << " " << std::left << std::setw(colWidths[2]) << tv.getMerk() << " |";
        std::cout << " " << std::left << std::setw(colWidths[3]) << (int)tv.getHarga() << " |";
        std::cout << " " << std::left << std::setw(colWidths[4]) << tv.getGaransi() << " |";
        std::cout << " " << std::left << std::setw(colWidths[5]) << tv.getTipe() << " |";
        std::cout << " " << std::left << std::setw(colWidths[6]) << tv.getUkuran() << " |";
        std::cout << " " << std::left << std::setw(colWidths[7]) << tv.getResolusi() << " |";
        std::cout << " " << std::left << std::setw(colWidths[8]) << tv.getJenisPanel() << " |";
        std::cout << std::endl;
    }
    garisPembatas(colWidths);
    std::cout << std::endl;
}

// Fungsi untuk menambah data baru
void tambahData() {
    std::string idProduk, namaProduk, merk, garansi, tipe, ukuran, resolusi, jenisPanel;
    double harga;

    std::cout << "\n--- Tambah Data TV Baru ---" << std::endl;
    std::cout << "Masukkan ID Produk: ";
    std::cin >> idProduk;
    std::cin.ignore(); 
    std::cout << "Masukkan Nama Produk: ";
    std::getline(std::cin, namaProduk);
    std::cout << "Masukkan Merk: ";
    std::getline(std::cin, merk);
    std::cout << "Masukkan Harga: ";
    std::cin >> harga;
    std::cin.ignore();
    std::cout << "Masukkan Garansi: ";
    std::getline(std::cin, garansi);
    std::cout << "Masukkan Tipe: ";
    std::getline(std::cin, tipe);
    std::cout << "Masukkan Ukuran: ";
    std::getline(std::cin, ukuran);
    std::cout << "Masukkan Resolusi: ";
    std::getline(std::cin, resolusi);
    std::cout << "Masukkan Jenis Panel: ";
    std::getline(std::cin, jenisPanel);

    dataProduk.emplace_back(idProduk, namaProduk, merk, harga, garansi, tipe, ukuran, resolusi, jenisPanel);
    std::cout << "\nData berhasil ditambahkan!" << std::endl;
    tampilkanDataTabel();
}

void tampilkanMenu() {
    std::cout << "=========================" << std::endl;
    std::cout << "   MENU TOKO ELEKTRONIK   " << std::endl;
    std::cout << "=========================" << std::endl;
    std::cout << "1. Tampilkan Data" << std::endl;
    std::cout << "2. Tambah Data" << std::endl;
    std::cout << "3. Keluar" << std::endl;
    std::cout << "=========================" << std::endl;
}

int main() {
    inisialisasiDataDummy();
    int pilihan;

    do {
        tampilkanMenu();
        std::cout << "Masukkan pilihan Anda (1/2/3): ";
        std::cin >> pilihan;
        std::cin.ignore(); 

        switch (pilihan) {
            case 1:
                tampilkanDataTabel();
                break;
            case 2:
                tambahData();
                break;
            case 3:
                std::cout << "Terima kasih, program selesai." << std::endl;
                break;
            default:
                std::cout << "Pilihan tidak valid. Silakan coba lagi." << std::endl;
        }
    } while (pilihan != 3);

    return 0;
}