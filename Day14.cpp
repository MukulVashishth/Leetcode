class Solution {
public:
    double angleClock(int hour, int minutes) {
        float hr = (hour%12 + (float)minutes/60)*30;
        float min = minutes*6;
        float angle = fabs(hr-min);
        if(angle > 180)
            angle = 360 - angle;
        return angle;
    }
};