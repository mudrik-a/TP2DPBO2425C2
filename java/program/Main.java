import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    // --- 5 DATA DUMMY ---
    private static List<TV> dataProduk = new ArrayList<>();
    private static Scanner scanner = new Scanner(System.in);

    static {
        dataProduk.add(new TV("001", "LG OLED C2", "LG", 20000000, "2 Tahun", "TV OLED", "65 Inch", "4K Ultra HD", "OLED"));
        dataProduk.add(new TV("002", "Samsung Neo QLED", "Samsung", 18500000, "2 Tahun", "TV QLED", "55 Inch", "4K Ultra HD", "Neo QLED"));
        dataProduk.add(new TV("003", "Sony Bravia XR", "Sony", 15000000, "1 Tahun", "TV LED", "50 Inch", "4K Ultra HD", "LED"));
        dataProduk.add(new TV("004", "Polytron Cinemax", "Polytron", 3500000, "3 Tahun", "TV LED", "32 Inch", "HD", "LED"));
        dataProduk.add(new TV("005", "Xiaomi Smart TV", "Xiaomi", 5200000, "1 Tahun", "TV LED", "43 Inch", "Full HD", "LED"));
    }

    public static void main(String[] args) {
        int pilihan;
        do {
            tampilkanMenu();
            System.out.print("Masukkan pilihan Anda (1/2/3): ");
            pilihan = scanner.nextInt();
            scanner.nextLine(); // Consume newline

            switch (pilihan) {
                case 1:
                    tampilkanDataTabel();
                    break;
                case 2:
                    tambahData();
                    break;
                case 3:
                    System.out.println("Terima kasih, program selesai.");
                    break;
                default:
                    System.out.println("Pilihan tidak valid. Silakan coba lagi.");
            }
        } while (pilihan != 3);
    }

    private static void tampilkanMenu() {
        System.out.println("=========================");
        System.out.println("   MENU TOKO ELEKTRONIK   ");
        System.out.println("=========================");
        System.out.println("1. Tampilkan Data");
        System.out.println("2. Tambah Data");
        System.out.println("3. Keluar");
        System.out.println("=========================");
    }

    private static void tampilkanDataTabel() {
        if (dataProduk.isEmpty()) {
            System.out.println("Data kosong. Silakan tambahkan data terlebih dahulu.");
            return;
        }

        String[] headers = {"ID", "Nama Produk", "Merk", "Harga", "Garansi", "Tipe", "Ukuran", "Resolusi", "Jenis Panel"};

        int[] colWidths = new int[headers.length];
        for (int i = 0; i < headers.length; i++) {
            colWidths[i] = headers[i].length();
        }

        // Hitung lebar kolom terpanjang
        for (TV tv : dataProduk) {
            colWidths[0] = Math.max(colWidths[0], tv.getIdProduk().length());
            colWidths[1] = Math.max(colWidths[1], tv.getNamaProduk().length());
            colWidths[2] = Math.max(colWidths[2], tv.getMerk().length());
            colWidths[3] = Math.max(colWidths[3], String.valueOf((int) tv.getHarga()).length());
            colWidths[4] = Math.max(colWidths[4], tv.getGaransi().length());
            colWidths[5] = Math.max(colWidths[5], tv.getTipe().length());
            colWidths[6] = Math.max(colWidths[6], tv.getUkuran().length());
            colWidths[7] = Math.max(colWidths[7], tv.getResolusi().length());
            colWidths[8] = Math.max(colWidths[8], tv.getJenisPanel().length());
        }

        // Cetak header
        String formatString = "|";
        for (int width : colWidths) {
            formatString += " %-" + width + "s |";
        }
        formatString += "\n";

        garisPembatas(colWidths);
        System.out.printf(formatString, (Object[]) headers);
        garisPembatas(colWidths);

        // Cetak data
        for (TV tv : dataProduk) {
            System.out.printf(formatString,
                    tv.getIdProduk(),
                    tv.getNamaProduk(),
                    tv.getMerk(),
                    String.valueOf((int) tv.getHarga()),
                    tv.getGaransi(),
                    tv.getTipe(),
                    tv.getUkuran(),
                    tv.getResolusi(),
                    tv.getJenisPanel()
            );
        }
        garisPembatas(colWidths);
        System.out.println();
    }

    private static void garisPembatas(int[] widths) {
        System.out.print("+");
        for (int width : widths) {
            for (int i = 0; i < width + 2; i++) {
                System.out.print("-");
            }
            System.out.print("+");
        }
        System.out.println();
    }

    private static void tambahData() {
        System.out.println("\n--- Tambah Data TV Baru ---");
        System.out.print("Masukkan ID Produk: ");
        String idProduk = scanner.nextLine();
        System.out.print("Masukkan Nama Produk: ");
        String namaProduk = scanner.nextLine();
        System.out.print("Masukkan Merk: ");
        String merk = scanner.nextLine();
        System.out.print("Masukkan Harga: ");
        double harga = scanner.nextDouble();
        scanner.nextLine(); // Consume newline
        System.out.print("Masukkan Garansi: ");
        String garansi = scanner.nextLine();
        System.out.print("Masukkan Tipe: ");
        String tipe = scanner.nextLine();
        System.out.print("Masukkan Ukuran: ");
        String ukuran = scanner.nextLine();
        System.out.print("Masukkan Resolusi: ");
        String resolusi = scanner.nextLine();
        System.out.print("Masukkan Jenis Pane: ");
        String jenisPanel = scanner.nextLine();

        TV produkBaru = new TV(idProduk, namaProduk, merk, harga, garansi, tipe, ukuran, resolusi, jenisPanel);
        dataProduk.add(produkBaru);
        System.out.println("\nData berhasil ditambahkan!");
        tampilkanDataTabel();
    }
}