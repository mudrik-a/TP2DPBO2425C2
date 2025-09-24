#include "ProdukAudioVisual.cpp" 

class TV : public ProdukAudioVisual {
private:
    std::string ukuran;
    std::string resolusi;
    std::string jenisPanel;

public:
    // Constructor
    TV(const std::string& idProduk, const std::string& namaProduk, const std::string& merk,
       double harga, const std::string& garansi, const std::string& tipe,
       const std::string& ukuran, const std::string& resolusi, const std::string& jenisPanel)
        : ProdukAudioVisual(idProduk, namaProduk, merk, harga, garansi, tipe),
          ukuran(ukuran), resolusi(resolusi), jenisPanel(jenisPanel) {}

    // Getters
    std::string getUkuran() const { return ukuran; }
    std::string getResolusi() const { return resolusi; }
    std::string getJenisPanel() const { return jenisPanel; }

    // Setters
    void setUkuran(const std::string& ukuran) { this->ukuran = ukuran; }
    void setResolusi(const std::string& resolusi) { this->resolusi = resolusi; }
    void setJenisPanel(const std::string& jenisPanel) { this->jenisPanel = jenisPanel; }
};