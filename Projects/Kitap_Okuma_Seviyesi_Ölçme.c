#include <stdio.h>

int main()
{
    int Bilim_Kurgu;
    int Bilim;
    int Siyaset;
    int Roman;
    int Hikaye;
    int Şiir;
    int polisiye;
    int Ruh_Böcüğü;
    int Akıl_Böcüğü;
    int Full_Paket_Böcüğü;
    int Kitap_Okuma_Seviyesi;
    
    printf("Bilim Kurgu Türünde Kaç Kitap Okudunuz?\n");
    scanf("%d",&Bilim_Kurgu);
    printf("Bilim Türünde Kaç Kitap Okudunuz?\n");
    scanf("%d",&Bilim);
    printf("Siyaset Türünde Kaç Kitap Okudunuz?\n");
    scanf("%d",&Siyaset);
    printf("Roman Türünde Kaç Kitap Okudunuz?\n");
    scanf("%d",&Roman);
    printf("Hikaye Türünde Kaç Kitap Okudunuz?\n");
    scanf("%d",&Hikaye);
    printf("Şiir Türünde Kaç Kitap Okudunuz?\n");
    scanf("%d",&Şiir);
    printf("Polisiye Türünde Kaç Kitap Okudunuz?\n");
    scanf("%d",&polisiye);
    
    Ruh_Böcüğü = (Roman+Hikaye+Şiir)*3;
    Akıl_Böcüğü = (Bilim_Kurgu+Bilim+Siyaset)*3;
    Full_Paket_Böcüğü = polisiye * 5;
    
    Kitap_Okuma_Seviyesi = Ruh_Böcüğü + Akıl_Böcüğü + Full_Paket_Böcüğü;
    
    if (Kitap_Okuma_Seviyesi > 850)
    {
        printf("Kitap Okuma Seviyeniz %d. Siz bir  ULTİ İNTELLECTUAL Bireysiniz Tebrikler!\n",Kitap_Okuma_Seviyesi);
        
            if (Akıl_Böcüğü > 240)
            {
                printf("Siz Aklın Zirvelerinde Dolaşmayı Seven Bir Zeki İnsansınız. Akıl Böcüğü Puanınız %d\n",Akıl_Böcüğü);
                    
                    if (Ruh_Böcüğü > 240)
                    {
                        printf("Siz Ruhun Zirvelerinde Dolaşmayı Seven Bir Duygu Bombası İnsanısınız. Ruh Böcüğü Puanınız %d\n",Ruh_Böcüğü);
                    }
                    else if (Ruh_Böcüğü < 240)
                    {
                        printf("Siz Ruhun Zirvelerinde Dolaşmayı Sevmeyen Bir İnsanısınız. Ruh Böcüğü Puanınız %d\n",Ruh_Böcüğü);
                    }
            }
            else if (Akıl_Böcüğü < 240)
            {
                printf("Siz Aklın Zirvelerinde Dolaşmayı Sevmeyen Bir  İnsansınız. Akıl Böcüğü Puanınız %d\n",Akıl_Böcüğü);
                    
                    if (Ruh_Böcüğü > 240)
                    {
                        printf("Siz Ruhun Zirvelerinde Dolaşmayı Seven Bir Duygu Bombası İnsanısınız. Ruh Böcüğü Puanınız %d\n",Ruh_Böcüğü);
                    }
                    else if (Ruh_Böcüğü < 240)
                    {
                        printf("Siz Ruhun Zirvelerinde Dolaşmayı Sevmeyen Bir İnsanısınız. Ruh Böcüğü Puanınız %d\n",Ruh_Böcüğü);
                    }
            }
    }
    else if (Kitap_Okuma_Seviyesi > 500)
    {
        printf("Kitap Okuma Seviyeniz %d. Siz Normal Bir Okuyucusunuz. Neden Bundan Sonra Daha Çok Kitap Okumayalım! \n",Kitap_Okuma_Seviyesi);
        
            if (Akıl_Böcüğü > 120)
            {
                printf("Siz Aklın Zirvelerinde Dolaşmayı Seven Bir Zeki İnsansınız. Akıl Böcüğü Puanınız %d\n",Akıl_Böcüğü);
                    
                    if (Ruh_Böcüğü > 120)
                    {
                        printf("Siz Ruhun Zirvelerinde Dolaşmayı Seven Bir Duygu Bombası İnsanısınız. Ruh Böcüğü Puanınız %d\n",Ruh_Böcüğü);
                    }
                    else if (Ruh_Böcüğü < 120)
                    {
                        printf("Siz Ruhun Zirvelerinde Dolaşmayı Sevmeyen Bir İnsanısınız. Ruh Böcüğü Puanınız %d\n",Ruh_Böcüğü);
                    }
            }
            else if (Akıl_Böcüğü < 120)
            {
                printf("Siz Aklın Zirvelerinde Dolaşmayı Sevmeyen Bir  İnsansınız. Akıl Böcüğü Puanınız %d\n",Akıl_Böcüğü);
                    
                    if (Ruh_Böcüğü > 120)
                    {
                        printf("Siz Ruhun Zirvelerinde Dolaşmayı Seven Bir Duygu Bombası İnsanısınız. Ruh Böcüğü Puanınız %d\n",Ruh_Böcüğü);
                    }
                    else if (Ruh_Böcüğü < 120)
                    {
                        printf("Siz Ruhun Zirvelerinde Dolaşmayı Sevmeyen Bir İnsanısınız. Ruh Böcüğü Puanınız %d\n",Ruh_Böcüğü);
                    }
            }
    }
    else if (Kitap_Okuma_Seviyesi > 200)
    {
        printf("Kitap Okuma Seviyeniz %d. Siz Neredeyse Hiç Kitap Okumayan Bireysiniz. Lütfen Daha Çok Kitap OKu ve Buraya Öyle GEL!\n",Kitap_Okuma_Seviyesi);
        
            if (Akıl_Böcüğü > 240)
            {
                printf("Siz Aklın Zirvelerinde Dolaşmayı Seven Bir Zeki İnsansınız. Akıl Böcüğü Puanınız %d\n",Akıl_Böcüğü);
                    
                    if (Ruh_Böcüğü > 240)
                    {
                        printf("Siz Ruhun Zirvelerinde Dolaşmayı Seven Bir Duygu Bombası İnsanısınız. Ruh Böcüğü Puanınız %d\n",Ruh_Böcüğü);
                    }
                    else if (Ruh_Böcüğü < 240)
                    {
                        printf("Siz Ruhun Zirvelerinde Dolaşmayı Sevmeyen Bir İnsanısınız. Ruh Böcüğü Puanınız %d\n",Ruh_Böcüğü);
                    }
            }
            else if (Akıl_Böcüğü < 240)
            {
                printf("Siz Aklın Zirvelerinde Dolaşmayı Sevmeyen Bir  İnsansınız. Akıl Böcüğü Puanınız %d\n",Akıl_Böcüğü);
                    
                    if (Ruh_Böcüğü > 240)
                    {
                        printf("Siz Ruhun Zirvelerinde Dolaşmayı Seven Bir Duygu Bombası İnsanısınız. Ruh Böcüğü Puanınız %d\n",Ruh_Böcüğü);
                    }
                    else if (Ruh_Böcüğü < 240)
                    {
                        printf("Siz Ruhun Zirvelerinde Dolaşmayı Sevmeyen Bir İnsanısınız. Ruh Böcüğü Puanınız %d\n",Ruh_Böcüğü);
                    }
            }
    }
    
    return 0;
}
