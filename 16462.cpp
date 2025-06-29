#include <iostream>
#include <math.h>
using namespace std;


int main(){

    int n;
    int total=0;
    int score=0;

    cin >> n;

    for(int i=0;i<n;i++){
        cin>>score;

        if(score >= 100) total += 100;
        else{
            int one=0;
            int two=0;

            switch(score/10){
                case 6: case 9: one =90; break;
                case 0: break;
                default : one = score / 10 * 10;

            }
            switch(score % 10){
                 case 0: case 6: case 9: two = 9; break;
                 default : two = score % 10;
            }

            total = total + one + two;
            
        }
        
    }
    
    cout << round((double)total/n) ;

    return 0;
}