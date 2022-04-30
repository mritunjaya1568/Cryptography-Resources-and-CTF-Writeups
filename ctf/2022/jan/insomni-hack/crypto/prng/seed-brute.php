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

function generateSessionToken($seed, $iter) {
    $rand_values = generateRandomValues($seed, 3);
    $concat = implode("", $rand_values);
    return md5($concat);
}
$AppSessId = "8b40002c848551e3c0774113ab1bc7b7";
for ($i = 0; $i < pow(2,24); $i++) {
    if (generateSessionToken($i, 3) === $AppSessId){
        echo "Found seed: " . $i . "\n";
        break;
    }
    else
    {
    	echo $i ."\n";
    }
}




// seed = 4569936

?>