#include<iostream>
using namespace std;
int main(){
    int vart, n;
    cin>>vart;
    cin>>n;
    int l=0, r=0;
    for(int i=0; i<n; i++){
        int l1,l2,l3,l4,r4,r3,r2,r1;
        cin>>l1>>l2>>l3>>l4>>r4>>r3>>r2>>r1;
        if((r1<vart && r2 < vart && r3 <vart)){
            cout << "RIGTH SIDE!\n";
            r++;
        }else if((l1<vart && l2 < vart && l3 < vart)){
            cout <<"LEFT SIDE!\n";
            l++;
        }else{
            cout <<"NO PERFORM!!!\n";
            if(l>0 || r>0)
            l++;
        }
    }
    if(r>l){cout<<"RIGTH SIDE!!! THE STRONG SIDE!!!\n";}
    else if(l>r){cout<<"LEFT SIDE!!! THE STRONG SIDE!!!\n";}
    else {cout<<"WEAK SIDE!!! BOTH SIDE!!!\n";}
}