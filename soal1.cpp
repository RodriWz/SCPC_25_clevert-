#include <iostream>  // Untuk input/output
using namespace std;

int main() {
    // Optimasi I/O untuk kompetisi (opsional)
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Deklarasi variabel dengan tipe long long
    long long A, B;

    // Input dua bilangan dari satu baris
    cin >> A >> B;

    // Output hasil penjumlahan
    cout << A + B << '\n';

    return 0;
}

// Mari kita jelaskan baris per baris:

// 1. 
// 📦 Ini adalah library standar C++ untuk input/output. Tanpa ini, kamu nggak bisa pakai  dan .

// 2. 
// 🔧 C++ punya banyak "namespace" (ruang nama).  adalah tempat semua fungsi standar seperti , , dll. Kalau kamu nggak tulis ini, kamu harus nulis , , dst.

// 3. 
// 🚪 Fungsi  adalah pintu masuk utama program C++. Ketika kamu menjalankan program, yang pertama dijalankan adalah isi dari .

// 4. 
// 🧮 Ini adalah deklarasi dua variabel:  dan . Kita pakai tipe data  karena:
// • 	 hanya bisa menyimpan angka sampai sekitar 2 miliar.
// • 	 bisa menyimpan angka sampai sekitar 9 kuadriliun (2⁶³ - 1), jadi aman untuk angka hingga 40 miliar.

// 5. 
// 📥 Ini membaca dua angka dari satu baris input. Misalnya, kalau kamu ketik:

// Maka  dan .

// 6. 
// 📤 Ini mencetak hasil penjumlahan ke layar.  artinya "end line" atau pindah baris setelah mencetak.

// 7. 
// ✅ Ini menandakan bahwa program selesai dengan sukses. Angka  biasanya berarti "tidak ada error"