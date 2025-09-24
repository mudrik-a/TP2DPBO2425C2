# janji

Saya Mohammad Mudrik dengan NIM 2407142 berjanji untuk mengerjakan tugas praktikum 1 dengan sungguh-sungguh Dalam mata kuliah Dasar Pemrograman Berorientasi Objek tanpa membocorkan atau mencotek kepada teman Demi Kebaikan-Nya 

# Desain
<img width="980" height="227" alt="Screenshot 2025-09-24 071047" src="https://github.com/user-attachments/assets/10cf0cf5-6256-4ec1-9937-6680a45fd220" />

# Penjelasan Desain dan Atribut

1. Class ProdukElektronik

Ini adalah kelas dasar (super-class) yang berisi atribut dan method umum untuk semua produk elektronik.

- Atribut:

  - protected $idProduk: Menyimpan ID produk.
  
  - protected $namaProduk: Menyimpan nama produk.
  
  - protected $merk: Menyimpan merek produk.
  
  - protected $gambar: Menyimpan jalur file gambar produk.

- Methods:

  - __construct(): Digunakan untuk membuat objek baru dan menginisialisasi atribut di atas.
  
  - getIdProduk(), getNamaProduk(), getMerk(), getGambar(): Ini adalah getter. Digunakan untuk mengambil nilai dari atribut.
  
  - setIdProduk(), setNamaProduk(), setMerk(), setGambar(): Ini adalah setter. Digunakan untuk mengubah nilai dari atribut.

2. Class ProdukAudioVisual

Kelas ini merupakan turunan (sub-class) dari ProdukElektronik dan menambahkan atribut spesifik untuk produk audio visual.

- Atribut:

  - protected $harga: Menyimpan harga produk.
  
  - protected $garansi: Menyimpan durasi garansi produk.
  
  - protected $tipe: Menyimpan tipe produk (misalnya, TV LED, TV OLED).

- Methods:

  - __construct(): Menerima atribut dari kelas induk dan atribut barunya, lalu meneruskannya ke konstruktor parent (kelas ProdukElektronik).
  
  - getHarga(), getGaransi(), getTipe(): Getter untuk atribut di atas.
  
  - setHarga(), setGaransi(), setTipe(): Setter untuk atribut di atas.

3. Class TV

Kelas ini adalah turunan (sub-class) dari ProdukAudioVisual yang berisi atribut khusus untuk produk TV.

- Atribut:

  - private $ukuran: Menyimpan ukuran layar.
  
  - private $resolusi: Menyimpan resolusi layar.
  
  - private $jenisPanel: Menyimpan jenis panel layar (misalnya, LED, Neo QLED).

- Methods:

  - __construct(): Menerima semua atribut dari kelas induknya dan atribut baru, kemudian meneruskannya ke konstruktor parent (kelas ProdukAudioVisual).
  
  - getUkuran(), getResolusi(), getJenisPanel(): Getter untuk atribut di atas.
  
  - setUkuran(), setResolusi(), setJenisPanel(): Setter untuk atribut di atas.

# Alur Program

1. mengimport library dan class TV
2. membuat harcode data 
3. menampilkan menu
4. menerima inputan user
5. menampilkan data

# Dokumentasi

- Cpp
<img width="940" height="282" alt="Screenshot 2025-09-24 022747" src="https://github.com/user-attachments/assets/615382ae-aa8b-4255-8ad1-4be86a1ee8ba" />
<img width="1187" height="598" alt="Screenshot 2025-09-24 023227" src="https://github.com/user-attachments/assets/8099cde6-3493-40eb-9387-f07b28bd33c9" />

- java
<img width="1207" height="398" alt="Screenshot 2025-09-24 023656" src="https://github.com/user-attachments/assets/9aebb711-af26-45d7-86f5-4041a416c03a" />
<img width="1312" height="665" alt="Screenshot 2025-09-24 023710" src="https://github.com/user-attachments/assets/0186f80e-97ce-4290-84b2-60e7cb3f7a00" />

- python
<img width="1130" height="430" alt="Screenshot 2025-09-24 023427" src="https://github.com/user-attachments/assets/a1741614-07cf-44ac-9d26-af551d657e5d" />
<img width="1244" height="696" alt="Screenshot 2025-09-24 024042" src="https://github.com/user-attachments/assets/2a95682c-b682-4503-9f75-dad00c80bd22" />

- php
<img width="940" height="681" alt="Screenshot 2025-09-24 023752" src="https://github.com/user-attachments/assets/804c13af-3ccb-41ff-a798-5fbb5d3c4ea4" />
