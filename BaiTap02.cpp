#include<iostream>
#include<math.h>
using namespace std;
//BaiA01
/*
int main(){
    int p=2;
    do{
        cout<<p<<" ";
        p=p+2;
    }while(p<100);
    return 0;
}
*/

//BaiC01
/*
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0)
            count++;
    }
    if(count==0) cout<<"yes";
    else cout<<"no";
}
*/

//BaiC02
/*
int main()
{
    int soDong;
    cin >> soDong;
    for(int i = soDong; i >=1; i--) {
        for(int j = i-1; j < soDong-1; j++) {
            cout << " ";
        }
        for(int j = i; j >=1; j--) {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}
*/

//BaiC03
/*
int main()
{
    int soDong;
    cin >> soDong;
    for(int i = 1; i <= soDong; i++) {
        for(int j = i; j < soDong; j++) {
            cout << " ";
        }

        for(int j = 1; j <= (2*i-1); j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
*/
//BaiC04
/*
int main()
{
    int soDong;
    cin >> soDong;
    for(int i = soDong; i >=1; i--) {
        for(int j = i; j < soDong; j++) {
            cout << " ";
        }

        for(int j = 1; j <= (2*i-1); j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
*/
