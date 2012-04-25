#include<set>
#include<cmath>
#include<vector>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

namespace cnx{

    const int N=100003;    
    typedef vector< pair<int,int> > coset;
    coset T[N];
    
    struct graph{
        int st[N],fa[N];
        set<int> h;
        void init(){
            st[0]=0;
            for(int i=1;i<N;++i)
                st[++st[0]]=i;
            for(int i=1;i<N;++i)
                fa[i]=i;
        }
        int getnode(){
            return st[st[0]--];
        }
        int find(int x){
            return fa[x]==x?x:fa[x]=find(fa[x]);
        }
        void uni(int x,int y){
            x=find(x),y=find(y);
            fa[x]=y;
        }
        void _merge(int x,int y){
            h.insert(x);
            h.insert(y);
            uni(x,y);
            for(int i=0;i<T[x].size();++i){
                if(i>=T[y].size())continue;
                if(T[x][i].first&&T[y][i].first&&T[x][i].first!=T[y][i].first)
                    _merge(T[x][i].first,T[y][i].first);
                if(T[x][i].second&&T[y][i].second&&T[x][i].second!=T[y][i].second)
                    _merge(T[x][i].second,T[y][i].second);
            }
        }
        void merge(int x,int y){
            h.clear();
            _merge(x,y);
            for(set<int>::iterator it=h.begin();it!=h.end();++it){
                int x=*it;
                if(fa[x]==x)continue;
                int f=find(x);
                for(int j=0;j<max(T[x].size(),T[y].size());++j){
                }
            }
        }
    };
    
    int n;
    vector<string> g,h;
    void readin(){
        puts("");
        puts("Welcome to the cnx's mathematic tools.");
        puts("        **** *   * *   *");
        puts("       *     *   * *   *"); 
        puts("       *     **  *  * * "); 
        puts("       *     * * *   *  "); 
        puts("       *     *  **  * * "); 
        puts("       *     *   * *   *");
        puts("        **** *   * *   *"); 
        puts("=============================================");
        puts("This program uses the Todd-Coxeter procedure ");
        puts("to compute the index in a finitely presented ");
        puts("group G of a subgroup H. You will be prompted");
        puts("to enter the number of generators of G, the  ");
        puts("defining relators of G, and the generators of");
        puts("H. Use a,b,... for the generators of G and A,");
        puts("B,... for their inverses.");
        puts("");
        puts("Number of generators:");
        scanf("%d",&n);
        puts("Enter the relators for G, one per line; press Enter when finished:");
        string s;
        while(cin>>s){
            if(s=="")break;
            g.push_back(s);
        }
        puts("Enter the generators of H, one per line; press Enter when finished:");
        while(cin>>s){
            if(s=="")break;
            h.push_back(s);
        }
        puts("");
        puts("Begin calculation...");
    }
    void work(){
    }
}

int main(){
    cnx::readin();
    cnx::work();
    return 0;
}
