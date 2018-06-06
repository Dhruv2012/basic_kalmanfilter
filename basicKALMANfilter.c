#include "basicKALMANfilter.h"

void kalman_init(Kalman *kf,float qq,float rr,float pp,float initial_estimate){
  kf->q=qq;  
  kf->r=rr;
  kf->p=pp;
  kf->x=initial_estimate;
}
void update_kalman(Kalman *kf,float measured_value){
  kf->p=kf->p+kf->q;
  kf->k=kf->p/(kf->p + kf->r);
  kf->x=kf->x+kf->k*(measured_value-kf->x);
  kf->p=(1-kf->k)*kf->p;    
} 
