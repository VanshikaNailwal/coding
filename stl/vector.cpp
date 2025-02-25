
#include<iostream>
#include<vector>
using namespace std;

int main (){

 //vector

vector<int>a;
a.push_back(1);
a.push_back(2);

vector<int> b (5,10);  //vector b of size 5 initialised to 10

vector<int>c(b); //copying b to c
c.push_back(3);


cout<<c[5]<<endl;
cout<<c.back()<<endl;//last element of the vector

//Vectors can grow or shrink dynamically, unlike arrays.
// When a vector expands beyond its capacity, it allocates a new memory block and moves existing elements.
// A pointer to the old memory becomes invalid after reallocation!
//This issue does not happen with raw arrays because their memory never changes.
//Iterators are aware of vector changes and handle invalidation better than raw pointers.
//STL provides vec.begin(), vec.end(), which automatically update when the vector changes.


vector<int>::iterator it1 = c.begin();
cout<<*it1<<endl;

vector<int>::iterator it2 = b.begin();
cout<<&it1<<endl;   
cout<<&it2<<endl;  //different address;


//access vector
cout<<"values in vector c"<<endl;
for(auto it=c.begin(); it != c.end();it++){
 cout<<*it<<" ";
}
cout<<endl;

//delete
vector<int>d={1,2,3,4,5,6,7,8,9};
d.erase(d.begin(),d.begin()+3);

cout<<"values in vector d"<<endl;
for(auto it=d.begin(); it != d.end();it++){
 cout<<*it<<" ";
}
cout<<endl;

//insert
d.insert(d.begin(),10);
cout<<"values in vector d"<<endl;
for(auto it=d.begin(); it != d.end();it++){
 cout<<*it<<" ";
}
cout<<endl;

d.insert(d.begin()+2,30);
cout<<"values in vector d"<<endl;
for(auto it=d.begin(); it != d.end();it++){
 cout<<*it<<" ";
}
cout<<endl;

//size
cout<<"size of d"<<endl;
cout<<d.size()<<endl;

//swap
cout<<"swap"<<endl;
c.swap(d);
cout<<"values in vector c when swapped with d"<<endl;
for(auto it=c.begin(); it != c.end();it++){
 cout<<*it<<" ";
}
cout<<endl;

//copy
cout<<"copying"<<endl;
vector<int>copy;
copy.insert(copy.begin(),a.begin(),a.end());
cout<<"values in vector copy"<<endl;
for(auto it=copy.begin(); it != copy.end();it++){
 cout<<*it<<" ";
}
cout<<endl;

    return 0;
}

