#include <iostream>
#include <algorithm>


using namespace std;

int main(){
    int n1, n2, n3;
    int result = 0;
    
    cin >> n1 >> n2 >> n3;


    if(n1 != n2 && n1 != n3 && n2 != n3){//다 다름
        int max_num =0;

        max_num = max({n1, n2, n3});
        result =  max_num * 100;
    }
    else if(n1 == n2 && n1 == n3 && n2 == n3){//다 같음
        result = 10000 + (n1 * 1000);
    }
    else{
        if(n1 == n2 || n2 == n3){
            result = 1000 + (n2 * 100);
        }else{
            result = 1000 + (n1 * 100);
        }
    }

    cout << result;
}