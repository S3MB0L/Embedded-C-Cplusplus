#ifndef ZAMAN2_H
#define ZAMAN2_H

class zaman
{
public:
	zaman(int = 0, int = 0, int = 0);

	void zamanAyarla(int sa, int dk, int sn);
	void saatAyarla(int sa);
	void dakikaAyarla(int dk);
	void saniyeAyarla(int sn);

	int saatOku();
	int dakikaOku();
	int saniyeOku();

	void askeriYaz();
	void standartYaz();

private:
	
	int saat;
	int dakika;
	int saniye;

};

#endif
