//打印三角形图案
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int  n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			
//			for (j = 0; j <= i; j++)
//
//			{
//				printf("* ");
//			}
//				printf("\n");
//			
//		}
//	}
//	return 0;
//}
////BC59翻转直角三角形的图案
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int  n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = n; i>0; i--)
//		{
//			for (j =i ; j >0; j--)
//
//				printf("* ");
//			printf("\n");
//
//		}
//	}
//	return 0;
//}
//BC60打印带有空格的三角形图案
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//		int j = 0;
//		int  n = 0;
//		while (scanf("%d", &n) != EOF)
//		{
//			for (i = 0; i < n; i++)
//			{
//				for (j = 0; j < i - 1; j++);
//				{
//					printf(" ");
//				}
//				for (j = 0; j <= i; j++)
//				{
//					printf("* ");
//				}
//				
//				printf("\n");
//				
//			}
//		}
//	return 0;
//}
////BC61金字塔 翻转金字塔
////#include<stdio.h>
////int main()
////{
//	int i = 0;
//	int j = 0;
//	int  n = 0;
//	while(scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for(j = 0; j < n - i - 1; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= i; j++)
//
//			{
//				printf("* ");
//			}
//			printf("\n");
//
//		}
//	}
////	return 0;
////}
////BC63菱形图案=正金字塔+翻转金字塔
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int  n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n - i - 1; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= i; j++)
//
//			{
//				printf("* ");
//			}
//			printf("\n");
//
//		}
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <n-i-1; j++)
//
//			{
//				printf("* ");
//			}
//			printf("\n");
//
//		}
//
//	}
//	return 0;
//}
////BC64 k形图案 翻转直角三角形+直角三角形
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//		int j = 0;
//		int  n = 0;
//		while (scanf("%d", &n) != EOF)
//		{
//			for (i = n; i>0; i--)
//			{
//				for (j =i ; j >0; j--)
//	
//					printf("* ");
//				printf("\n");
//	
//			}
//			for (i = 1; i < n; i++)
//			{
//
//				for (j = 0; j <= i; j++)
//
//				{
//					printf("* ");
//				}
//				printf("\n");
//			}
//		}
//	return 0;
//}
//BC65箭图案
#include <stdio.h>
int main()
{

	return 0;
}