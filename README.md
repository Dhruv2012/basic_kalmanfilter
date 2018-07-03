# basic_kalmanfilter
A basic kalman filter for predictng output and reducing noise of dynamic systems.
It is mainly used to reduce the noise of the senors like MPU 6050, IMU etc which measures yaw,roll and pitch angle readings.
Initially it estimates the value and initializes the kalman gain , process noise covariance,error in estimates and measurements.
After taking the reading from the sensor it weighs on previous estimate and measurement for the next estimate.
If the error in estimate is more ,Kalman Gain is set in such a way that the next estimate is more near to the measurement reading and viceversa.
Then the iteration is repeated.

Microcontroller- Arduino UNO

Sensor- MPU 6050

Reference link:-  https://youtu.be/CaCcOwJPytQ

Project link:-    https://drive.google.com/open?id=1pN_5Zc9ywuBkUqAy7VHs_3ltM-91T-aN
