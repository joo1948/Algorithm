#include <iostream>
using namespace std;


int main(){

    int n;
    int cnt =0, result = 0;
    int num;

    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> num;
        
        for(int j = 1;j <= num; j++){
            if(num % j ==0) cnt++;
        }

        if(cnt == 2) result ++;
        cnt =0;
    }

    cout << result;
  
    return 0;
}