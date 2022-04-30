<?php
function generateRandomValues($seed, $iter) {
    mt_srand($seed, MT_RAND_PHP);
    $rand_values = array();
    for ($i = 0; $i < $iter; $i++) {
        $rand = mt_rand();
        if ($i >= $iter - 3) {
            array_push($rand_values, $rand); 
        }
    }
    return $rand_values;
}

function generatePasswordResetToken($seed, $iter) {
    $rand_values = generateRandomValues($seed, $iter);
    $concat = implode("", $rand_values);
    return sha1($concat);
}

function getMaxInt() {
    return pow(2, 24);
}

function getMaxIteration($sessiontime) {
    $max = getMaxInt();
    mt_srand($sessiontime, MT_RAND_PHP);
    $nb1 = mt_rand() % $max;
    $nb2 = mt_rand() % $max;
    return max($nb1, $nb2);
}

echo generatePasswordResetToken(4569936,getMaxIteration(1643602256));



?>
