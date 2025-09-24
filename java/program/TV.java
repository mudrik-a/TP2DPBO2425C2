public class TV extends ProdukAudioVisual {
    private String ukuran;
    private String resolusi;
    private String jenisPanel;

    public TV(String idProduk, String namaProduk, String merk, double harga, String garansi, String tipe, String ukuran, String resolusi, String jenisPanel) {
        super(idProduk, namaProduk, merk, harga, garansi, tipe);
        this.ukuran = ukuran;
        this.resolusi = resolusi;
        this.jenisPanel = jenisPanel;
    }

    // Getters
    public String getUkuran() { return ukuran; }
    public String getResolusi() { return resolusi; }
    public String getJenisPanel() { return jenisPanel; }

    // Setters
    public void setUkuran(String ukuran) { this.ukuran = ukuran; }
    public void setResolusi(String resolusi) { this.resolusi = resolusi; }
    public void setJenisPanel(String jenisPanel) { this.jenisPanel = jenisPanel; }
}