<?php

require_once 'ProdukAudioVisual.php';

class TV extends ProdukAudioVisual {
    private $ukuran;
    private $resolusi;
    private $jenisPanel;

    public function __construct($idProduk, $namaProduk, $merk, $gambar, $harga, $garansi, $tipe, $ukuran, $resolusi, $jenisPanel) {
        parent::__construct($idProduk, $namaProduk, $merk, $gambar, $harga, $garansi, $tipe); // Meneruskan parameter gambar
        $this->ukuran = $ukuran;
        $this->resolusi = $resolusi;
        $this->jenisPanel = $jenisPanel;
    }

    // Getters
    public function getUkuran() { return $this->ukuran; }
    public function getResolusi() { return $this->resolusi; }
    public function getJenisPanel() { return $this->jenisPanel; }

    // Setters
    public function setUkuran($ukuran) { $this->ukuran = $ukuran; }
    public function setResolusi($resolusi) { $this->resolusi = $resolusi; }
    public function setJenisPanel($jenisPanel) { $this->jenisPanel = $jenisPanel; }
}