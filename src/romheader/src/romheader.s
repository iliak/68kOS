
        xref Start

        dc.l 10000, .1
        dc.b " Custom ROM 1.0 "

        ; enable chipmem, configure the mouse and joystick ports for digital
        ; input for all three buttons, put the supervisor stack at 10000, user
        ; stack at 20000, and continue execution in the "start.s" module

.1      move.b  #%11, $bfe201
        sf      $bfe001
        move.w  #$ff00, $dff034
        lea     20000, a0
        move    a0, usp
        moveq   #-1, d0
        dbf     d0, *
        jmp     Start
