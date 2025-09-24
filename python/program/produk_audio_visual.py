from produk_elektronik import ProdukElektronik

class ProdukAudioVisual(ProdukElektronik):
    def __init__(self, id_produk, nama_produk, merk, harga, garansi, tipe):
        super().__init__(id_produk, nama_produk, merk)
        self.__harga = harga
        self.__garansi = garansi
        self.__tipe = tipe

    # Getter
    def get_harga(self):
        return self.__harga

    def get_garansi(self):
        return self.__garansi

    def get_tipe(self):
        return self.__tipe

    # Setter
    def set_harga(self, harga):
        self.__harga = harga

    def set_garansi(self, garansi):
        self.__garansi = garansi

    def set_tipe(self, tipe):
        self.__tipe = tipe