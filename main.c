#include <stdio.h>
void switchvalue();
void max3numbers();
void maxNnumbers();
void sum1toN();
void Nnumbers();
void averagescore();
void product1toN();
void ndigits();
void sumdigits();
void nbackwards();
void DNG();
void DFIN();
void count1s();
void primenumber();
void dividers();
void primediv();
void Ndev3();
void max3();
void Evendigits();
void main()
{
  int op;
  printf(" 1. Да се разменят стойностите на две променливи.\n");
  printf(" 2. Да се намери макс от 3 числа.\n");
  printf(" 3. Да се намери макс от n числа.\n");
  printf(" 4. Да се намери сумата на естествените числа от 1 до n.\n");
  printf(" 5. Да се намери сумата на n произволни числа.\n");
  printf(" 6. Да се намери средният успех на учениците от един клас.\n");
  printf(" 7. Да се намери произведението на числата от 1 до n.\n");
  printf(" 8. Да се намери броят на цифрите на числото n.\n");
  printf(" 9. Да се намери сумата от цифрите на числото n.\n");
  printf("10. Да се получи числото m записано с цифрите на n в обратен ред.\n");
  printf("11. Да се намери колко пъти дадена цифра се среща в записа на n.\n");
  printf("12. Да се намери дали дадена цифра се среща в n.\n");
  printf("13. Да се определи броят на единиците в двоичното представяне на дадено естествено число.\n");
  printf("14. Да се определи дали дадено естествено число е просто или не.\n");
  printf("15. Да се изведат всички делители на естественото число n и техният брой.\n");
  printf("16. Да се изведат всички прости делители на естественото число n и техният брой.\n");
  printf("17 .Да се намери сумата на n числа, но само тези, които се делят на 3.\n");
  printf("18. Да се намери max от n числа, но само тези, които се делят на 3.\n");
  printf("19. Да се получи м съдържащо само четните цифри на n.\n");
  scanf("%d",&op);
  switch (op)
    {
      case 1: switchvalue(); break;
      case 2: max3numbers(); break;
      case 3: maxNnumbers(); break;
      case 4: sum1toN(); break;
      case 5: Nnumbers(); break;
      case 6: averagescore(); break;
      case 7: product1toN(); break;
      case 8: ndigits(); break;
      case 9: sumdigits(); break;
      case 10: nbackwards(); break;
      case 11: DNG(); break;
      case 12: DFIN(); break;
      case 13: count1s(); break;
      case 14:  primenumber(); break;
      case 15: dividers(); break;
      case 16: primediv(); break;
      case 17: Ndev3(); break;
      case 18: max3(); break;
      case 19: Evendigits(); break;
      
    }
  
}
void switchvalue()
{
    int a;
    printf("a=");
    scanf("%d",&a);
    printf("\n");
    int b;
    printf("b=");
    scanf("%d",&b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("a=%d",a);
    printf("\nb=%d",b);
}

void max3numbers(){
  int a,b,c,max;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    max=a;
    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }
    printf("max is %d",max);
}
void maxNnumbers()
{
 int n,a,i,max;
    do
    {
        printf("n=");
        scanf("%d",&n);
    }
    while(n<1);
    printf("a=");
    scanf("%d",&a);
    max=a;
    i=1;
    while(i<n)
    {
        printf("a=");
        scanf("%d",&a);
        if(a>max)
        {
            max=a;
        }
        i=i+1;
    }
    printf("max is %d",max);
}
void sum1toN()
{
 int n,i,s;
    do{
        printf("n=");
        scanf("%d",&n);
    }while(n<1);
    s=0;
    i=1;
    while(i<=n)
    {
        s=s+i;
        i++;
    }
    printf("sum=%d",s);
}
void Nnumbers()
{
    int n,i,s,a;
    do
    {
        printf("n=");
        scanf("%d",&n);
    }
    while(n<1);
    i=0;
    s=0;
    do
    {
        printf("a=");
        scanf("%d",&a);
        i=i+1;
        s=s+a;
    }
    while(i<n);
    printf("the sum of the numbers is %d",s);

}
void averagescore()
{int i,n,g;
  float s,a;
    do
    {
        printf("n=");
        scanf("%d",&n);
    }
    while(n<1);
    i=0;
    s=0;
    do
    {
        do
        {
            printf("g=");
            scanf("%d",&g);
        }
        while(g<2||g>6);
        i=i+1;
        s=s+g;
    }
    while(i<n);
    a=((s*0.1)*10)/n;
      printf("the average score is %2.f",a);
}
void product1toN()
{
 int n,i,f;
    do
    {
        printf("n=");
        scanf("%d",&n);
    }
    while(n<1);
    i=1;
    f=1;
    while(i<n)
    {
        i++;
        f=f*i;
    }
    printf("%d! is %d",n,f);
}
void ndigits()
{
  int n,i=0,c;
    printf("n=");
    scanf("%d",&n);
    c=n;
    do
    {
        n=n/10;
        i=i+1;
    }
    while(n>0);
    printf("the number %d have %d digits",c,i);
}
void sumdigits()
{
  int n,c,sum=0,i;
    printf("n=");
    scanf("%d",&n);
    c=n;
    do
    {
        i=n%10;
        sum=sum+i;
        n=n/10;
    }
    while(n>0);
    printf("the sum of the numbers of %d is %d",c,sum);
}
void nbackwards()
{
  int n,m=0;
  printf("n=");
  scanf("%d",&n);
  do{
    m=m*10+n%10;
    n=n/10;
  }while(n!=0);
  printf("m=%d",m);
}
void DNG()
{
  int n,k,i=0;
        printf("n=");
        scanf("%d",&n);
        do
        {
            printf("k=");
            scanf("%d",&k);
        }
        while(k<0||k>9);
        while(n>0)
        {
            if(n%10==k)
            {
                i=i+1;
            }
            n=n/10;
        }
        printf("Digit %d occures %d time", k, i);

}
void DFIN()
  {
        int n,d,c;
        printf("n=");
        scanf("%d",&n);
        do
        {
            printf("d=");
            scanf("%d",&d);
        }
        while(d<0||d>9);
        c=n;
        while(n!=0)
        {
            if (n%10==d)
            {
                break;
            }
            n=n/10;
        }

        if(n==0)
        {
            printf("the number %d does not contains %d",n,d);
        }
        else
        {
            printf("The number %d contains %d",c,d);
        }
}
void count1s()
{
        int n,i=0,b=0,c;
        printf("n=");
        scanf("%d",&n);
        c=n;
        while(n>0)
        {
            b=n%2;
            i=i+b;
            n=n/2;
        }
        printf("the count of ones in the binary version of  %d is %d",c,i);
    }
void primenumber()
{
    int n,k;
    n = 0;
    while(n<1)
    {
        printf("n=");
        scanf("%d",&n);
    };
    k=2;
    while(n%k!=0)
    {
        k=k+1;
    }


    if(n==k)
    {
      printf("%d is prime number",n);
    }
    else
    {
      printf("%d is not prime number",n);
    }

}
void dividers()
{
    int n,d,i;
    do
    {
        printf("n=");
        scanf("%d",&n);
    }
    while(n<1);
    i=0;
    d=1;
    do
    {
        if(n%d==0)
        {
            printf("%d is divider\n",d);
            i++;
        }
        d++;
    }
    while(n>=d);
 
}
void primediv()
{
    int n,k,i,c;
    do
    {
        printf("n=");
        scanf("%d",&n);
    }
    while(n<=1);
    i=0;
    k=2;

    while(n>=k)
    {
        if(n%k==0)
        {
            c=2;
            while(k%c!=0)
            {
                c++;
            }
            if(k==c)
            {
                printf("%d is prime devider of %d\n",k,n);
                i++;
            }

        }
        k++;
    }

    printf("\nthe total prime dividers of %d is %d",n,i);
}
void Ndev3()
{
int n,a,s,i;
    do
    {
        printf("n=");
        scanf("%d",&n);
    }
    while(n<1);
    i=0;
    s=0;
    do
    {
        printf("a=");
        scanf("%d",&a);
        if(a%3==0)
        {
            s=s+a;
        }
        i++;
    }
    while(i<n);
    printf("the sum is %d",s);
}
void max3()
{
    int n,max,a,i;
    max = 1;
    do
    {
        printf("n=");
        scanf("%d",&n);
    }
    while(n<1);
    i=0;
    do
    {
        printf("a=");
        scanf("%d",&a);
        if(a%3==0)
        {
            if(a>max|| max==1)
            {
                max=a;
            }

        }
        i++;
    }
    while(i<n);
    if(max==1)
    {
        printf("there is no max");
    }
    else
    {
        printf("max is  %d",max);
    }

}
void Evendigits()
{
    int n,m,b;
    printf("n=");
    scanf("%d",&n);
    b=1;
    do{
        if(n%2==0){
        m=m+(n%10)*b;
        b=b*10;}
        n=n/10;
    }while (n>0);
    printf("m=%d",m);
}