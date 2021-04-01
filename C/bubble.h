#pragma once

vector<int> bubble(vector<int>& arr)
{
	::cout << "버블 정렬 시작." << endl;
	int temp = 0;
	while (true)
	{
		int err = 0;
		for (unsigned int i = 0; i < arr.size() - 1; i++)
		{
			if (arr[i] < arr[i + 1])
				continue;

			else if (arr[i] > arr[i + 1])
			{
				err += 1;
				SWAP(arr[i], arr[i + 1]);
			}
		}
		temp += 1;
		::cout << "                  \r오류 수:" << err << "개.";
		if (err == 0)
		{
			::cout << endl;
			break;
		}
	}
	::cout << "버블 정렬 완료." << endl;
	return arr;
}
