public class ProdukElektronik {
    private String idProduk;
    private String namaProduk;
    private String merk;

    public ProdukElektronik(String idProduk, String namaProduk, String merk) {
        this.idProduk = idProduk;
        this.namaProduk = namaProduk;
        this.merk = merk;
    }

    // Getters
    public String getIdProduk() { return idProduk; }
    public String getNamaProduk() { return namaProduk; }
    public String getMerk() { return merk; }

    // Setters
    public void setIdProduk(String idProduk) { this.idProduk = idProduk; }
    public void setNamaProduk(String namaProduk) { this.namaProduk = namaProduk; }
    public void setMerk(String merk) { this.merk = merk; }
}