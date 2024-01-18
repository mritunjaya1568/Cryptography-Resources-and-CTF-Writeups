
  while ( inp[i] )
  {
    if ( check_range(inp[i]) )
    {
      inp[++j] = inp[i];
      goto INCREMENT_ITER;
    }
    if ( inp[i] == '(' )
      goto PUSH_TO_STACK;
    if ( inp[i] != ')' )
    {
      while ( !empty() )
      { 
        v3 = top();
        if ( get_precedence(inp[i]) > (int)get_precedence(v3) )
          break;
        inp[++j] = pop();
      }
PUSH_TO_STACK:
      push(inp[i]);
      goto INCREMENT_ITER;
    }
    while ( !empty() && top() != '(' )
      inp[++j] = pop();
    if ( !empty() && top() != '(' )
      return -1;
    pop();
INCREMENT_ITER:
    ++i;
  }
  while ( !empty() )
    inp[++j] = pop();
  inp[j + 1] = 0;
  return printf("%s", inp);