class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int time=0;
        if(timeSeries.size()==0 ){
                return -1;
            }
        for(int i=0; i<timeSeries.size()-1; i++){
            if((timeSeries[i+1]-timeSeries[i]) < duration){
                time += (timeSeries[i+1]-timeSeries[i]);
            }
            else{
                time += duration;
            }
        }
        time += duration; //last attack
        return time;
    }
};