 #include<iostream>
 #include <stdio.h> 
 using namespace std;
 
  int main() 
  {
      float sum[6];
      
      for (int i = 0; i < 3; i++){
         int a;                    //a为id号 
         cin >> a;
         int number;                    // number为发票张数 
         cin >> number;
         for (int j = 0; j < number;j++){
             char type;
             cin >> type;
             float value;
             cin >> value;
             if (type == 'A') {
                 sum[a- 1] += value;
                 sum[3] += value;
             }
             else if (type == 'B') {
                 sum[a - 1] += value;
                 sum[4] += value;
             } 
             else if (type == 'C') {
                 sum[a - 1] += value;
                 sum[5] += value;
             }    
         }
     }
     printf("1 %.2f\n", sum[0]);
     printf("2 %.2f\n", sum[1]);
     printf("3 %.2f\n", sum[2]);
     printf("A %.2f\n", sum[3]);
     printf("B %.2f\n", sum[4]);
     printf("C %.2f\n", sum[5]);
     return 0;
    }
