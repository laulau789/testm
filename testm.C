#include <stdio.h>

int main(void) {

   float marmita = 0;
    char tamanho;
    int  arroz;
    int feijao;
    char guarnicao;
    int talheres;

  scanf(" %c", &tamanho);
  scanf("%d",&arroz);
  scanf("%d",&feijao);
  scanf(" %c",&guarnicao);
  scanf("%d",&talheres );

if (tamanho == 'p'){
  marmita+= 12.00;
}
if (tamanho == 'm'){
    marmita+= 16.00;
  }
  if (tamanho == 'g'){
    marmita+= 18.00;
  }


  if (arroz == 1){
    marmita += 00.00;
  }
  if (arroz == 0){
    marmita+= 02.50;
  }


  if (feijao == 1){
    marmita += 00.00;
  }
  if (feijao == 0){
    marmita+= 02.50;
  }


  if (guarnicao == 'f'){
    marmita += 00.00;
  }
  if (guarnicao == 'p'){
    marmita+= 01.00;

  }if (guarnicao == 'c'){
    marmita += 02.00;
  }


  if (talheres == 1){
    marmita += 00.50;
  }
  if (talheres == 0){
    marmita+= 00.00;
  }

  printf("%.2f",marmita);

  return 0;}
