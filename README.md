# One_Button_Multiple_Task_3_LED
One_Button_Multiple_Task_3_LED
Kode untuk arduino uno menggunakan C++. 
Saya ingin menerapkan hardware board arduino uno dengan pin: 
Momentary pushbutton (pin 2). Gunakan INPUT_PULLUP 
led merah (pin 11)
led kuning (pin 10)
led hijau (pin 9)
Buat kode dengan spesifikasi:
1. Buatkan folder tersendiri Led.h, Led.cpp, PushButton.h, PushButton.cpp
2. Nama class : class PushButton
3. Wajib menggunakan millis()
4. Gunakan method debounce pada momentary push button menggunakan millis > 50
5. Gunakan algoritma nya seperti ini:
Jika momentary push button ditekan terus selama millis > 5000 maka led hijau akan on

Jika momentary push button ditekan kemudian dilepas (dihitung ada 3 kali proses momentary push button ditekan) selama millis > 1000 maka led kuning akan on

Jika momentary push button ditekan kemudian dilepas (dihitung cuma 1 kali proses penekanan) selama millis > 500 maka led merah akan on.

Jika ada salah satu led nyala / on, kemudian momentary push button ditekan kemudian dilepas (dihitung cuma 1 kali peroses penekanan) selama miliis > 500 maka semua led akan padam / mati / off
