## Settings

Hardcoded Default Settings Loaded
Steps per unit:
  M92 X80.00 Y80.00 Z400.00 E95.00
Maximum feedrates (mm/s):
  M203 X500.00 Y500.00 Z5.00 E25.00
Maximum Acceleration (mm/s2):
  M201 X4000 Y4000 Z100 E1000
Acceleration: S=acceleration, T=retract acceleration
  M204 S1500.00 T1500.00
Advanced variables: S=Min feedrate (mm/s), T=Min travel feedrate (mm/s), B=minimum segment time (ms), X=maximum XY jerk (mm/s),  Z=maximum Z jerk (mm/s),  E=maximum E jerk (mm/s)
  M205 S0.00 T0.00 B20000 X20.00 Z0.40 E5.00
Home offset (mm):
  M206 X0.00 Y0.00 Z0.00
PID settings:
   M301 P22.20 I1.08 D114.00