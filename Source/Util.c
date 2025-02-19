void MEMCPY ( char * src, char * dst, int size )
{
    int i;
    for ( i = 0; i < size; i++ )
    {
        dst[i] = src[i];
    }
}
