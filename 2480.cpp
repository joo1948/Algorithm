#include <iostream>

int main(){

    /*
        같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다.
        같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
        모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.
    */

    using namespace std;

    int num[3];
    int max = 0;
    int result = 0;

    for(int i=0;i<3;i++){
        cin >> num[i];
    }

    if(num[0] == num[1] && num[1] == num[2] && num[0]==num[2]){
        result = 10000 + (num[0] * 1000);
    }else if(num[0]==num[2]){
         result = 1000 + (num[0] * 100);
    }
    else{
         max = num[0];
        for(int i=0;i<2;i++){
            if(num[i]==num[i+1]){
                result = 1000 + (num[i] * 100);
                break;
            }
            else{
                if(max < num[i+1]){
                    max = num[i+1];
                }
                result = max * 100;
            }
        }

    }

    cout << result;    
    
    return 0;
}