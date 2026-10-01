#include<stdio.h>

int main()
{
  //do...while来了！
  int i = 101;
  do
  {
    printf("你无敌了，这也能输出？%d\n",i);
    i++;
  } while (i <= 100);
  //这玩意儿实际上基本用不到,这是先执行再判断




  return 0;
}
