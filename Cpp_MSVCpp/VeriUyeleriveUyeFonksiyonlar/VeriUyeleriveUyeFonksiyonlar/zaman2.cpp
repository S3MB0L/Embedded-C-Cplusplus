#include "pch.h"
#include <iostream>
#include "zaman2.h"

using std::cout;

zaman::zaman(int sa, int dk, int sn)
{
	zamanAyarla(0, 0, 0);
}

void zaman::zamanAyarla(int sa, int dk, int sn)
{
	saatAyarla(sa);
	dakikaAyarla(dk);
	saniyeAyarla(sn);
}

void zaman::saatAyarla(int sa)
{
	saat = (sa >= 0 && sa < 24) ? sa : 0;
}

void zaman::dakikaAyarla(int dk)
{
	dakika = (dk >= 0 && dk < 60) ? dk : 0;
}

void zaman::saniyeAyarla(int sn)
{
	saniye = (sn >= 0 && sn < 60) ? sn : 0;
}

int zaman::saatOku()
{
	return saat;
}

int zaman::dakikaOku()
{
	return dakika;
}

int zaman::saniyeOku()
{
	return saniye;
}

void zaman::askeriYaz()
{
	cout << (saat < 10 ? "0" : "") << saat << ":" << (dakika < 10 ? "0" : "") << dakika;
}

void zaman::standartYaz()
{
	cout << ((saat == 0 || saat == 12) ? 12 : saat % 12) << ":" << (dakika < 10 ? "0" : "")
		<< dakika << ":" << (saniye < 10 ? "0" : "") << saniye << (saat < 12 ? "AM" : "PM");
}
