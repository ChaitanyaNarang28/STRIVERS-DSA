// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n,sum=0,r,count=0,m,j;
//     cout<<"Enter the number: ";
//     cin>>n;
//     m=n;
//     j=n;

//     while(m>0)
//     {
//         count=count+1;
//         m=m/10;
//     }
//     cout<<"Total no of digits are: "<<count<<endl;
    
//     while(j>0)
//     {
//         r=j%10;
//         sum=sum+pow(r,count);
//         j=j/10;
//     }

//     if(sum==n)
//     {
//         cout<<"The no is armstrong";
//     }
//     else
//     {
//         cout<<"The no is not an armstrong";
//     }
    
// }


#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"THE CODE COMMENTED ABOVE HAS ISSUES WITH POWER!!!"<<endl;
    int n, sum = 0, r, count = 0, m, j;
    cout << "Enter the number: ";
    cin >> n;
    m = n;
    j = n;

    // Count the number of digits
    while (m > 0) {
        count++;
        m = m / 10;
    }
    cout << "Total no of digits are: " << count << endl;

    // Calculate the Armstrong sum
    while (j > 0) {
        r = j % 10; // Extract the last digit

        // Calculate r^count manually
        int power = 1;
        for (int i = 0; i < count; ++i) {
            power *= r;
        }

        sum += power; // Add the result to the sum
        j = j / 10;   // Remove the last digit
    }

    // Check if the number is an Armstrong number
    if (sum == n) {
        cout << "The number is Armstrong" << endl;
    } else {
        cout << "The number is not an Armstrong" << endl;
    }

    return 0;
}

