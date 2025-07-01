#include <iostream>

using namespace std;

#define MAX 16

int n;
int Ti[MAX]={0,};
int Pi[MAX] ={0,};
int dpArr[MAX] = {0,};

int Max(int a, int b);
void DP();

int main(){



    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> Ti[i] >> Pi[i];
    }

    DP();

    return 0;
}

int Max(int a, int b){
    return a>b? a: b;

}
void DP(){
    //7부터 생각
    int finish;
    for(int i=n;i>0;i--){
        finish = i+Ti[i];//언제 끝나는지 알기 위한 값
        //예시에서 2인 경우, 2:5일동안 이기 때문에 20(5) 까지만 가능하다는 것을 알기위함

        if(finish > n+1){
            dpArr[i] = dpArr[i+1]; //0들어감
        }
        else{
//            cout << "i[" << i<<"]:"<<Max(dpArr[i+1], dpArr[finish]+Pi[i])<<"\n";
            dpArr[i] = Max(dpArr[i+1], dpArr[finish]+Pi[i]);
            //지금까지 더해져 온 값 , 자신의 Pi[i]값 + 자기 끝나고 난 뒤의 값(해당 뒤의 값도 천천히 더해져 왔던 최종 값)
        }
    }
  //  cout<<"\n";
  //  for(int i=1;i<=n;i++){
  //     cout<<"dpArr["<<i<<"]::"<<dpArr[i]<<"\n";
  //  }

  cout << dpArr[1] <<"\n";

}