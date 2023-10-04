int main() {
	
	char ad[30],soyad[30],meslek[30],yas[3];
	
	printf("Ogrenci Adi: ");
	scanf("%s",&ad);
	
	printf("Ogrenci Soyadi: ");
	scanf("%s",&soyad);
	
	printf("Ogrenci Meslegi"),
	scanf("%s",&meslek);
	
	printf("Ogrenci Yasi: ");
	scanf("%s",&yas);
	printf("\n\n\n");
	printf("******Ogrenci Kimligi*******\n\n");
	printf("AD: %s\n",ad);
	printf("SOYAD: %s\n",soyad);
	printf("MESLEK: %s\n",meslek);
	printf("YAS: %s",yas);
	
	printf("\n\n");
	
	float sinav1,sinav2,sinav3,sinav4,sinav5,ortalama;
	
	printf("1.Sinav Sonucu Girin: ");
	scanf("%f",&sinav1);
	
	printf("2.Sinav Sonucu Girin: ");
	scanf("%f",&sinav2);
	
	printf("3.Sinav Sonucu Girin: ");
	scanf("%f",&sinav3);
	
	printf("4.Sinav Sonucu Giriniz: ");
	scanf("%f",&sinav4);
	
	printf("5.Sinav Sonucu Giriniz: ");
	scanf("%f",&sinav5);
	
	ortalama=(sinav1+sinav2+sinav3+sinav4+sinav5)/5;
	
	printf("Ortalamanız: %f\n",ortalama);
	
	if(ortalama>=50)
	{
		printf("Tebrikler Sinafi Geçtiniz");
	}
	else
	{
		printf("Malesef Sinifi Gecemediniz");
	}
