#include "ProdukElektronik.cpp" 

class ProdukAudioVisual : public ProdukElektronik {
protected:
    double harga;
    std::string garansi;
    std::string tipe;

public:
    // Constructor
    ProdukAudioVisual(const std::string& idProduk, const std::string& namaProduk, const std::string& merk,
                      double harga, const std::string& garansi, const std::string& tipe)
        : ProdukElektronik(idProduk, namaProduk, merk), harga(harga), garansi(garansi), tipe(tipe) {}

    // Getters
    double getHarga() const { return harga; }
    std::string getGaransi() const { return garansi; }
    std::string getTipe() const { return tipe; }

    // Setters
    void setHarga(double harga) { this->harga = harga; }
    void setGaransi(const std::string& garansi) { this->garansi = garansi; }
    void setTipe(const std::string& tipe) { this->tipe = tipe; }
};