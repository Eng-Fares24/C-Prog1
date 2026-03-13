#include <stdio.h>

void subjects_check(int s1, int s2, int s3, int *F, int *P, int *A){
     if(s1 < 60) *F = 1;
     else        *P = 1;
     if(s2 < 60) *F = *F +1;
     else        *P = *P +1;
     if(s3 < 60) *F = *F +1;
     else        *P = *P +1;
     *A = (s1 + s2 + s3) / 3;
     return;
}

int interval_sub(int z){
     while(z < 0 || z > 100){
        printf("INVALID %% from 0-100 : ");
        scanf("%d", &z);
     } 
     return z;
}
int main(){
   
   int s1, s2, s3, failed = 0, passed = 0, avg;
   printf("Enter subject_1 %% : ");
   scanf("%d", & s1);
   s1 = interval_sub(s1);
   
   printf("Enter subject_2 %% : ");
   scanf("%d", & s2);  
   s2 = interval_sub(s2);

   printf("Enter subject_3 %% : ");
   scanf("%d", & s3);   
   s3 = interval_sub(s3);

   subjects_check(s1, s2, s3, &failed, &passed, &avg);
   printf("Passed = %d\tFailed = %d\tAvg= %d", passed, failed, avg);

   return 0;
}