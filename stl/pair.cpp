#include<iostream>
using namespace std;

int main(){

//PAIR

pair<int,int> a = {1,2};
cout<<a.first<<endl;

// nested pairs
pair<int,pair<char,int>> b = {1,{'a',3}};
cout<<b.second.first<<endl;

//array of pairs
pair<int,int>c[]={{1,2},{3,4}};
cout<<c[1].second<<endl;









    return 0;
}