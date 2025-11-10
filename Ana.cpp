#include <iostream>
#include "NotDefteri.h"
//TODO: #include <SDL2/SDL.h> indirliecek
#include <string>
#include <clocale>
#include <cctype>
#include <fstream>
/*//TODO: Not defteri:
    Ilk olarak locale ile bolge ve dil secilir.
    Daha sonra karakterlerin buyuk/kucuk harf donusumleri yapilir.
    Ornegin 'i' karakteri Turkiye locale'inde 'İ' olarak donusur.
    ===================================================================
    //* YAPIMM ASAMASI VE YONTEMI
    Ilk olarak not defteri icin beirli fonksiyonlar yazilacak.
    Ornegin dosya acma, kaydetme, farkli kaydetme, yazma, okuma gibi.
    Daha sonra bu fonksiyonlar kullanilarak basit bir not defteri uygulamasi yapilacak.
    En son olarak GUI eklenerek kullanici dostu bir uygulama haline getirilecek.
    =================================================================== 
    //* KULLANILACAK KUTUPHANELER
    - <fstream> : Dosya islemleri icin
    - <locale> : Yerel ayarlar icin
    - <codecvt> : Karakter kodlamalari icin
    - <string> : Metin islemleri icin
    - <iostream> : Girdi/Çıktı islemleri icin
    ===================================================================
    //* GUI ICIN KULLANILACAK KUTUPHANELER
    - <SDL2/SDL.h> : Grafik ve pencere islemleri icin
    - <SDL2/SDL_ttf.h> : Yazı tipi islemleri icin
    - <SDL2/SDL_image.h> : Resim islemleri icin
    ===================================================================
    //* PROJE YAPISI
    - Ana.cpp : Ana program dosyasi
    - NotDefteri.h : Not defteri sinifi ve fonksiyonlari
    - NotDefteri.cpp : Not defteri sinifi ve fonksiyonlarinin implementasyonu
    - GUI.h : GUI sinifi ve fonksiyonlari
    - GUI.cpp : GUI sinifi ve fonksiyonlarinin implementasyonu
    ===================================================================
    //* PROJE GELISTIRME ASAMALARI
    1. Not defteri sinifi ve temel fonksiyonlarin yazilmasi
    2. Basit bir not defteri uygulamasinin yapilmasi
    3. Figma kullanilarak GUI tasariminin yapilmasi
    4. GUI sinifi ve temel fonksiyonlarin yazilmasi
    5. GUI ile not defteri uygulamasinin entegre edilmesi
    6. Test ve hata duzeltmeleri
    ===================================================================

    //! BU UYGULAMA YAPAY ZEKA KULLANMADDAN  YAZINILLMALIDIR. BU  BIR EGITIM PROJESIDIR.
*/
    using namespace std;

    

int main() {
    /* Debug denemeleri (çalışıyor)
    setlocale(LC_ALL, "Turkish");
    std::cout << "Merhabalarrrrr, dunya!" << std::endl;


    std::string dosyaAdi = "Kodlar\\not.txt";
    ntd dosya1;
    std::cout<<"Secilen dosya adi: " << dosyaAdi << std::endl;

    std::cout << dosya1.dosyaOku(dosyaAdi);
    std::cout << "Dosyaya yaziliyor..." << std::endl;
    dosya1.dosyaYaz(dosyaAdi, "Bu bir test yazisidir.\n");
    std::cout << "Dosyaya yazildi." << std::endl;
    std::cout << dosya1.dosyaOku(dosyaAdi);
    dosya1.dosyaYaz(dosyaAdi, "Ikinci satir eklendi.\n");
    std::cout << dosya1.dosyaOku(dosyaAdi);
    std::cout << "========================================" << std::endl;
    std::cout << dosya1.dosyaOku(dosyaAdi) << std::endl;
    return 0;
    */


}