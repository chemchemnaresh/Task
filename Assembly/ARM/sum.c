.global _start
_start:

   mov r0,#0    ;  r0 = i,i=0
   mov r1,#0    ;  r1 = sum, sum=0

   .loop:
   cmp r0,#10   ;compare 1<10
   bge .last    ; brach if gretar than
   add r1,r1,r0 ; store the values in sum
   add r0,r0,#1
   b .loop      ; goto loop
   .last:
