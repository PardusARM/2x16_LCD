2x16 LCD Ekran
===========
![PTS](http://portal.parduslinux.org/wp-content/uploads/2015/04/pardus-logo2.png)
Gerekli Donanımlar
--------

 - Raspberry Pi (Pardus ARM Kurulu olarak)
 - WiringPi [(Kurulum Sayfası)](http://forum.pardus.net.tr/index.php?topic=3856)
 - 2x16 LCD Ekran
![enter image description here](https://raw.githubusercontent.com/iscalik/2x16_LCD/master/2x16LCDEkran.png)
 - 10K Trimpot
![enter image description here](https://github.com/iscalik/2x16_LCD/raw/master/10kpot.png)
 - Breadboard
![enter image description here](http://docs.gadgetkeeper.com/download/attachments/7700673/breadboard.jpg?version=1&modificationDate=1395551116000&api=v2&effects=border-simple,shadow-kn)
 - Birkaç kablo (15-20 Parça)
![enter image description here](http://docs.gadgetkeeper.com/download/attachments/7700673/jumper%20wires.jpg?version=1&modificationDate=1395551224000&api=v2&effects=border-simple,shadow-kn)

Bu proje IoT Projesi olup, Pardus ARM ekibi tarafından geliştirilmiştir. Bu proje sonunda 2x16 boyutunda LCD ekran ile çıktı alabileceğiz.

Devrenin Kurulumu
------------
Devremizi şemada görüldüğü gibi yaptıktan sonra, Raspberry Pi üzerinde işlemler yapmaya başlayabiliriz.
![enter image description here](https://github.com/iscalik/2x16_LCD/raw/master/2x16_Devre_Semasi_bb.png)

Kullanımı
-----
lcd.c dosyasını indirdikten sonra, wiringPi ile derlememiz gerekiyor. Aşağıdaki komutu kullanarak C dosyasını derleyebiliriz.

    gcc -Wall -o lcd lcd.c -lwiringPi

Derlemek bittikten sonra, programı açmak için yönetici izni ile aşağıdaki komutu kullanalım.

    ./lcd
Belirtilen işlemlerde sorun yok ise çıktı olarak LCD ekranda yazı göreceksiniz, arzuya göre C dosyasından değiştirip tekrar derleyerek düzenlenebilir.

***Destek***

İsmet Said Çalık 
<ismetsaid.calik@pardus.net.tr>
http://calik.me

Mehmet Nuri Öztürk
 <mehmetnuri.ozturk@pardus.net.tr>
 
Erdoğan Bilgici 
<destek@linuxcozumleri.com>