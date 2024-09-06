#include <iostream>
#include <set>
using namespace std;

int n,col,num,ans;
set< pair<int,int> > st;
set< pair<int,int> >::iterator it1,it2;
pair<int,int> mx1,mx2;

int main() {
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>col>>num;
        st.insert({num,col});
    }

    while(st.size()>2){

        it1=st.begin();
        it2=st.end(); it2--;

        ans+=it1->first;

        mx1.first=it2->first-it1->first;
        mx1.second=it2->second;
        st.erase(it2);

        it2=st.end(); it2--;

        mx2.first=it2->first-it1->first;
        mx2.second=it2->second;
        st.erase(it2);

        st.erase(it1); st.insert(mx1); st.insert(mx2);

    }

    cout<<ans;

return 0;
}
