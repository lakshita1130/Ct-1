//NAME:-LAKSHITA
//ROLL NO:-2010990416
//SET NO:-TEST 05
//Q2

#include <iostream>
#include <unordered_map>
using namespace std;
 
// Function to print all subarr with zero sum
void printAllSubarrays(int nums[], int n)
{
    //subarr starting at 'i'
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
 
        //  subarr ending at 'j'
        for (int j = i; j < n; j++)
        {
            // sum of elements 
            sum += nums[j];
 
            // if the sum is seen before, we have found a subarr with sumZero
            
            if (sum == 0) {
                cout<<"{";
                for(int it=i;it<=j;it++)
                {
                    cout<<nums[it]<<",";
                }
                cout<<"}";
                cout<<endl;
               
            }
        }
    }
}
  //Main code
int main()
{
    int n;
    cout<<"enter no of elements"<<endl;
    cin>>n;
     int nums[n];
     for(int i=0; i<n; i++){
         cin>>nums[i];
     }
 
    printAllSubarrays(nums, n);
 
    return 0;
}



