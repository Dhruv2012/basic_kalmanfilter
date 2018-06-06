#ifndef KALMAN
#define KALMAN
struct kalman{
  float q;  //process noise covariance
  float r;  //measurement noise covariance
  float x;  //estimated value
  float p;  //error in estimate
  float k;  //kalman gain
};
typedef struct kalman Kalman;
//struct kalman *kf;
void kalman_init(Kalman *kf,float qq,float rr,float pp,float initial_estimate);
void update_kalman(Kalman *kf,float measured_value); 

#endif
