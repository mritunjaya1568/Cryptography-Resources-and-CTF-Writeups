int __cdecl main(int argc, const char **argv, const char **envp)
{
  const char *v5; // r12
  size_t v10; // rax
  size_t v11; // rdi
  unsigned __int64 v12; // rcx
  const char *v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  int v16; // er12
  __m128i v18; // [rsp+0h] [rbp-68h]
  char v19[8]; // [rsp+10h] [rbp-58h] BYREF
  __m128i v20; // [rsp+20h] [rbp-48h]
  __m128i v21; // [rsp+30h] [rbp-38h]
  int v22; // [rsp+40h] [rbp-28h]
  unsigned __int64 v23; // [rsp+48h] [rbp-20h]

  v23 = __readfsqword(0x28u);
  _RAX = 0LL;
  if ( argc <= 1 )
  {
    v16 = 1;
    __printf_chk(1LL, "Usage: %s FLAG\n", *argv);
  }
  else
  {
    v5 = argv[1];
    __asm { cpuid }
    v22 = 3672641; 
    strcpy(v19, "N 2022");
    v20 = _mm_load_si128((const __m128i *)&xmmword_3140);
    v21 = _mm_load_si128((const __m128i *)&xmmword_3150);
    v18 = _mm_load_si128((const __m128i *)&xmmword_3160);
    v10 = strlen(v5);
    v11 = v10;
    if ( v10 )
    {
      *v5 ^= 0x57u;
      v12 = 1LL;
      if ( v10 != 1 )
      {
        do
        {
          v13 = &argv[1][v12];
          v14 = v12 / 0x16
              + 2 * (v12 / 0x16 + (((0x2E8BA2E8BA2E8BA3LL * (unsigned __int128)v12) >> 64) & 0xFFFFFFFFFFFFFFFCLL));
          v15 = v12++;
          *v13 ^= v18.m128i_u8[v15 - 2 * v14];
        }
        while ( v11 != v12 );
      }
      v5 = argv[1];
    }
    if ( *(_OWORD *)&v20 == *(_OWORD *)v5 && *(_OWORD *)&v21 == *((_OWORD *)v5 + 1) && *((_DWORD *)v5 + 8) == v22 )
    {
      v16 = 0;
      puts("Correct!");
    }
    else
    {
      v16 = 0;
      puts("Wrong...");
    }
  }
  return v16;
}