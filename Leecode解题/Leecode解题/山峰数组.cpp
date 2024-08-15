#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        return binarysearch(0, arr.size() - 1, arr);
    }

    int binarysearch(int left, int right, vector<int>& arr) {
        int mid = (left + right) / 2;

        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
            return mid;
        }

        if (arr[mid] < arr[mid - 1]) {
            return binarysearch(left, mid - 1, arr);  // ʹ�� left ���� 0
        }

        if (arr[mid] < arr[mid + 1]) {
            return binarysearch(mid + 1, right, arr);  // ʹ�� right ���� arr.size() - 1
        }

        return -1;  // ���һ��Ĭ�Ϸ���ֵ��ȷ������·�����з���
    }
};

int main() {
    vector<int> num1 = { 3, 4, 5, 1 };
    Solution ss;
    int x = ss.peakIndexInMountainArray(num1);
    cout << x;  // Ӧ����� 2
}