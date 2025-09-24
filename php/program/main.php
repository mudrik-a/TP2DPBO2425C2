<?php

require_once 'TV.php';

// --- 5 DATA DUMMY ---
$dataProduk = [
    new TV("001", "LG OLED C2", "LG", "gambar/tv01.jpg", 20000000, "2 Tahun", "TV OLED", "65 Inch", "4K Ultra HD", "OLED"),
    new TV("002", "Samsung Neo QLED", "Samsung", "gambar/tv02.jpg", 18500000, "2 Tahun", "TV QLED", "55 Inch", "4K Ultra HD", "Neo QLED"),
    new TV("003", "Sony Bravia XR", "Sony", "gambar/tv03.jpg", 15000000, "1 Tahun", "TV LED", "50 Inch", "4K Ultra HD", "LED"),
    new TV("004", "Polytron Cinemax", "Polytron", "gambar/tv04.jpg", 3500000, "3 Tahun", "TV LED", "32 Inch", "HD", "LED"),
    new TV("005", "Xiaomi Smart TV", "Xiaomi", "gambar/tv05.jpg", 5200000, "1 Tahun", "TV LED", "43 Inch", "Full HD", "LED")
];

/**
 * Fungsi untuk menampilkan data dalam bentuk tabel 
 */
function tampilkanDataTabel($dataList) {
    if (empty($dataList)) {
        echo "<p>Data kosong.</p>";
        return;
    }

    $headers = ["ID", "Gambar", "Nama Produk", "Merk", "Harga", "Garansi", "Tipe", "Ukuran", "Resolusi", "Jenis Panel"];

    echo "<!DOCTYPE html>
          <html lang='id'>
          <head>
              <meta charset='UTF-8'>
              <title>Data Produk Elektronik</title>
              <style>
                  body { font-family: Arial, sans-serif; margin: 20px; }
                  table { width: 100%; border-collapse: collapse; }
                  th, td { border: 1px solid #ddd; padding: 8px; text-align: left; }
                  th { background-color: #f2f2f2; }
                  tr:nth-child(even) { background-color: #f9f9f9; }
                  .product-image { width: 100px; height: auto; display: block; }
              </style>
          </head>
          <body>
              <h2>Data Produk Elektronik</h2>
              <table>
                  <thead>
                      <tr>";
    foreach ($headers as $header) {
        echo "<th>" . htmlspecialchars($header) . "</th>";
    }
    echo "            </tr>
                  </thead>
                  <tbody>";

    foreach ($dataList as $item) {
        echo "<tr>";
        echo "<td>" . htmlspecialchars($item->getIdProduk()) . "</td>";
        echo "<td><img src='" . htmlspecialchars($item->getGambar()) . "' alt='Gambar Produk' class='product-image'></td>";
        echo "<td>" . htmlspecialchars($item->getNamaProduk()) . "</td>";
        echo "<td>" . htmlspecialchars($item->getMerk()) . "</td>";
        echo "<td>Rp" . number_format($item->getHarga(), 0, ',', '.') . "</td>";
        echo "<td>" . htmlspecialchars($item->getGaransi()) . "</td>";
        echo "<td>" . htmlspecialchars($item->getTipe()) . "</td>";
        echo "<td>" . htmlspecialchars($item->getUkuran()) . "</td>";
        echo "<td>" . htmlspecialchars($item->getResolusi()) . "</td>";
        echo "<td>" . htmlspecialchars($item->getJenisPanel()) . "</td>";
        echo "</tr>";
    }

    echo "        </tbody>
              </table>
          </body>
          </html>";
}

// Panggil fungsi untuk menampilkan tabel
tampilkanDataTabel($dataProduk);

?>