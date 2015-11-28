
        xdef ColorBars

ColorBars
        move.w  $dff006, $dff180
        btst    #6, $bfe001
        beq     ColorBars
        rts
