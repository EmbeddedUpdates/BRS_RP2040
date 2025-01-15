
MEMORY
{
    ram : ORIGIN = 0x20000000, LENGTH = 0x1000
}
SECTIONS
{
    .startupText       : { *start.S(.text*) } > ram
    .defaultTextArea   : { *(.text*)   }      > ram

    .defaultDataArea   : { 
        *(.data*)
        *(.bss*)
    } > ram
}
