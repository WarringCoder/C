#include <stdio.h>

int main()
{
    int bakiye = 2200;
    int kredi1 = 5000;
    int kredi2 = 10000;
    int kredi3 = 15000;
    int kredi;
    int işlem;
    int tutar;
    
    printf("1:Bakiye Sorgulama\n2:Para Yatır\n3:Para Çek\n4:Havale\n5:Kredi Kullan\n6:Kart İade\n\n\n\nİşlemi Giriniz:");
    scanf("%d",&işlem);
    
    switch (işlem)
    {
        case 1:
            printf("Bakiyeniz: %d\n",bakiye);
            break;
        case 2:
            printf("Bakiyeniz: %d\n",bakiye);
            printf("Yatırmak istediğiniz Tutarı Girniz:\n");
            scanf("%d",&tutar);
            bakiye += tutar;
            printf("İşlem Başarıyla Gerçekleşmiştir.\nBakiyeniz %d\n",bakiye);
            break;
        case 3:
            printf("Bakiyeniz: %d\n",bakiye);
            printf("Çekmek istediğiniz Tutarı Girniz:\n");
            scanf("%d",&tutar);
                if (tutar>bakiye)
                {
                    printf("Bakiyeniz Yetersiz\n");
                }
                else
                {
                    bakiye -= tutar;
                    printf("İşlem Başarıyla Gerçekleşmiştir.\nBakiyeniz %d\n",bakiye);
                }
            break;
        case 4:
            printf("Bakiyeniz: %d\n",bakiye);
            printf("Havale Yapmak istediğinz Tutarı Girniz:\n");
            scanf("%d",&tutar);
                if (tutar>bakiye)
                {
                    printf("Bakiyeniz Yetersiz\n");
                }
                else
                {
                    bakiye -= tutar;
                    printf("İşlem Başarıyla Gerçekleşmiştir.\nBakiyeniz %d\n",bakiye);
                }
            
            break;
        case 5:
            printf("Bakiyeniz: %d\n\n",bakiye);
            printf("1:KREDİ A = 5000 TL\n2:KREDİ B = 10000TL\n3:KREDİ C = 15000 TL\n\n\n");
            printf("Hangi Krediyi Kullnmak İstersiniz:\n");
            scanf("%d",&kredi);
                switch (kredi)
                {
                    case 1:
                        if (bakiye > 2000)
                        {
                            printf("Tebrikler Kredi Almaya Hak Kazandınız!\n");
                            bakiye += kredi1;
                            printf("Kredi Çekildi.\n Bakiyeniz %d\n",bakiye);
                            
                        }
                        else
                        {
                            printf("Bu Kredi İçin Bakiyeniz Yetersiz");
                        }
                    break;
                    case 2:
                        if (bakiye > 4000)
                        {
                            printf("Tebrikler Kredi Almaya Hak Kazandınız!\n");
                            bakiye += kredi2;
                            printf("İşlem Başarılı.Bakiyeniz %d\n",bakiye);
                            
                        }
                        else
                        {
                            printf("Bu Kredi İçin Bakiyeniz Yetersiz\n");
                        }
                    break;
                    case 3:
                        if (bakiye > 8000)
                        {
                            printf("Tebrikler Kredi Almaya Hak Kazandınız!\n");
                            bakiye += kredi3;
                            printf("İşlem Başarılı. Bakiyeniz %d\n",bakiye);
                            
                        }
                        else
                        {
                            printf("Bu Kredi İçin Bakiyeniz Yetersiz\n");
                        }
                    break;
                    default:
                        printf("Geçersiz İşlem");
                    break;
                }
            break;
            case 6:
                printf("Kartınız İade Edildi\n");
            break;
        
        default:
            printf("Geçersiz İşlem");
        break;
    }
    return 0;
}
