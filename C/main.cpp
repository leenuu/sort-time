#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>
#include <vector>
#include <random> 
#include <fstream>

#include "base.h"
#include "bubble.h"
#include "quick.h"


int main()
{
	vector <vector<int>> random_list, result_list;
	clock_t start, end;
	float result_t, sum_bubble_t = 0, sum_quick_t = 0;
	
	
	random_list = rand_cls();

	/*
	for (int i = 0; i < 10; i++)
	{
		start = clock();
		result_list.push_back(bubble(random_list[i]));
		end = clock();
		result_t = (float)(end - start) / CLOCKS_PER_SEC;
		sum_bubble_t += result_t;
		::cout << i + 1 << "번째 데이터 " <<result_t << "초" << endl;
	}
	
	random_list = rand_cls();
	*/
	for (int i = 0; i < 10; i++)
	{
		start = clock();
		result_list.push_back(quick(random_list[i], 0 ,Max_Len-1));
		end = clock();
		result_t = (float)(end - start) / CLOCKS_PER_SEC;
		sum_quick_t += result_t;
		::cout << i + 1 << "번째 데이터 " << result_t << "초" << endl;
	}

	::cout << "버블 정렬 평균" << sum_bubble_t / 10 << "초" << endl;
	::cout << "퀵 정렬 평균" << sum_quick_t /10 << "초" << endl;
	
}
