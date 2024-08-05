 #include <iostream>
using namespace std;

class Solution{
    public:
     bool canWinNim(int n){
        if(n%4==0){
            cout<<"You lose";
            return false;
        }else{
            cout<<"You win";
            return true;
        }
     }
};

int main(){
    Solution nim;
    int num;
    cout<<"Enter number"<<endl;
    cin>>num;
   
   nim.canWinNim(num);
    return 0;
}