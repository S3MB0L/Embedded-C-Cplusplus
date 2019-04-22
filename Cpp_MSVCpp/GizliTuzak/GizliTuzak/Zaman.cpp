#include "pch.h"
#include "Zaman.h"

Zaman::Zaman(int sa, int dk, int sn)
{
}

void Zaman::zamanAyarla(int sa, int dk, int sn)
{
	saat = (sa >= 0 && sa < 24) ? sa : 0;
	dakika = (dk >= 0 && dk < 60) ? dk : 0;
	saniye = (sn >= 0 && sn < 60) ? sn : 0;
}

int Zaman::saatOku()
{
	return saat;
}

int &Zaman::kotuSaatAyarla(int sa)
{
	saat = (sa >= 0 && sa < 24) ? sa : 0;
	return saat;
}

Zaman::~Zaman()
{
}
