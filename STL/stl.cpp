/***********   *****     ********   ||   ********  **   ** ******** ******* *******   ||   ********      *****      ****     ****
 ***********  *******     ******    ||   **        **   ** **    ** **      **        ||   **    **     *******     ** **   ** **
       ***    **   **       **      ||   **        **   ** **   **  **      **        ||   **   **      **   **     **  ** **  **
       ***    **   **       **      ||   ********  ******* ******   ******  ******    ||   ******       **   **     **   ***   **
      ***    *********      **      ||         **  **   ** **  **   **      **        ||   **  **      *********    **    *    **
  *  ***    **       **   ******    ||         **  **   ** **   **  **      **        ||   **   **    **       **   **         **
   ****    **         ** ********   ||   ********  **   ** **    ** ******* *******   ||   **    **  **         **  **         **/
//--------------------------------------------------------------------------------------------------------------------

#include<bits/stdc++.h>
#include<set>
#include<map>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);
#define arrin int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
#define vecin vector<int>v;for(int i=0;i<n;i++){int x;cin>>x;v.push_back(x);}
#define vi vector<int>
#define vll vector<long long>


// void explainPairs(){
//     pair<int,int>p1={1,3};
//     cout<<p1.first<<" "<<p1.second<<endl;
//     pair<int,pair<int,int>>p2={1,{2,3}};
//     cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;
//     pair<int,int> arr[] = {{1,2}, {3,4},{5,6}};
//     cout<<arr[1].second<<endl;
// }

// void explainVectors(){
//     vi v;    
//     v.push_back(1);
//     v.emplace_back(2);

//     vector<pair<int,int>>vec;
//     vec.push_back({1,2});
//     vec.emplace_back(1,2);

//     vi v1(10,100);
//     vi v2(5);
//     vi v3(v1);

    

//     vector<int>:: iterator it = v.end();
//     // vector<int>:: iterator it = v1.rend();
//     // vector<int>:: iterator it = v1.rbegin();


//     // for(auto it=v2.begin();it!=v2.end();it++){
//     //     cout<<*it<<" ";
//     // }
//     // for(auto it:v2){
//     //     cout<<it<<" ";
//     // }


//     v1.erase(v1.begin()+1);
//     for(auto it:v1){
//         cout<<it<<" ";
//     }


//     //ERASE FXN.
//     cout<<endl;
//     v1.erase(v1.begin()+1, v1.begin()+3);
//     for(auto it:v1){
//         cout<<it<<" ";
//     }

//     //INSERT FXN.

//     v1.insert(v1.begin(), 300);
//     v1.insert(v1.begin()+2, 3, 50);

//     //not much required
//     vector<int> copy{2,5};
//     v1.insert(v1.begin()+4, copy.begin(), copy.end());

//     cout<<v1.size();

//     v1.pop_back();
    
//     v1.swap(v2);

//     v.clear();             //erases the entire vector

//     cout<<v1.empty();      //returns true or false

//     cout<<endl;
// }

// void explainLists(){
//     list<int>ls;
//     ls.push_back(2);
//     ls.emplace_back(4);
//     ls.push_front(1);
//     ls.emplace_front(0);
//     for(auto it:ls)
//         cout<<it<<" ";
//     cout<<endl;
// }


// void explainDeque(){
//     deque<int>dq;
//     dq.push_back(0);
//     dq.emplace_back(1);
//     dq.pop_back();
//     dq.pop_front();
//     dq.emplace_front(2);
//     dq.push_front(4);
//     dq.back();
//     dq.front();

// }


// void explainStack(){
//     //last in first out     //pop removes the last element
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.emplace(5);

//     st.pop();       //deletes the first element
//     st.top();       //returns the first element
//     st.size();      //returns the size of stack
//     st.empty();     //returns true or false
//     stack<int>st1, st2;
//     st1.swap(st2);
// }


// void explainPriorityQueue(){
//     priority_queue<int> pq;
//     pq.push(2);
//     pq.push(5);
//     pq.push(10);
//     pq.push(1);
//     cout<<pq.top()<<endl;      //prints the largest element(the largest element stays at top)
//     pq.pop();
//     cout<<pq.top()<<endl;
//     cout<<pq.size()<<endl;
//     cout<<pq.empty()<<endl; 
//     //swap(x,x);


//     //minimum heap
//     priority_queue<int, vector<int>, greater<int>> pq1;
//     pq1.push(2);
//     pq1.push(100);
//     pq1.push(-1);
//     cout<<pq1.top()<<endl;

// }

// void explainQueue(){
//     //FIRST IN FIRST OUT    //FIFO     //pop removes the first element
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.emplace(3);

//     q.back()+=5;
//     cout<<q.back();
//     cout<<q.front();
//     q.pop();
//     cout<<q.front();

// }

// void explainSet(){
//     // time complexity: O(log N)
//     // space complexity: O(N)

//     //set stores unique and sorted elements

//     set<int> st;
//     st.insert(1);
//     st.emplace(2);
//     st.insert(2);       //will not store 2
//     st.insert(4);
//     st.insert(3);
//     //begin(), end(), rend(), rbegin(),  size(), swap() are same as above

//     auto it1 = st.find(2);   //returns iterator pointing to the loction of 2
//     auto it2 = st.find(6);   //returns iterator pointing to the location after the last element(st.end())
    
//     st.erase(4); 
//     auto it3 = st.find(4);
//     st.erase(it3);

//     auto it4 = st.find(2);
//     auto it5 = st.find(4);
//     st.erase(it4,it5);          //REMEMBER!!!!:  [first, last)

//     st.upper_bound(2);
//     st.lower_bound(4);

//     int cnt = st.count(2); //wil return 1 if present, 0 otherwise

//      for(auto it:st){
//         cout<<it<<" ";
//      }
// }


// void explainMultiSet(){
//     //like set, sorted, but not unique; can store multiple instances of an element
//     multiset<int> ms;
//     ms.insert(2);
//     ms.emplace(3);
//     ms.insert(2);
//     ms.insert(2);

//     int cnt=ms.count(2);

//     ms.erase(2);                //erases all instances of 2

//     ms.erase(ms.find(2));       //erases one instance of an element

//     // ms.erase(ms.find(2), ms.find(2) + 2); 
// }

// void explainUnorderedSet(){
//      //time complexity: O(1)
//      //space complexity: O(N)

//     unordered_set<int>us;
//     /*lower_bound and upper_bound functions do not work, rest everything is similar

//     it does not store in any particular order
//     it has a better time complexity than set in most cases, except when some collision happens
//     tc is generally O(1) and O(N) in the special case, once in a blue moon*/
// }


// void explainMaps(){

//     //tc is O(log N)
//     //stores key-value pair
//     //map stores unique keys in sorted order

//     map<int,int> mpp1;
//     map<int,pair<int,int>>mpp2;
//     map<pair<int,int>, int>mpp3;

//     //mpp[key]=value;
//     mpp1[1]=2;
//     mpp1.emplace(3,1);
//     mpp1.insert({2,4});

//     mpp3[{4,5}]=4;
    
//     for(auto it:mpp1){
//         cout<<"Key is: "<<it.first<<" and value is: "<<it.second<<endl;
//     }

//     cout<<mpp1[1]<<endl;
//     cout<<mpp1[99]<<endl;       //prints 0

//     auto it1=mpp1.find(2);
//     cout<<(*it1).second;

//     auto it2=mpp1.lower_bound(2);
//     auto it3=mpp1.upper_bound(4);

//     //erase, swap, size, empty are same as previous

//     //time complexity is O(logN)

// }


// void explainMultiMap(){
//     //like map, but not unique
// }

// void explainUnorderedMap(){
//     //like map, but not sorted

//     //time complexity is generally O(1) but O(N) in special cases
// }



// bool comp(pair<int,int>p1, pair<int,int>p2){
//         return (p1.second<p2.second);

//         return (p1.first<p2.first);
// }



void explainExtra(){
    // int a[5]={99,0,32,-54,12};
    // int n=sizeof(a)/sizeof(a[0]);
//     vector<int>v{1,-99,1000};
//     sort(a, a+n);               //sort array in ascending order
//     sort(v.begin(), v.end());   //sort vector in ascending order
//     sort(a+2, a+4);             //[start, end)
//     sort(a, a+n, greater<int>());   //sorts in descending order 

    
//     pair<int,int> arr[]={{1,2}, {2,1}, {4,1}};
//     sort(a,a+n,comp);   //custom arrangement



//     int num=7;
//     int cnt=__builtin_popcount(num);
//     ll num2 = 23523532525;
//     ll cntl=__builtin_popcountll(num2);


    string s ="123";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(), s.end()));

    

    // int maxi= *max_element(a,a+n);

    // cout<<maxi<<endl;
}




int main(){
    fastIO
    // explainPairs();
    // explainVectors();
    // explainLists();
    // explainDeque();
    // explainStack();
    // explainQueue();
    // explainPriorityQueue();
    // explainMaps();
    explainExtra();
    return 0;
}