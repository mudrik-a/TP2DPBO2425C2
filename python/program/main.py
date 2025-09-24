from tabulate import tabulate
from TV import TV

# --- 5 DATA DUMMY ---
data_produk = [
    TV("001", "LG OLED C2", "LG", 20000000, "2 Tahun", "TV OLED", "65 Inch", "4K Ultra HD", "OLED"),
    TV("002", "Samsung Neo QLED", "Samsung", 18500000, "2 Tahun", "TV QLED", "55 Inch", "4K Ultra HD", "Neo QLED"),
    TV("003", "Sony Bravia XR", "Sony", 15000000, "1 Tahun", "TV LED", "50 Inch", "4K Ultra HD", "LED"),
    TV("004", "Polytron Cinemax", "Polytron", 3500000, "3 Tahun", "TV LED", "32 Inch", "HD", "LED"),
    TV("005", "Xiaomi Smart TV", "Xiaomi", 5200000, "1 Tahun", "TV LED", "43 Inch", "Full HD", "LED")
]

# --- FUNGSI UNTUK MENAMPILKAN TABEL DINAMIS MENGGUNAKAN TABULATE ---
def tampilkan_data_tabel(data_list):
    if not data_list:
        print("Data kosong. Silakan tambahkan data terlebih dahulu.")
        return

    # Siapkan header tabel
    headers = ["ID", "Nama Produk", "Merk", "Harga", "Garansi", "Tipe", "Ukuran", "Resolusi", "Jenis Panel"]
    
    # Ekstrak data dari objek menjadi list of lists
    table_data = []
    for item in data_list:
        table_data.append([
            item.get_id_produk(),
            item.get_nama_produk(),
            item.get_merk(),
            item.get_harga(),
            item.get_garansi(),
            item.get_tipe(),
            item.get_ukuran(),
            item.get_resolusi(),
            item.get_jenis_panel()
        ])

    # Cetak tabel menggunakan tabulate
    print(tabulate(table_data, headers=headers, tablefmt="grid"))
    print()

# --- FUNGSI UNTUK MENAMBAH DATA BARU ---
def tambah_data():
    print("\n--- Tambah Data TV Baru ---")
    id_produk = input("Masukkan ID Produk: ")
    nama_produk = input("Masukkan Nama Produk: ")
    merk = input("Masukkan Merk: ")
    harga = int(input("Masukkan Harga: "))
    garansi = input("Masukkan Garansi: ")
    tipe = input("Masukkan Tipe: ")
    ukuran = input("Masukkan Ukuran: ")
    resolusi = input("Masukkan Resolusi: ")
    jenis_panel = input("Masukkan Jenis Panel: ")

    produk_baru = TV(id_produk, nama_produk, merk, harga, garansi, tipe, ukuran, resolusi, jenis_panel)
    data_produk.append(produk_baru)
    print("\nData berhasil ditambahkan!")
    tampilkan_data_tabel(data_produk)

# --- MENU UTAMA ---
def main():
    while True:
        print("=" * 25)
        print("MENU TOKO ELEKTRONIK")
        print("=" * 25)
        print("1. Tampilkan Data")
        print("2. Tambah Data")
        print("3. Keluar")
        print("=" * 25)

        pilihan = input("Masukkan pilihan Anda (1/2/3): ")

        if pilihan == '1':
            tampilkan_data_tabel(data_produk)
        elif pilihan == '2':
            tambah_data()
        elif pilihan == '3':
            print("Terima kasih, program selesai.")
            break
        else:
            print("Pilihan tidak valid. Silakan coba lagi.")
            
if __name__ == "__main__":
    main()