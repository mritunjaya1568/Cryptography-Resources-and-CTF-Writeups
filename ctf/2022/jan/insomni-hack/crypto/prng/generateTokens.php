<?php
class ResetPassword
{
static function GenerateToken()
{
return mt_rand();
}
}
$recovered_seed = 123;
mt_srand($recovered_seed,MT_RAND_PHP);
for($i= 0; $i< 32;$i++){
print(ResetPassword::GenerateToken() . "\n");
}
?>

