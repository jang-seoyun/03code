<studio.h>

int main(void)
{
   double a, b;

   printf("분자를 입력하세요 : ");
   scanf("%lf", &a);

   printf("분모를 입력하세요 : ");
   scanf("%lf", &b);

   printf("나누기의 결과는 %f 입니다.\n", a/b);
    return 0;
}