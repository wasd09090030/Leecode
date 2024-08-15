// ����ʽ��(y-y1)/(x-x1)=(y-y2)/(x-x2)�����ܻ���ֳ���0�����
//��˲��ý�����ˣ� ��y-y1��*��x-x2��=)(x-x1)*(y-y2)




#include<iostream>
#include <vector>


using namespace std;

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates)
    {
        if (coordinates.size() == 2) return true;
        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];
        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];
        for (int i = 2; i < coordinates.size(); i++)
        {
            int x = coordinates[i][0];
            int y = coordinates[i][1];
            if ((x - x1) * (y2 - y1) != (y - y1) * (x2 - x1))
                return false;
        }
        return true;
    }
};