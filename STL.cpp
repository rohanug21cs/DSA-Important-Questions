#include<bits/stdc++.h>
using namespace std;
/*void explainPair()
{
    pair<int,int> p={1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,pair<int,int>> p1={1,{2,3}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl; //Nested pair
    pair<int,int> arr[]={{1,2},{2,5},{5,1}}; //creating array having each individual elements as pairs
    cout<<arr[1].second<<endl;
}

void explainVector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); //emplace_back is faster than push_back
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*(it)<<" ";
    }cout<<endl;
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2); 
    //if we write using curly braces then we need curly braces for pairs but not  in emplace_back, it automatically assumes it as pair.
    vector<int> V(5,100); //it means 5 instances of 100, i.e {100,100,100,100,100}
    for(auto it=V.begin();it!=V.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    vector<int> V1(5); //it means 5 instances of 0, i.e {0,0,0,0,0}
    for(auto it=V1.begin();it!=V1.end();it++)
    {
        cout<<*(it)<<" ";
    }cout<<endl;
    vector<int> V2(V1); //creating copy of vector V1 by passing it to vector V2
    for(auto it=V2.begin();it!=V2.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    //accessing elements in vector
    cout<<V[0]<<" "<<V.at(0)<<endl;
    //we can also access by using iterator
    vector<int>::iterator it=V.begin(); //V.begin() points to the first index
    it++;
    cout<<*(it)<<endl;
    vector<int>::iterator it1=V.end(); //V.end() points to the index just after the last index
    it1--;
    cout<<*(it1)<<endl;
    vector<int>  vect={10,20,30,40,50};
    vector<int>::reverse_iterator it2=vect.rend(); //reverse end i.e.  after 10 her(after reversing)
    it2--;
    cout<<*(it2)<<endl;
    vector<int>::reverse_iterator it3=vect.rbegin();
    cout<<*(it3)<<endl;
    //printing a vector using for-each loop
    for(auto it:vect)
    {
        cout<<it<<" ";
    }cout<<endl;
    vect.erase(vect.begin()+1); //{10,30,40,50}
    for(auto it:vect)
    {
        cout<<it<<" ";
    }cout<<endl;
    vect.erase(vect.begin()+2,vect.begin()+4); //{10,30} second pointer is exclusive [,)
    for(auto it:vect)
    {
        cout<<it<<" ";
    }cout<<endl;
    vect.insert(vect.begin(),300); //{300,10,30}
    vect.insert(vect.begin()+2,2,20); //{300,10,20,20,30} here 2 instances of 20 are inserted
    for(auto it:vect)
    {
        cout<<it<<" ";
    }cout<<endl;

    //copy from one to another vector
    vector<int> copy(2,50); //{50,50}
    vect.insert(vect.begin(),copy.begin(),copy.end()); //{50,50,300,10,20,20,30}
    for(auto it:vect)
    {
        cout<<it<<" ";
    }cout<<endl;
    //size function
    cout<<vect.size();
    cout<<endl;
    vect.pop_back(); //pops the last element
    //swapping two vectors
    vect.swap(V); //vect->{100,100,100,100,100} and V->{50,50,300,10,20,20,30}
    for(auto it:vect)
    {
        cout<<it<<" ";
    }cout<<endl;
    for(auto it:V)
    {
        cout<<it<<" ";
    }cout<<endl;
    V.clear(); //erases the entire vector
    cout<<V.empty();
}

void explainList() //List is similar o vector, but it gives front operations as well. In vector inserting at beginning is costlier but it is cheap in list.
{
    list<int> l;
    l.push_back(2); //{2}
    l.emplace_back(4); //{2,4}
    l.push_front(5); //{5,2,4}
    l.emplace_front(6); //{6,5,2,4}
    for(auto it:l)
    {
        cout<<it<<" ";
    }cout<<endl;
    //rest all functions are same as vector (begin,end,rbegin,rend,clear,insert,size,swap)
}
void explainDeque() //doubly ended queues
{  
    deque<int> dq;
    dq.push_back(1); //{1}
    dq.emplace_back(2); //{1,2}
    dq.push_front(4); //{4,1,2}
    dq.emplace_front(3); //{3,4,1,2}
    dq.pop_back(); //{3,4,1,2}
    dq.pop_front(); //{4,1}
    for(auto it:dq)
    {
        cout<<it<<" ";
    }cout<<endl;
    cout<<dq.back(); //{1}
    cout<<endl;
    cout<<dq.front(); //{4}

    //rest functiuon same as vector(begin,end,rbegin,rend,clear,insert,size,swap)
}

void explainStack() //LIFO
{
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(3); //{3,3,2,1}
    st.emplace(5); //{5,3,3,2,1}
    cout<<st.top(); //5
    cout<<endl;
    st.pop();
    cout<<st.top(); //3
    cout<<endl;
    cout<<st.size();
    cout<<endl;
    cout<<st.empty();
    cout<<endl;
    stack<int> st1,st2;
    st1.swap(st2); //swapping of two stacks
}

void explainQueue() //FIFO
{
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.emplace(4); //{1,2,4}
    q.back()+=5; //{1,2,9}
    cout<<q.back(); //9
    cout<<endl;
    cout<<q.front(); //1
    cout<<endl;
    q.pop(); //{2,9} pops from front 
    cout<<q.front(); //2
    //size,swap,empty same as stack;
}
void explainpriorityQueue() //The largest int, char,...or lexicographically largest string stay at the top .....(Max heap)
{
    priority_queue<int> pq;
    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    pq.push(10);  //{10,8,5,2}
    pq.emplace(11); //{11,10,8,5,2}
    cout<<pq.top(); //{11}
    cout<<endl;
    pq.pop(); //{10,8,5,2}
    cout<<pq.top(); //10
    cout<<endl;
    // size,swap,empty function same as others.

    //if we want to construct a min. heap using priority queue then wr need to add two more parameters, i.e. one vector and the other is teh comparator.
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5); //{5}
    pq1.push(2); //{2,5}
    pq1.push(8); //{2,5,8}
    pq1.emplace(10); //{2,5,8,10}
    cout<<pq1.top(); //2
    cout<<endl;

    //NOTE: PQ will take O(log n) time for push and pop operations while O(1) for top  function to check the top element of the heap.

}

void explainSet()  // set stores sorted and unique elements.
{
    set<int> st1;
    st1.insert(1); //{1}
    st1.emplace(2); //{1,2}
    st1.insert(2); //{1,2} this time the set will not store '2' again as the set doesn't stores duplicate elements
    st1.insert(4); //{1,2,4}
    st1.insert(3); //{1,2,3,4}
    //functionality of insert in vector can be used also, that only increases efficiency.
    //begin(), ennd(), rbegin(), rend(), size(), empty() and swap() are same as those of the above
    st1.insert(5); //{1,2,3,4,5}
    auto it=st1.find(3); // returns an iterator that points to 3
    auto it=st1.find(6); // returns an iterator that points to just after the end (if elements is not present) i.e st.end()
    st1.erase(5); //erases 5 from the Set in O(log n) time
    int cnt=st1.count(1); //gives 1 if it is there in set, if not then 0.
    
    auto it=st1.find(3);
    st1.erase(it); //Now, it takes constant time bcz here we are giving the point to that memeory location which is to be erased , but if we will give the element value to the erase() function then it will take logarithmic time in order to find also.

    set<int> st2;
    st2.insert(1);  //{1}
    st2.insert(2); //{1,2}
    st2.insert(3); //{1,2,3}
    st2.insert(4); //{1,2,3,4}
    st2.insert(5); //{1,2,3,4,5}
    auto it1=st2.find(2);
    auto it2=st2.find(4);
    st2.erase(it1,it2); // after erase {1,4,5} [first,last)

    //lower_bound and upper_bound function works in the same way as in vector it does.
}

void explainmultiSet() //everythig is same as set, but it stores duplicate elements also.
{
    multiset<int> ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}
    ms.erase(1); //all 1's are erased {}
    int cnt=ms.count(1);

    //But, is there any way to erase only a sinlge 1? Yes, there is!
    ms.erase((ms.find(1))); //here find function will return the index of the first found 1. So, eventually we are passing an index to the erase function, and not the element value itself.
    ms.erase(ms.find(1),ms.find(1)+2); //here we have passed the two iterators.

    //rest all functions are same.
}

void explainUset()    //stores unique
{
    unordered_set<int> st;
    //loweer_bound and upper_bound function does not works, rest all functions are same as above.
    //It doesn't stores in any particular order.
    //It has a better complexity than set in most cases, except some when collisions happen.
    //In most of the cases the time complexity is O(1). It happens once in a million that it goes too O(n).
}

void explainMap() //Stores key-value pair
{
    map<int,int> mpp; //map stores unique keys in sorted order.
    map<int,pair<int,int>> mpp1;
    map<pair<int,int>,int> mpp2;
    mpp[1]=2; //on key 1, stores 2, i.2. {1,2}
    mpp.insert({3,1});
    mpp.insert({2,4}); //unique key in sorted order. [{1,2},{2,4},{3,1}]
    mpp2[{2,3}]=10;  //{{2,3},10}
    for(auto it:mpp)
    {
        cout<<it.first<<" "<<it.second<<endl;                                            
    }
    cout<<mpp[1]; //2
    cout<<endl;
    cout<<mpp[5]; //key doesn't exist so  prints 0.
    cout<<endl;
    auto it=mpp.find(3);
    cout<< it->second; // 1
    cout<<endl;
    auto it1=mpp.find(5);
    cout<<it1->second; //since 5 is not there it points to mpp.end()  and hence prints 0 as its value.

    //syntax of upper_bound and lower_bound
    it=mpp.lower_bound(2);
    it=mpp.upper_bound(3);

    //erase,swap,size,empty are same as above..



}

void  explainMultimap()
{
    //everything is same as map, only it can store  multiple keys also
    //hence wer can't use mpp[key] here, bcz here we can have duplicate keys also having different values.
    //{1,2},{1,3} 
}
void explainUnorderedMap()
{
    //same as set and unordered_set difference.
}*/

//NOTE:  map works in O(log n), but unordered_map works in O(1) time, but once in a blue moon it can go upto O(n).


//we have completed containers and iterators. Now, we will learn some algorithm.
void explainExtra()
{
    //sort(a,a+n); //  It is used for sorting containers like vector, array, etc.  here last one is not included,i.e. [first,last)
    //sort(V.begin(),V.end());

    //{1,3,5,2}
    //sort(a+2,a+4); //{1,3,2,5}

    //how to osrt in decending order?
    //sort(a,a+n,greater<int>); //here the third parameter is an in-built comparator.

    //sorting our own way.
    pair<int,int> a[]={{1,2},{2,1},{4,1}};
    //sorting it according to the increasing second element. if second element is same then, sort it according to first element but in descending. (We have defined a comparator function for this.)
    /*bool comparator(pair<int,int> p1,pair<int,int> p2)
    {
        if(p1.second<p2.second)
         return true;
        else if(p1.second==p2.second)
        {
            if(p1.first>p2.first) return true;
        }
        return false;
    }
    sort(a,a+n,comparator); //{{4,1},{2,1},{1,2}}
    */
    int num=7; //binary of 7 is 111
    int cnt=__builtin_popcount(num); //__ builtin_popcount(x) return the number of set bits in x.
    cout<<cnt<<endl;
    long long num1=165786578687;
    int cnt1=__builtin_popcountll(num1);
    cout<<cnt1<<endl;

    string s="123";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
     
    //next_permutation() return false if no more permutations available
    /*
    123
    132
    213
    231
    312
    321
    */
   // Here is a catch, what is the string is 231.
   cout<<endl<<endl;
   s="231";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));

    /*
    231
    312
    321
    other will not be printed*/

    //to print all these we need to make sure that the string is sorted, otherwise do: sort(s.begin(),s.end())

    vector<int> v={1,5,2,8,5,10};
    int maxi=*max_element(v.begin(),v.end()); //max_element gives the address of the maximum element, so we need to dereference it.
    cout<<maxi<<endl;
}

int main()
{   //explainPair();
    // explainVector();
    //explainList();
    //explainDeque();
    //explainStack();
    //explainQueue();
    //explainpriorityQueue();
    //explainSet();
    //explainmultiSet();
    //explainUset();
    //explainMap();
    //explainMultimap();
    //explainUnorderedMap();
    explainExtra();
    return 0;
}
