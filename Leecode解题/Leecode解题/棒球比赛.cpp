/*��������һ�������������ư�������ļ�¼Ա���ⳡ���������ɻغ���ɣ���ȥ���غϵĵ÷ֿ��ܻ�Ӱ���Ժ󼸻غϵĵ÷֡�

������ʼʱ����¼�ǿհ׵ġ����õ�һ����¼�������ַ����б� ops������ ops[i] ������Ҫ��¼�ĵ� i �������ops ��ѭ��������

���� x - ��ʾ���غ��»�÷��� x
"+" - ��ʾ���غ��»�õĵ÷���ǰ���ε÷ֵ��ܺ͡���Ŀ���ݱ�֤��¼�˲���ʱǰ�����Ǵ���������Ч�ķ�����
"D" - ��ʾ���غ��»�õĵ÷���ǰһ�ε÷ֵ���������Ŀ���ݱ�֤��¼�˲���ʱǰ�����Ǵ���һ����Ч�ķ�����
"C" - ��ʾǰһ�ε÷���Ч������Ӽ�¼���Ƴ�����Ŀ���ݱ�֤��¼�˲���ʱǰ�����Ǵ���һ����Ч�ķ�����
���㷵�ؼ�¼�����е÷ֵ��ܺ͡�*/

#include<iostream>
#include<vector>
#include <string>
#include <numeric>
using namespace std;




//��ջ���������
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> st;

        //���ȱ�������
        for (const auto& s : operations) {
            if (s == "+") {
                st.push_back(st[st.size() - 1] + st[st.size() - 2]);
            }
            else if (s == "D") {
                st.push_back(st.back() * 2);
            }
            else if (s == "C") {
                st.pop_back();
            }
            else {
                //����������ַ�������ת��Ϊ���֣�stoi�� n ���Ƶ��ַ���ת��Ϊʮ����
                st.push_back(stoi(s));
            }
        }
        return accumulate(st.begin(), st.end(), 0);
    }
};