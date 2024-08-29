class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) 
    {
        if (start > destination) {
            swap(start, destination);
        }
        
        int totalDistance = 0;
        int distanceClockwise = 0;

        for (int dist : distance) {
            totalDistance += dist;
        }
        
        for (int i = start; i < destination; ++i) {
            distanceClockwise += distance[i];
        }

        int distanceCounterClockwise = totalDistance - distanceClockwise;

        return min(distanceClockwise, distanceCounterClockwise);
    }
};
