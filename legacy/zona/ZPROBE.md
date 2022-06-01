;home
G28
;z home with probe
G30
;get current position
M114
;absolute position
G90
;move to 0
G0 Z0
;relative postion
G91
;move to z.1
G0 Z0.1
;stop software endstop
M211 S0
;save z probe offset and save
M851 Z-2.74
M500
;start software endstop
M211 S1
;inspect
M503
