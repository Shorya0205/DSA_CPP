// STL
#include<bits/stdc++.h>
using namespace std;

void explain_pairs(){
    pair<int,int> p={1,3};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,int>> p1={1,{3,4}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[1].second<<endl;
}

void explain_vectors(){
    vector<int> v(9,100);
    v.push_back(1);
    v.emplace_back(2);
    v.push_back(3);
    v.emplace_back(4);
    v.pop_back();

    cout<<v.size()<<endl;
    cout<<v[3]<<endl;

    vector <pair <int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);

    vector <int> v2(5,100); // 5 elements, each of value 100
    vector <int> v3(5); // 5 elements, each of value 0
    vector <int> v4(v3); // copy of v3

    for (auto it =v.begin(); it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    for (auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;

    //ERASE
    v.erase(v.begin()+1);
    v.erase(v.begin()+2,v.begin()+4);
    for (auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;

    //INSERT
    v.insert(v.begin()+1,100);
    v.insert(v.begin()+2,2,1000);
    v.insert(v.begin()+4,v2.begin(),v2.end());

    for (auto it : v){
        cout<<it<<" ";
    }

    cout<<endl;
    //swap v1.swap(v2);
    //clear v.clear();
}

void explain_lists(){
    list<int> ls;
    ls.push_back(1);
    ls.emplace_back(2);
    ls.push_front(3);
    ls.emplace_front(4);
    cout<<ls.size()<<endl;
    for (auto it:ls){
        cout<<it<<" ";
    }
    cout<<endl;

    ls.erase(ls.begin());
    ls.remove(2);

    for (auto it:ls){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<ls.size()<<endl;
}

void explain_stacks(){
    stack <string> s;
    s.push("abc");
    s.push("bcd");
    s.push("cde");

    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;

    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
}

void explain_queues(){
    queue <string> q;
    q.push("abc");
    q.push("bcd");
    q.push("cde");
    
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;

    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
}

void explain_priority_queues(){
    priority_queue <int> pq; //max heap
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(10);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    priority_queue <int, vector<int>, greater<int>> minheap; //min heap
    minheap.push(5);
    minheap.push(2);
    minheap.push(8);
    minheap.push(10);

    cout<<minheap.top()<<endl;
    minheap.pop();
    cout<<minheap.top()<<endl;
}

void explain_set(){
    set <int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(3);

    for (auto it:s){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<s.size()<<endl;

    s.erase(s.begin());
    for (auto it:s){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<s.count(1)<<endl;
    cout<<s.count(4)<<endl;

    auto it=s.find(2);
    if (it!=s.end()){
        cout<<"Found "<<*it<<endl;
    }
    else {
        cout<<"Not Found"<<endl;
    }

    auto it2=s.lower_bound(2);
    auto it3=s.upper_bound(2);
    cout<<*it2<<" "<<*it3<<endl;
}

void explain_multi_maps(){
    multiset <int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);

    for (auto it:ms){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<ms.count(1)<<endl;

    ms.erase(2); //erases all occurrences of 2
    for (auto it:ms){
        cout<<it<<" ";
    }
    cout<<endl;

    ms.erase(ms.find(1)); //erases only one occurrence of 1
    for (auto it:ms){
        cout<<it<<" ";
    }
    cout<<endl;
}

void explain_maps(){
    map <int, string> m;
    m.insert({1,"abc"});
    m[1] = "abc";
    m[2] = "bcd";
    m[3] = "cde";

    for (auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<m.size()<<endl;

    m.erase(2);
    for (auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<m.count(1)<<endl;
    cout<<m.count(4)<<endl;

    auto it=m.find(2);
    if (it!=m.end()){
        cout<<"Found "<<it->first<<" "<<it->second<<endl;
    }
    else {
        cout<<"Not Found"<<endl;
    }

    auto it2=m.lower_bound(2);
    auto it3=m.upper_bound(2);
    cout<<it2->first<<" "<<it3->first<<endl;
}

int main() {

  //  explain_pairs();
  //  explain_vectors();
  //  explain_lists();
  //  explain_stacks();
  //  explain_queues();
  //  explain_priority_queues();
  //  explain_set();
  //  explain_multi_maps();
  //  explain_maps();
  
    return 0;
}