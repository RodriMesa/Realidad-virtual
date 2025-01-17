%Init
% Clean up
close all;
clear;
clc;

params.Ts = 0.001;          % Sample time

params.bufSize = 5;        % Filter buffer size
params.maxDisp = 300;      % Max object displacement [pixels]
params.minSize = 50;       % Min object size [pixels]
params.maxSize = 500;      % Max object size [pixels]
params.maxCounts = 5;      % Max outlier counts before stopping

params.linVelGain = 2e-3;  % Linear control gain
params.angVelGain = 4e-3;  % Angular control gain
params.maxLinVel = 0.2;   % Max linear speed
params.maxAngVel = 0.75;   % Max angular speed

params.posDeadZone = 30;   % Steering control marker position dead zone [pixels] 
params.targetSize = 180;   % Linear speed control target blob size [pixels]
params.sizeDeadZone = 30;  % Linear speed control size dead zone [pixels]
params.speedRedSize = 100; % Minimum pixel value before turning speed is ramped down
% Gazebo IP address
gazeboIp = '192.168.1.38';
% Turtlebot IP address
turtlebotIp = '172.31.28.38';
rosshutdown;
rosinit(gazeboIp);