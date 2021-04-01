#pragma once
vector<int> quick(vector<int>& arr, int left, int right)
{
	int r = right, l = left;
	int pivot = arr[(right + left) / 2];

    while (l < r)
    {
        
        while (arr[l] < pivot) 
            l++;
        while (arr[r] > pivot) 
            r--;

        if (l <= r)
        {
            if (l < r)
            {      
                SWAP(arr[l], arr[r]);
            }         
            l++; r--;
        }
    }

    if (left < r)
        quick(arr, left, r);

    if (right > l)
        quick(arr, l, right);

	return arr;
}
