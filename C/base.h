#pragma once
#define Max_Len 100000
#define SWAP(x, y) {int temp; temp = x; x = y; y = temp;}

using namespace std;

string format(string st, string i)
{
	st = st.replace(st.find("{}"), 2,i);

	return st;
}

vector<vector<int>> rand_cls()
{
	vector<vector<int>> data;
	string data_local = "data\\{}.txt";
	int err = 0;
		
	::cout << "랜덤 데이터 설정." << endl;
	::cout << "전체 데이터 " <<  Max_Len << "개." << endl;
	::cout << "전체 데이터 10개." << endl;

	for (int i = 1; i < 11; i++)
	{
		string name = format(data_local, to_string(i));
		vector<char> writable(name.begin(), name.end());
		writable.push_back('\0');
		char* loacal = &writable[0];
		//cout << loacal << endl;
		
		ifstream readFile(loacal, ios::in);

		if (readFile.is_open())
		{	
			vector <int> nums;
			while (!readFile.eof())
			{
				string str;
				getline(readFile, str);
				nums.push_back(stoi(str));
			}
			::cout << i << "번째 데이터 설정완료." << endl;
			data.push_back(nums);
			readFile.close();    //파일 닫아줍니다.
		}
	}

	::cout << "\n랜덤 데이터 설정완료.\n" << endl;

	return data;
}

