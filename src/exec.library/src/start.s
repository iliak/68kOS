
        xdef Start
        xref _Blink, ColorBars, _test

        ; set a green background, call Blink(0x05A, 0xA00, 20) when the right
        ; button is pressed, call ColorBars when the left button is pressed

Start   move.w  #$080, $dff180

        btst    #6, $bfe001
        bne     .1
        jsr     ColorBars

.1      btst    #2, $dff016
        bne     .2
        pea     20
        pea     $a00
        pea     $05a
        jsr     _Blink
        add     #12, sp

.2      bra     Start

		bra		_test
