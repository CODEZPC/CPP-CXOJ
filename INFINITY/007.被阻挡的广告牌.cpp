#include<bits/stdc++.h>
using namespace std;
#define ll long long
int f(int x1, int y1, int x2, int y2, int a1, int b1, int a2, int b2){
    if(x2 <= a1 || x1 >= a2 || y2 <= b1 || y1 >= b2) return (y2 - y1) * (x2 - x1); 
    else if(x1 >= a1 && y1 >= b1 && x2 <= a2 && y2 <= b2) return 0;
    else return (y2 - y1) * (x2 - x1) - (min(x2, a2) - max(x1, a1)) * (min(y2, b2) - max(y1, b1));
}                                               
int main()
{
    int x1, y1, x2, y2, a1, b1, a2, b2, kx1, ky1, kx2, ky2;
    cin>>x1>>y1>>x2>>y2;
    cin>>a1>>b1>>a2>>b2;
    cin>>kx1>>ky1>>kx2>>ky2;
    cout << f(x1, y1, x2, y2, kx1, ky1, kx2, ky2) + f(a1, b1, a2, b2, kx1, ky1, kx2, ky2);
    return 0;
}
