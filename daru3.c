#include<stdio.h>
#include<math.h>
int main()
{
  //剩下三个题
  int x = 0;
  printf("请输入一个非负整数！\n");
  scanf("%d",&x);
  //尴尬的是，写法好像不需要循环,
  //不过嘛，两种都写上也行
  double r = sqrt(x);
  printf("你所输入数的算术平方根 = %f\n",r);
  int c = (int)r;//格式记住！这里是强制转换，为什么呢？因为有括号，括号里面填的就是要转换成的目标类型
  printf("保留了整数，则为%d\n",c);
  int b;
  while((b+1)*(b+1) <= x)
  {
    b++;
  }
  printf("这是第二种方法求出来的。保留整数部分为%d\n",b);
  //ちなみに、一定得写b+1,否则，如果用的就是b*b，他会多走一步，保留的整数部分有时是会有偏差的！

  int num2 = 0;
  printf("这是用来判断是否为回文数的,来!输入一个整数\n");
  scanf("%d",&num2);
  int d = 0;
  int g = 0;
  int s = num2;//这里是为了储存
  while(num2 != 0)
  {
    g = num2 % 10;
    num2 = num2 / 10;//像a++,其完整写是a = a + 1
    d = d * 10 + g;
  }
  if(d == s)//这里判断等的右边千万千万不要写num2!因为在上面循环中，num2已经被榨干成零了
  {
    printf("还真是回文数\n");
  }
  else
  {
    printf("笨蛋。这可不是回文数\n");
  }

  //有点挑战性哈,接下来这个是不使用乘法、除法和取余运算,但是要得到商和余数
  //除法的本质其实是减法
  int divident = 0,divisor = 0;
  printf("请输入被除数和除数,两个数之间以空格隔开\n");
  scanf("%d %d",&divident,&divisor);
  int y =0;
  
  while(divident - divisor >= 0)
  {
    divident = divident - divisor;
    y++;
    
  }
  printf("商为%d,余数为%d\n",y,divident);
  

  return 0;
}

