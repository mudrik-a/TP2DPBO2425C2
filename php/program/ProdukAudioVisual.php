<?php

require_once 'ProdukElektronik.php';

class ProdukAudioVisual extends ProdukElektronik {
    protected $harga;
    protected $garansi;
    protected $tipe;

    public function __construct($idProduk, $namaProduk, $merk, $gambar, $harga, $garansi, $tipe) {
        parent::__construct($idProduk, $namaProduk, $merk, $gambar); // Meneruskan parameter gambar
        $this->harga = $harga;
        $this->garansi = $garansi;
        $this->tipe = $tipe;
    }

    // Getters
    public function getHarga() { return $this->harga; }
    public function getGaransi() { return $this->garansi; }
    public function getTipe() { return $this->tipe; }

    // Setters
    public function setHarga($harga) { $this->harga = $harga; }
    public function setGaransi($garansi) { $this->garansi = $garansi; }
    public function setTipe($tipe) { $this->tipe = $tipe; }
}