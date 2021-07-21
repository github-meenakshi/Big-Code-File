#include <iostream>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <set>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,x,sum = 0;
        cin>>n>>x;
        int arr[n];
        bool flag = false;
        for(int i = 0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%x != 0) flag = true;
            sum+=arr[i];
            }
            if(flag == false) cout<<-1<<endl;
            else if(sum%x!=0) cout<<n<<endl;
            else{
                long long int len1 = n,sum1 = sum,maxi = -1;
                for(int i = 0;i<n;i++){
                    if(sum1%x == 0){
                        sum1 = sum1-arr[i];
                        len1--;
                        }
                        else{
                            maxi = max(maxi,len1);
                            break;
                            }
                    }
                    long long int len2 = n,sum2 = sum;
                    for(int i = n-1;i>=0;i--){
                        if(sum2%x == 0){
                            sum2 = sum2-arr[i];
                            len2--;
                            }
                            else{
                                maxi = max(maxi,len2);
                                }
                        }
                        cout<<maxi<<endl;
                }
        }
        return 0;
    }