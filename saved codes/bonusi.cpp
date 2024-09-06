#include <iostream>
#include <queue>
using namespace std;

int dapa[1001][1001];
int rmove[4]={1,0,-1,  0};
int cmove[4]={0,1, 0, -1};
queue < pair<int,int> > q;
pair<int,int> qin,qout;
int n,m;

int main() {
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>dapa[i][j];

    qin.first=1;
    qin.second=1;
    q.push(qin);

    while(!q.empty()){
        qout.first=q.front().first;
        qout.second=q.front().second;
        q.pop();
        for(int i=0;i<=3;i++){
            qin.first=qout.first+rmove[i]*dapa[qout.first][qout.second];
            qin.second=qout.second+cmove[i]*dapa[qout.first][qout.second];
            if(i==3) dapa[qout.first][qout.second]=101;
            if(qin.first>=1 && qin.first<=n && qin.second>=1 && qin.second<=m){
                if(dapa[qin.first][qin.second]>0 && dapa[qin.first][qin.second]<101){
                    if(qin.first==n && qin.second==m) {cout<<"YES"; return 0;}
                    else q.push(qin);
                }
            }
        }
    }

    cout<<"NO";


return 0;
}
