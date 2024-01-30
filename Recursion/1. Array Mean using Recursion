
#include <iostream>
#include<vector>
using namespace std;

class Mean{
    public:
        double arrayMean(const vector<int> &arr){
            int sum = 0; 
            int count = 0;
            arrayMeanRecursive(arr, 0, sum, count);
            return count == 0 ? 0 : static_cast<double>(sum)/count;

        }

    private:
        void arrayMeanRecursive(const vector<int> &arr, int index, int &sum, int &count){
            if(index < arr.size()){
                sum += arr[index];
                count++;
                arrayMeanRecursive(arr, index+1, sum, count);
            }
        }

};

int main(){
    Mean mean;
     // Test case
    vector<int> arr = {1, 2, 3, 4, 5};
    double meant = mean.arrayMean(arr);

    cout << "Mean: " << meant << std::endl;

    return 0;

}
