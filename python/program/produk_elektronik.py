class ProdukElektronik:
    def __init__(self, id_produk, nama_produk, merk):
        self.__id_produk = id_produk
        self.__nama_produk = nama_produk
        self.__merk = merk

    # Getter
    def get_id_produk(self):
        return self.__id_produk

    def get_nama_produk(self):
        return self.__nama_produk

    def get_merk(self):
        return self.__merk

    # Setter
    def set_id_produk(self, id_produk):
        self.__id_produk = id_produk

    def set_nama_produk(self, nama_produk):
        self.__nama_produk = nama_produk

    def set_merk(self, merk):
        self.__merk = merk