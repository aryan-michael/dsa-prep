// Question 2:

// You are given an array of strings startupTimes representing server startup times in 24-hour format and an array of strings shutdownTimes of the same length, representing server shutdown time in 24-hour format. For the ith server, startup time is startupTimes[i] and shutdown time is shutdownTimes[i], where i is a 0-based index. You are also given a string currentTime representing the current time in 24-hour format.

// The shutdownTimes[i] may be equal to "None", meaning the ith server was not shut down at the currentTime.

// The cost of running each server is $1 per minute. Your task is to calculate the total amount you need to pay (in dollars) to run all servers from the start of the first-started server to the currentTime.

// Note: You are not expected to provide the most optimal solution, but a solution with time complexity not worse than O(startupTimes.length × MINUTES_IN_DAY) will fit within the execution time limit.

// Example

// For startupTimes = ["12:30", "14:00", "19:55"], shutdownTimes = ["15:00", "17:00", "None"] and currentTime = "20:00", the output should be solution(startupTimes, shutdownTimes, currentTime) = 335.

// Explanation:

// The first server ran from startupTimes[0] = "12:30" to shutdownTimes[0] = "15:00", which is 150 minutes.
// The second server ran from startupTimes[1] = "14:00" to shutdownTimes[1] = "17:00", which is 180 minutes.
// The third server ran from startupTimes[2] = "19:55" to currentTime = "20:00" (as shutdownTimes[2] = "None"), which is 5 minutes.
// As each minute is paid with 1$, total cost is 150$ + 180$ + 5$ = 335$.
// For startupTimes = ["00:00", "23:58", "23:59"], shutdownTimes = ["03:47", "None", "None"] and currentTime = "23:59", the output should be solution(startupTimes, shutdownTimes, currentTime) = 228.

// Explanation:

// The first server ran from startupTimes[0] = "00:00" to shutdownTimes[0] = "03:47", which is 227 minutes.
// The second server ran from startupTimes[1] = "23:58" to currentTime = "23:59" (as shutdownTimes[1] = "None"), which is 1 minute.
// The third server ran from startupTimes[2] = "23:59" to currentTime = "23:59" (as shutdownTimes[2] = "None"), which is 0 minutes.
// Total cost is 227$ + 1$ + 0$ = 228$.
// Input/Output

// [execution time limit] 4 seconds (py3)

// [memory limit] 1 GB

// [input] array.string startupTimes

// The list of startup times for all servers.

// Guaranteed constraints:
// 1 ≤ startupTimes.length ≤ 100,
// "00:00" ≤ startupTimes[i] ≤ shutdownTimes[i].

// [input] array.string shutdownTimes

// The list of shutdown times for all servers.

// Guaranteed constraints:
// shutdownTimes.length = startupTimes.length,
// startupTimes[i] ≤ shutdownTimes[i] ≤ currentTime or shutdownTimes[i] = "None".

// [input] string currentTime

// The time at which you were asked to calculate the cost to run all the servers.

// Guaranteed constraints:
// "00:00" ≤ currentTime ≤ "23:59".

// [output] integer

// The total amount of money (in dollars) required to run all servers till currentTime, based on the cost of $1 per minute while running each server.

#include <bits/stdc++.h>
using namespace std;

int timeToMinutes(string currentTime){
    int hours = stoi(currentTime.substr(0,2));
    int minutes = stoi(currentTime.substr(3,2));
    int time = hours * 60 + minutes;
    return time;
}

int calculateCost(vector<string> startupTimes, vector<string> shutdownTimes, string currentTime){
    int totalCost = 0;
    int currentTimeInMinutes = timeToMinutes(currentTime);

    for(int i=0; i<startupTimes.size(); i++){
        int startMinutes = timeToMinutes(startupTimes[i]);

        int endMinutes;
        if(shutdownTimes[i] == "None"){
            endMinutes = currentTimeInMinutes;
        }
        else{
            endMinutes = timeToMinutes(shutdownTimes[i]);
        }
        
        totalCost = totalCost + (endMinutes - startMinutes);
    }
    
    return totalCost;
}

int main(){
    vector<string> startupTimes = {"12:30", "14:00", "19:55"};
    vector<string> shutdownTimes = {"15:00", "23:30", "None"};
    string currentTime = "20:00";

    cout << "Total cost of running the servers is: $" << calculateCost(startupTimes, shutdownTimes, currentTime);
    cout << endl;
    return 0;
}