#ifndef NOTDEFTERI_H_
#define NOTDEFTERI_H_

#include <string>

class ntd {
public:
         void   dosyaKaydet(const std::string& dosyaAdi, const std::string& icerik);
    std::string dosyaAc(const std::string& dosyaAdi);
    std::string dosyaOku(const std::string& dosyaAdi);
         void dosyaYaz(const std::string& dosyaAdi, const std::string& icerik);


private:
};
std::string gozat();

void dosyaOlustur(const std::string& konum);

#endif // NOTDEFTERI_H_
