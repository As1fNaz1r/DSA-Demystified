#include<iostream> 
using namespace std;

class numbers{
    public:
    void printN(unsigned int n){
    if(n>0){
        printN(n-1);
        cout<<n<<" ";

    }
    return;

}
};
int main(){
    int n = 19;
    numbers nos;
    nos.printN(n);
    return 0;
}
