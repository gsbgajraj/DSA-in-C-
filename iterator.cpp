#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &v)
{
  for(int i=0;i<v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
}

int main(){
    vector<int> vec1;
    vector<int> :: iterator iter= vec1.begin();
    int element,size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter the element to add";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    vec1.insert(iter+1,566)
    display(vec1);
    return 0;

}