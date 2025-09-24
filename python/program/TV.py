from produk_audio_visual import ProdukAudioVisual

class TV(ProdukAudioVisual):
    def __init__(self, id_produk, nama_produk, merk, harga, garansi, tipe, ukuran, resolusi, jenis_panel):
        super().__init__(id_produk, nama_produk, merk, harga, garansi, tipe)
        self.__ukuran = ukuran
        self.__resolusi = resolusi
        self.__jenis_panel = jenis_panel

    # Getter
    def get_ukuran(self):
        return self.__ukuran

    def get_resolusi(self):
        return self.__resolusi

    def get_jenis_panel(self):
        return self.__jenis_panel

    # Setter
    def set_ukuran(self, ukuran):
        self.__ukuran = ukuran

    def set_resolusi(self, resolusi):
        self.__resolusi = resolusi

    def set_jenis_panel(self, jenis_panel):
        self.__jenis_panel = jenis_panel