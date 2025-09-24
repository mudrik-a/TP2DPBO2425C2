#include <iostream>
#include <string>

class ProdukElektronik {
protected:
    std::string idProduk;
    std::string namaProduk;
    std::string merk;

public:
    // Constructor
    ProdukElektronik(const std::string& idProduk, const std::string& namaProduk, const std::string& merk)
        : idProduk(idProduk), namaProduk(namaProduk), merk(merk) {}

    // Getters
    std::string getIdProduk() const { return idProduk; }
    std::string getNamaProduk() const { return namaProduk; }
    std::string getMerk() const { return merk; }

    // Setters
    void setIdProduk(const std::string& idProduk) { this->idProduk = idProduk; }
    void setNamaProduk(const std::string& namaProduk) { this->namaProduk = namaProduk; }
    void setMerk(const std::string& merk) { this->merk = merk; }
};