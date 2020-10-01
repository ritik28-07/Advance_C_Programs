#include<iostream>
#include<map>
#include<cstring>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

int main()
{
    int t=1;
//    cin>>t;
    while(t--){
        string s1,s2;
        s1 = "reactive";
        s2 = "creative";
//        cin>>s1>>s2;
        map<char,int>m1,m2;
        int l1 = s1.length();
        int arr1[l1];
        int l2 = s2.length();
        int arr2[l2];
        for(int i=0;i<l1;i++){
            m1[s1[i]]++;
//            cout<<m1[s1[i]]<<endl;
        }
        for(int i=0;i<l2;i++){
            m2[s2[i]]++;
        }
    int greater = l1;
    if(l2==l1){
//        greater = l2;
		
	    map<char,int>:: iterator i= m1.begin();
	    map<char,int>:: iterator j=m2.begin();
		int flag =1;
	//
	//    j = m2.begin();
	//    i = m1.begin();
	    while(i!=m1.end() && j!=m2.end()){
		    cout<<i->first<<"  "<<j->first<<endl;
	        if(i->first != j->first){
	            flag =0;
	            break;
	        }
	        i++;
	        j++;
	    }
	    if(flag =0){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }

	}
	else{
		cout<<"NO"<<endl;
	}
}
    // sort(arr1,arr1+l1);
    // sort(arr2,arr2+l2);
    // for(int i=0;i<)
    return 0;
}

