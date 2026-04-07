// 12S25015 - Chyntia Lovenia Tambunan

#include <stdio.h>

struct perkalian {
  float jumlah;
  float harga;
  float hasil;
  float diskon;
  float akhir;
};

int main(int _argv, char **_argc){
  struct perkalian a;

  scanf("%f", &a.jumlah);
  scanf("%f", &a.harga);

  a.hasil = a.jumlah * a.harga;
  
  if (a.hasil > 500000){
    a.diskon = a.hasil * 0.15;
    a.akhir = a.hasil - a.diskon;
    printf("%.2f\n", a.diskon);
  }
  else if (a.hasil > 100000){
    a.diskon = a.hasil * 0.10;
    a.akhir = a.hasil - a.diskon;
    printf("%.2f\n", a.diskon);
  }
  else if(a.hasil >= 50000){
    a.diskon = a.hasil * 0.05;
    a.akhir = a.hasil - a.diskon;
    printf("%.2f\n", a.diskon);
  }
  else{
    a.diskon = 0;
    printf("---\n");
    a.akhir = a.hasil;
  }
  
  printf("%.2f\n", a.akhir);

  return 0;
}