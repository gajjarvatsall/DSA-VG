#include<bits/stdc++.h>
using namespace std;

int sqrt(int n){
    int s = 0;
    int e = n;
    int mid = s + (e-s)/2;
    int ans = 0;
    while(s<=e){
        if(mid*mid <= n){
            ans = mid;
            s = mid+1;
        }else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

double precisionSqrt(int n){
    double m = sqrt(n);
    double step = 0.1;
    int precision = 2;

    while(precision--){
        double j = m;

        while (j*j <= n)
        {
            m = j;
            j +=step;
        }
        
        step /= 10;

    }
    return m; 
}

double BSprecisionSqrt(int n){
    double s = 0;
    double e = n;
    double ans = 0;

    while((e - s) > 0.001){
        double mid = (s+e)/2;
        double sqr = mid*mid;

        if(sqr <= n){
            ans = mid;
            s = mid;
        }else{
            e = mid;
        }

    }
    return ans;

}

int main()
{
    int n = 34;
    double ans = BSprecisionSqrt(n);
    cout<<ans<<endl;
    return 0;
}