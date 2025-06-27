#include <iostream>
#include <iomanip>

using namespace std;


int main(){

    ios::sync_with_stdio(false);//printf , scanf 동기화 연결 끊기
    cin.tie(NULL);//입출력 병목 해소

    int N=0;
    double A =0.0, V=0.0;
    float result=0.0;

    cin >> N;

    for(int i=0;i<N;i++){
        cin >> A;
        
        V = 1-(1-V)*(1-A/100);
        
        printf("%.6f\n", V * 100);
    }

}