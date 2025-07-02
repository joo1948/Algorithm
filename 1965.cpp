#include <iostream>
using namespace std;

int n;
int box[1001];
int temp[1001]={0,};

int max(int a, int b);
void DP();

int main(){

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> box[i];
        temp[i] = 1;
    }

    DP();

    return 0;
}
int max(int a, int b){
    return a>b ? a : b;
}
void DP(){
    
    for(int i=1;i<n;i++){   
        
        for(int j=0;j<i;j++){
            if(box[i]>box[j]){
                temp[i] = max(temp[i], temp[j]+1);
            }
        }
    }
    int result = 0;
    for(int i=0;i<n;i++){
        result = max(result, temp[i]);
    }

    cout<<result;
}