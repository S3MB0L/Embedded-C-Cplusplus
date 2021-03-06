// VeriUyeleriveUyeFonksiyonlar.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include "pch.h"
#include <iostream>
#include "zaman2.h"

using std::cout;
using std::endl;
void dakikaArttir(zaman &, const int);

int main()
{
	zaman zaman1;

	zaman1.saatAyarla(18);
	zaman1.dakikaAyarla(13);
	zaman1.saniyeAyarla(16);

	cout << "Gecerli Ayarlar\n"
		<< "Saat: " << zaman1.saatOku()
		<< " Dakika: " << zaman1.dakikaOku()
		<< " Saniye: " << zaman1.saniyeOku()
		<< "\n";

	zaman1.saatAyarla(123);
	zaman1.dakikaAyarla(32);
	zaman1.saniyeAyarla(123123);

	cout << "Gecersiz zaman ayarlarinin sonuclari\n"
		<< "Saat: " << zaman1.saatOku()
		<< " Dakika: " << zaman1.dakikaOku()
		<< " Saniye: " << zaman1.saniyeOku()
		<< "\n";
	zaman1.zamanAyarla(11, 58, 10);
	dakikaArttir(zaman1, 3);
	return 0;
}

void dakikaArttir(zaman &z, const int sayi)
{
	cout << "dakikayi " << sayi
		<< "arttiriyor:\nBaslangic zamani:";
	z.standartYaz();

	for (int i = 0; i < sayi; i++)
	{
		z.dakikaAyarla((z.dakikaOku() + 1) % 60);
		
		if (z.dakikaOku() == 0)
		{
			z.saatAyarla((z.saatOku() + 1) % 24);
		}

		cout << "\ndakika +1 ... yeni zaman: ";
		z.standartYaz();
	}
	cout << endl;
}
// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
