
#include <bits/stdc++.h>
using namespace std;
bool fun(pair<int, int>p1,pair<int,int>p2)
{


// int main() {
// 	// your code goes here
// 	int n,N;
// 	cin>>n;
	
// 		map<long long,long long> myMap;

// 	for(int i=0; i<n; i++){
// 	    cin>>N;
// 	    myMap[N]=N*N;
// 	}
// 	for(auto nitish:myMap){
// 	    cout<<nitish.first<<endl;
// 	    cout<<nitish.second<<endl;
// 	}
	
// }
	
	
	
// int main(){
//     int n,N;
//     cin>>n;
//     map<int,int>myMap;
//     for(int i=0; i<n; i++){
//         cin>>N;
//         myMap[N]+=1;
//     }
//     int unique=0,non_unique=0;
//     for(auto nitish:myMap)
//     {
//         if(nitish.second==1)
//         unique++;
//         else
//         non_unique++;
//     }
//     cout<<unique*non_unique;
// }

if(p1.second!=p2.second)
{
    return p1.second<p2.second;
}
return p1.first>p2.first;
}

int main(){
    int n,N;
    cin>>n;
    map<int, int>myMap;
    for(int i=0; i<n; i++)
    {
        cin>>N;
        myMap[N]+=1;
    }
    for(auto num:myMap)
    {
        cout<<num.first<<" - "<<num.second<<endl;
    }
    vector<pair<int,int>>vec(myMap.begin(),myMap.end());
    sort(vec.begin(),vec.end(),fun);
    for(auto y:vec)
    {
        cout<<y.first;
    }
    
}











//write a program to find the name of the daughter and son of a family. The name of the daughter is the name which is repeated least number of times and the name of the son is the name which is repeated maximum number of times. If there are multiple names with same frequency, then print the lexicographically smaller name.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	string name;
	map<string ,int>myMap1;
	for(int i=0;i<n; i++)
	{
	    cin>>name;
	    myMap1[name]++;
	}
	string daughter,son;
	auto it =myMap1.begin();
	daughter = son=it->first;
	for(auto pair:myMap1)
	{
	    if(pair.second<myMap1[daughter]){
	    daughter=pair.first;
	    }
	    if(pair.second>myMap1[son]){
	    son=pair.first;
	}
}
cout<<daughter<<" "<<son;
}








