// GizliTuzak.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include "pch.h"
#include <iostream>
#include "zaman.h"

using std::cout;
using std::endl;

int main()
{
	Zaman z;

	int &saatRef = z.kotuSaatAyarla(20);

	cout << "Degistirmeden once saat: " << saatRef << "\n";
	saatRef = 30; /*geçersiz değer ile yenileme*/
	cout << "Degistirdikten sonra saat: " << z.saatOku() << "\n";

	/*fonksiyon zaman sınıfının saat nesnesinin adresini gösterdiği için  değer 
	direk adrese yazılır ve güvenlik zafiyeti doğar*/
	z.kotuSaatAyarla(12) = 74;

	cout << "Kotu saat ayari sonrasi saat: " << z.saatOku() << "\n";

	return 0;
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
