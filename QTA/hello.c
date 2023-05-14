#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include<windows.h>
#include<time.h>
#include<math.h>
#include "add.h"
struct Book{
    char name[20];
    short price;
};
int my_strlen(char* str)
{
   if(*str != '\0')
   {
    return 1 + my_strlen(1+str);
   }
   else
   {
    return 0;
   }

}
void Bubble_sort(int arr[],int sz)
{
  int i = 0;
  int flag = 1; //假设不用排序
  for(i=0;i<sz - 1;i++)
  {
    int j = 0;

    for(j=0;j<sz-1-i;j++)
    { 
      if(arr[j]>arr[j+1])
      {
       int tmp = 0;
       tmp = arr[j];
       arr[j] = arr[j+1];
       arr[j+1] = tmp;
       flag = 0;
      }
    }
    if(flag == 1)
    {
      break;
    }
  }
}
// int binary_search(int arr[],int k,int sz)
// {
//     int left = 0;
//     int right = sz - 1;
//     while(left<=right)
//     { 
//       int mid = (left + right)/2;
//       if(arr[mid]>k)
//       {
//          right = mid - 1;
//       }
//       else if(arr[mid]<k)
//       {
//          left = mid + 1;
//       }
//       else
//       {
//         return mid;
//       }
//     }
//     return -1;
// }
// int is_prime(int a)
// { int n = 0;
//   for(n=2;n<a;n++)
//   {
//     if(a%n==0)
//     {
//       return 0;
//     }
    
//   }
//   return 1;

// }
// void Swap(int* pa,int* pb)
// {
//   int tmp = 0;
//   tmp = *pa;
//   *pa = *pb;
//   *pb = tmp;
// }
// #define MAX(X,Y) (X>Y?X:Y) //宏的定义
// enum Sex{                        //枚举常量 每个都有值 分别是0,1,2
//     MALE,
//     FEMALE,
//     SECRET
// };
// int Add(int x,int y){
//     int z = x + y;
//     return z;
// }
// void test()
// { 
//   static int a = 1;           //static修饰局部变量，使局部变量生命周期变长
//   a++;
//   printf("a = %d\n",a); 
// }
// void menu()
// { 
//   printf("##################\n");
//   printf("###1.paly 2.exit##\n");
//   printf("##################\n");
// }
// void game()
// { 
//    int ret = 0;
//    int guess = 0;
//    ret = 1 + rand()%100;
//    printf("已生成1-100的随机数,猜测生成了多少\n");
//    while(1)
//    {
//    printf("猜测的数字为>");
//    scanf("%d",&guess);
//    if(guess>ret)
//    {
//     printf("猜大了\n");
//    }
//    else if(guess<ret)
//    {
//     printf("猜小了\n");
//    }
//    else
//    {
//     printf("猜对了\n");
//     break;
//    }
//    }
// }
int main()
{ 
  
  int arr[] = {6,8,9,10,5,4,2,1,3};         //数组名代表数组的首地址 两个例外 sizeof(数组名)代表的是数组所占空间大小。&数组名，取出的是整个数组的地址
  int* p = arr;
  int sz = sizeof(arr)/sizeof(arr[0]);
  Bubble_sort(arr,sz);
  for(int i = 0;i<sz;i++)
  {
   printf("%d ",arr[i]);
  }
 
  printf("%p\n",&arr[0]);
  printf("%p\n",&arr[0]+1);

  printf("%p\n",arr);
  printf("%p\n",arr+1);

  printf("%p\n",&arr);
  printf("%p\n",&arr+1);        //整个数组的地址
}

//  {  char arr1[] = "abc";
// char arr2[] ={'a','b','c'};
// printf("%s\n",arr1);
// printf("%s\n",arr2);
// printf("%d\n",strlen(arr1));
// printf("%d\n",strlen(arr2));
// return 0;
  // char arr[]="bit";
  // int len = my_strlen(arr);
  // printf("%d",len);
  // return 0;
  // int a = 10;
  // int b = 20;
  // int sum = Add(a,b);
  // printf("%d",sum);
  // return 0;
  // int sum = 0;
  // Add(&sum);
  // printf("%d\n",sum);
  // Add(&sum);
  // printf("%d\n",sum);
  // Add(&sum);
  // printf("%d\n",sum);
  // int arr[]={1,2,3,4,5,6,7,8,9,10};
  // int sz = sizeof(arr)/sizeof(arr[0]);
  // int k = 7;
  // int ret = binary_search(arr,k,sz);
  // if(ret == -1)
  // {
  //   printf("没找到\n");
  // }
  // else
  // {
  //   printf("下标是%d\n",ret);
  // }
  //  int i = 0;
  //  for(i=100;i<=200;i++)
  //  {
  //   if(is_prime(i)==1)
  //   {
  //      printf("%d ",i);
  //   }
  //  }

  // int a = 10,b = 20;
  // Swap(&a,&b);
  // printf("a=%d,b=%d",a,b);

//   char input[20] = {0};
//   system("shutdown -s -t 60");
// again:  
//   printf("请输入win>");
//   scanf("%s",input);
//   if(strcmp(input,"win")==0)
//   {
//     system("shutdown -a");
//   }
//   else{
//     goto again;
//   }
//   srand((unsigned)time(NULL));
//   int input = 0;
//   do{
//     menu();
//     printf("请输入数字>");
//     scanf("%d",&input);
//     switch (input)
//     {
//     case 1:
//       game();
//       break;
//     case 0:
//       printf("退出游戏\n");
//       break;
//     default:
//       printf("选择错误\n");
//       break;
//     }
//   }while(input);
  // srand((unsigned)time(NULL));
  // for(int i = 1;i<=10;i++)
  // { 
  //   int ret = 0;
    
  //   ret = rand()%100+1;
  //   printf("%d\n",ret);

  

  // int i = 0;
  // for(i=1;i<=9;i++)
  // {
  //   int j = 0;
  //   for(j=1;j<=i;j++)
  //   {
  //     printf("%d*%d = %-2d ",i,j,i*j);
  //   }
  //   printf("\n");
  // }
  // double sum = 0.0;
  // int flag = 1;
  // for(i=1;i<=100;i++)
  // {
  //   sum += flag*1.0/i;
  //   flag = -flag;
  // }
  // printf("%lf\n",sum);
  // for(i=100;i<=200;i++)
  // {
  //   int a = 0;
  //   for(a=2;a<i;a++)
  //   {
  //     if(i%a==0)
  //     {
  //       break;
  //     }
  //   }
  //   if(i==a)
  //   {
  //     printf("%d ",i);
  //   }
  // }
  // int a = 0,b = 0,c = 0;
  // scanf("%d%d%d",&a,&b,&c);
  // if(a<b)
  // {
  //   int tmp = a;
  //   a = b;
  //   b = tmp;
  // }
  // if(a<c)
  // {
  //   int tmp = a;
  //   a = c;
  //   c = tmp;
  // }
  // if(b<c)
  // {
  //   int tmp = b;
  //   b = c;
  //   c = tmp;
  // }
  // printf("%d %d %d",a,b,c);
  
  // char arr1[] = "welcome to hhtc !!!!!!!";
  // char arr2[] = "#######################";
  // int left = 0;
  // int right = strlen(arr1) - 1;
  // while (left<=right)
  // {
  // arr2[left] = arr1[left];
  // arr2[right] = arr1[right];
  // left++;
  // right--;
  // Sleep(500);
  // system("cls");
  // printf("%s\n",arr2);
  // }
//  int arr[]={2,3,4,5,6,8,10,11,12};
//  int sz = sizeof(arr)/sizeof(arr[0]);
//  int left = 0;
//  int right = sz - 1;
//  int k = 7;
//  while(left<=right)
//  {
//  int mid = (left + right)/2;
//  if(arr[mid]<k)
//  {
//    left = mid + 1;
//  }
//  else if(arr[mid]>k)
//  {
//    right = mid - 1;
//  }
//  else
//  {
//    printf("找到了下标是%d\n",mid);
//    break;
//  }
//  }
//  if (left>right)
//  {
//    printf("没有找到\n");
//  }
 
//  int ch = 0;
//  char password[20] = {0};
//  int ret = 0;
//  printf("请输入密码>");
//  scanf("%s",password);
//  while ((ch = getchar()) != '\n')
//  {
//     ;
//  }
//  printf("请确认输入Y/N");
//  ret = getchar();
//  if(ret == 'Y')
//  {
//     printf("win");
//  }
//  else
//  {
//     printf("defeat");
//  }
//  printf("%s",password);
 
     
// struct Book b1 = {"我我我",55};
// printf("书名是%s\n",b1.name);
// printf("价格是%d\n",b1.price);
// struct Book* pb = &b1;
// printf("%s\n",pb->name);
//  int a = 10,b = 5,max = 0;
//  int *p = &a;    //取地址  //int* 有一种变量用来存放地址的-指针变量
//  printf("%p\n",p);
//  printf("%p\n",&a);
//  printf("%d\n",sizeof(p));

//  extern int g_val;
//  printf("%d\n",g_val);
// int i = 0;
// while (i<5)
// {
//   test();
//   i++;
//const int num = 5; //const-常属性 const修饰的常变量 让num不能变化，本质上还是变量，该用常量的地方还是得用常量
//  printf("%d\n",num);
//  enum Sex sex = MALE;
//  printf("%d\n",MALE);
//  printf("%d\n",FEMALE);
//  printf("%d\n",SECRET);
// int a = 10,b = 20,sum = 0;
// sum = Add(a,b);
// printf("%d",sum);
