#pragma once
class Zaman
{
public:
	Zaman(int = 0, int = 0, int = 0);
	void zamanAyarla(int, int, int);
	int saatOku();
	int &kotuSaatAyarla(int);
	~Zaman();

private:
	int saat;
	int dakika;
	int saniye;

};

