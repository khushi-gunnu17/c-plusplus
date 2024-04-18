#include <bits/stdc++.h>
using namespace std;

struct petrolPump {
    int petrol;
    int distance;
};

class Solution{
    public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[], int n) {
        int deficit = 0;
        int balance = 0;
        int start = 0;

        for(int i = 0; i<n ; i++) {
            balance += p[i].petrol - p[i].distance;

            if(balance < 0) {
                deficit += balance;
                start = i+1;
                balance = 0;
            }
        }

        if (deficit + balance >= 0) {
            return start;
        } else {
            return -1;
        }
    }
};


int main() {

    Solution sol;

    // creating and populating an array of petrolPump structures
    vector<petrolPump> pumps = {
        {4, 6},  // petrol = 4, distance = 6
        {6, 5},  // petrol = 6, distance = 5
        {7, 3},  // petrol = 7, distance = 3
        {4, 5}   // petrol = 4, distance = 5
    };

    // or 

    // // Initialize an array of petrolPump directly
    // petrolPump p[] = {
    //     {4, 6},  
    //     {6, 5},  
    //     {7, 3},  
    //     {4, 5}   
    // };

    // int n = sizeof(p) / sizeof(p[0]);

    int n = pumps.size();
    petrolPump p[n];

    // copying vector data to array 
    for (int i = 0; i<n ; i++) {
        p[i] = pumps[i];
    }

    for (int i = 0; i < n; ++i) {
        cout << "Petrol: " << p[i].petrol << ", Distance: " << p[i].distance << endl;
    }

    // calling the tour function
    int startPoint = sol.tour(p, n);

    if (startPoint == -1) {
        cout << "No valid starting point found to complete the tour." << endl;
    } else {
        cout << "Starting index to complete the tour: " << startPoint << endl;
    }

    return 0;
}