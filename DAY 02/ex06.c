#include <stdio.h>

int main(void) {
    int income = 0;          // ���� 
    double tax;               // ���� 
    const double tax_rate = 0.12;    // ���� 
    // const : ����� �����ϴ� Ű����
    //         ����� ����� ���ÿ� �ʱ�ȭ
    //         ���� �ٲ� �� ���� 



     income = 1000;
     tax = income * tax_rate; 

 printf("������ %.1lf �Դϴ�. \n" , tax );
 return 0; 
    
}
                                                                                                                                                                        