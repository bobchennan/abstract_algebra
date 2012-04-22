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
