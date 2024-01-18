char *__fastcall sub_127E(char *input)
{
  int input_1; // edx
  char *result; // rax
  __int16 wide; // [rsp+Ch] [rbp-Ch]
  int i; // [rsp+10h] [rbp-8h]
  int j; // [rsp+14h] [rbp-4h]

  input_1 = input[1] << 8;
  result = (char *)(input_1 | (unsigned int)*input);
  wide = input_1 | *input;
  for ( i = 0; i <= 15; ++i )
  {
    for ( j = 0; j <= 7; j += 2 )
    {
      wide = rol16(
               (unsigned __int16)(((input[((_BYTE)j + 3) & 7] << 8) | (unsigned __int8)input[((_BYTE)j + 2) & 7])
                                + (wide ^ word_4020[2 * (j / 2)])),
               12);
      input[((_BYTE)j + 2) & 7] = wide;
      result = &input[((_BYTE)j + 3) & 7];
      *result = HIBYTE(wide);
    }
  }
  return result;
}