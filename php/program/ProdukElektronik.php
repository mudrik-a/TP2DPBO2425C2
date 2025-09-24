<?php

class ProdukElektronik {
    protected $idProduk;
    protected $namaProduk;
    protected $merk;
    protected $gambar; // Atribut baru untuk jalur gambar

    public function __construct($idProduk, $namaProduk, $merk, $gambar) {
        $this->idProduk = $idProduk;
        $this->namaProduk = $namaProduk;
        $this->merk = $merk;
        $this->gambar = $gambar;
    }

    // Getters
    public function getIdProduk() { return $this->idProduk; }
    public function getNamaProduk() { return $this->namaProduk; }
    public function getMerk() { return $this->merk; }
    public function getGambar() { return $this->gambar; } // Getter untuk gambar

    // Setters
    public function setIdProduk($idProduk) { $this->idProduk = $idProduk; }
    public function setNamaProduk($namaProduk) { $this->namaProduk = $namaProduk; }
    public function setMerk($merk) { $this->merk = $merk; }
    public function setGambar($gambar) { $this->gambar = $gambar; } // Setter untuk gambar
}