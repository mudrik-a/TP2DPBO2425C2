public class ProdukAudioVisual extends ProdukElektronik {
    private double harga;
    private String garansi;
    private String tipe;

    public ProdukAudioVisual(String idProduk, String namaProduk, String merk, double harga, String garansi, String tipe) {
        super(idProduk, namaProduk, merk);
        this.harga = harga;
        this.garansi = garansi;
        this.tipe = tipe;
    }

    // Getters
    public double getHarga() { return harga; }
    public String getGaransi() { return garansi; }
    public String getTipe() { return tipe; }

    // Setters
    public void setHarga(double harga) { this.harga = harga; }
    public void setGaransi(String garansi) { this.garansi = garansi; }
    public void setTipe(String tipe) { this.tipe = tipe; }
}