#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int> a={2,2,4,5};
vector<int>b={2,2,2,4};
set<int>s1,s2;
vector<int>ans;
for(auto i : a){        // vector to set conversion
    s1.insert(i);
}
for(auto i : b){          // vector to set  conversion
    s2.insert(i);
}
for(auto i : s1){
    if(s2.find(i)!=s2.end()){      // if s2 is present in s1 set then add to ans vector
    ans.push_back(i);
    }
}

for(int i=0;i<ans.size();i++){          //printing the common element(excluded duplicates)
cout<<ans[i]<<" "<<endl;
}

// for intersection containng duplicates also

vector<int>c={2,2,3,4,5};
vector<int>d={2,2,4,6,8};
vector<int>ans1;
map<int,int>mp;

for(int i=0;i<c.size();i++){
    mp[c[i]]++;                          // numbers are store with their frequency in map
}

for(int i=0;i<d.size();i++){
    auto it=mp.find(d[i]);           // it is the iterator in map we need iterator to iterate in array
    if(it!=mp.end() && it->second>0){         // base case 
        ans1.push_back(d[i]);
        it->second--;
    }
}

for(int i=0;i<ans1.size();i++){        //printing common element including the duplicates
cout<<ans1[i]<<" ";
}

}