#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        //��nums1��nums2�ź���
        //ÿ������һ��ָ����б�������ʱ 
//        int s1=nums1.size();
//        int s2=nums2.size();
//        int i1=0,i2=0;
//        vector<int> res;
//        
//        sort(nums1.begin(),nums1.end());
//        sort(nums2.begin(),nums2.end());
//        while(i1<s1&&i2<s2){
//            if(nums1[i1]==nums2[i2]){
//                res.push_back(nums1[i1]);
//                i1++;
//                i2++;
//                while(nums1[i1-1]==nums1[i1]&&i1<s1)
//                    i1++;//��֤����һ��
//                while(nums2[i2-1]==nums2[i2]&&i1<s1)
//                    i2++;
//            }
//            else if(nums1[i1]<nums2[i2]){
//                i1++;
//            }
//            else{
//                i2++;
//            }    
//    
//        }
//        return res;
	//��hash ��һ������������ŵ�hash�У��ڶ���������������hash����
	//��ѹ������У�����hash��ɾ���� 
	 	map<int,int> m;
        int s1=nums1.size();
        int s2=nums2.size();
        int i1=0,i2=0;
        vector<int> res;
        for(;i1<s1;i1++){
        	m[nums1[i1]]=1;
		}
		for(;i2<s2;i2++){
        	if(m[nums2[i2]]==1){
        		res.push_back(nums2[i2]);
        		m[nums2[i2]]--;
			}
		}
		return res;
}

int main(){
	int a1[4]={1,2,2,1};
	int a2[2]={2,2};
	vector<int> vec1(a1,a1+4);
	vector<int> vec2(a2,a2+2);
	vector<int> res;
	sort(vec1.begin(),vec1.end());
	res=intersection(vec1,vec2);
	vector<int>::iterator it; 
	for(it=res.begin();it!=res.end();it++)
	{
		cout<<*it<<" ";
	 } 
	return 0;
} 
