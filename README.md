# Sistem Deteksi Kebocoran Air dengan ThingSpeak

## 📌 Deskripsi Singkat
Proyek ini bertujuan untuk mendeteksi kebocoran air menggunakan sensor digital sederhana. Sistem akan menyalakan LED saat kebocoran terdeteksi dan mengirimkan data ke platform IoT **ThingSpeak** secara real-time.

## 🧰 Alat & Bahan
- ESP32
- Sensor kebocoran air (contohnya: YL-69 atau push button untuk simulasi)
- Kabel jumper
- ThingSpeak Account

## 💡 Fitur Utama
- Deteksi kebocoran air (1 = bocor, 0 = tidak bocor)
- Tampilan grafik di ThingSpeak
- LED indikator untuk kebocoran

## 🔗 Platform yang Digunakan
- [Wokwi Simulator](https://wokwi.com/)
- [ThingSpeak IoT](https://thingspeak.com/)
- Visual Studio Code + GitHub

## 🧾 Penjelasan Singkat Program
- Saat tombol ditekan (atau sensor mendeteksi air), sistem mengirimkan data `1` ke ThingSpeak.
- Jika tidak terdeteksi, data `0` dikirim.
- LED menyala saat kebocoran terdeteksi.

## 📎 Tautan Pendukung
- Wokwi Project: https://wokwi.com/projects/435107002445009921

## 👨‍💻 Pembuat
**Nama:** Irpan Maulana  
**NIM:** 22552011284  
**Mata Kuliah:** Sistem Mikrokontroler  
**Universitas Teknologi Bandung (UTB)**
