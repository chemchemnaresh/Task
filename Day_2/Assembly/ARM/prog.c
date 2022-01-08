.global _start
_start:
	
  mov r0, #1   ;i=0    
  mov r1, #2   ;j=2 
  mov r2, #0   ;sum=0 
  mov r0,r1    ;i=j
  .loop:
  cmp r0, #5   ; compare i < 5
  bge .last    ; if i greater than 5 goto to end of the code
  .if:
  mov r3, r0   ; r3 is tempa variable mov ro value to r3
  and r3,r3, #1
  cmp r3, #0   ; compare the value
  bne .skip    
  add r2,r2,r0  ; 
  add r0,r0, #1 ;increment r0 value
  b .loop       ; loop again
  .skip:
  .last: 
