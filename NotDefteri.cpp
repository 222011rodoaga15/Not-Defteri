#include <iostream>
#include "NotDefteri.h"
#include <fstream>


void ntd::dosyaKaydet(const std::string& konum,  const std::string& icerik)
{
    std::ofstream dosya(konum);
    if (dosya.is_open())
    {
        dosya << icerik;
        dosya.close();
    }
}


std::string ntd::dosyaAc(const std::string& konum)
{

    std::ifstream dosya(konum);
    std::string icerik;
    if (dosya.is_open())
    {   
        
        std::string satir;
        while (std::getline(dosya, satir))
            icerik += satir + "\n";
        dosya.close();
    }else {
        std::cerr << "Dosya açılamadı: " << konum << std::endl;
    }
    return icerik;
}

std::string ntd::dosyaOku(const std::string& konum)
{
return dosyaAc(konum);
}

void dosyaOlustur(const std::string& konum)
{
    std::ofstream dosya(konum);
    if (dosya.is_open())
    {
        dosya.close();
    }else {
        std::cerr << "Dosya oluşturulamadı: " << konum << std::endl;
    }
}

void ntd::dosyaYaz(const std::string& konum, const std::string& icerik)
{
    std::ofstream dosya(konum, std::ios::trunc); // dosyayı sıfırlayıp aç
    if (dosya.is_open())
    {
        dosya << icerik;
        dosya.close();
    } 
    else 
    {
        std::cerr << "Dosya açılamadı: " << konum << std::endl;
    }
}
