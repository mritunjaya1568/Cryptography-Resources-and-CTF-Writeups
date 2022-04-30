//Algorithm to  to Solve RSA 2 different Keys Same //CipherText
#include<stdio.h>
#include<gmp.h>

// Author:: Jaideep Katkar
int main()
{
    
    mpz_t x,y,zero,fiveT,one,nFiveT;
    mpz_t e1,e2,firstTerm,secondTerm,addedTerm,flag,sum,i,N;
    mpz_t c1,c2,c3,c4,p1,p2,p3,p4,p1_orig,p2_orig,p3_orig,p4_orig;
    mpz_init(x);
    mpz_init(N);
    mpz_init(i);
    mpz_init(sum);
    mpz_init(flag);
    mpz_init(firstTerm);
    mpz_init(secondTerm);
    mpz_init(addedTerm);
    mpz_init(y);
    mpz_init(e1);
    mpz_init(e2);
    mpz_init(zero);
    mpz_init(fiveT);
    mpz_init(one);
    mpz_init(nFiveT);

    mpz_init(p1);
    mpz_init(p2);
    mpz_init(p3);
    mpz_init(p4);
    mpz_init(p1_orig);
    mpz_init(p2_orig);
    mpz_init(p3_orig);
    mpz_init(p4_orig);

    mpz_init(c1);
    mpz_init(c2);
    mpz_init(c3);
    mpz_init(c4);
    mpz_set_str(c1, "74502", 0);
    mpz_set_str(c2, "265279", 0);
    mpz_set_str(c3, "87092", 0);
    mpz_set_str(c4, "22545", 0);

    mpz_set_str(e1, "123959", 0);
    mpz_set_str(e2, "219719", 0);
    mpz_set_str(zero, "0",0);
    mpz_set_str(fiveT, "50000",0);
    mpz_set_str(one,"1",0);
    mpz_set_str(nFiveT,"-50000",0);
   
    mpz_set_str(N,"434531",0);


   
   
    for(mpz_set(x,zero);mpz_cmp(x,fiveT)!=0;mpz_add(x,x,one)) //x=0;x<50000;x++
    {
    
   
        for(mpz_set(y,nFiveT); mpz_cmp(y,zero)!=0;mpz_add(y,y,one)) //b=-50000;b>0;b++
        {
            
            mpz_mul(firstTerm,e1,x);
            mpz_mul(secondTerm,e2,y);
            mpz_add(addedTerm,firstTerm,secondTerm);
            if(mpz_cmp(addedTerm,one)==0)
            //if(((123959*a) + (219719*b)) == 1) //e1*a +e2*b = 1
            {
                
                mpz_add(sum,x,y);
                gmp_printf("Euclidean Algorithm to find value of 'd' which will Decrypt the Ciphertext\n\n");
				gmp_printf("Using the Formula e1x + e2y = 1\n");
                gmp_printf("Value of x:: %Zd Value of y:: %Zd\n",x,y);
				gmp_printf("Value of Private Exponent 'd' :: %Zd\n\n", sum);

                break;
                mpz_set(flag,one);
            }
        }
        if(mpz_cmp(flag,one)==0)
            break;
        

    }
    

    
    gmp_printf("We now decrypt the Ciphertext into Plaintext using the d and formula: P=C^d mod N \n\n" );
    mpz_powm(p1_orig,c1,sum,N);
    gmp_printf("Ciphertext C1 :: %Zd and PlainText P1 :: %Zd\n", c1,p1_orig);
    mpz_powm(p2_orig,c2,sum,N);
    gmp_printf("Ciphertext C1 :: %Zd and PlainText P1 :: %Zd\n", c2,p2_orig);
    mpz_powm(p3_orig,c3,sum,N);
    gmp_printf("Ciphertext C1 :: %Zd and PlainText P1 :: %Zd\n", c3,p3_orig);
    mpz_powm(p4_orig,c4,sum,N);
    gmp_printf("Ciphertext C1 :: %Zd and PlainText P1 :: %Zd\n", c4,p4_orig);
	
    gmp_printf("Smallest value of 'd' which will decrypt the above Ciphertext to same Plaintext\n\n" );
    //now finding the smallest value of d
    for(mpz_set(i,one);mpz_cmp(i,sum)!=0;mpz_add(i,i,one)) //d-> 1 to sum//d=0;d<20039;d++
    {
        //for each of the values of d, apply the formula: p=C^d mod N
        mpz_powm(p1,c1,i,N);
        mpz_powm(p2,c2,i,N);
        mpz_powm(p3,c3,i,N);
        mpz_powm(p4,c4,i,N);

        if(mpz_cmp(p1_orig,p1)==0 && mpz_cmp(p2_orig,p2)==0 && mpz_cmp(p3_orig,p3)==0 && mpz_cmp(p4_orig,p4)==0)
        {
             gmp_printf("Value of smallest 'd' is: %Zd\n\n",i);
             break;
       
        }

       
    }
    return 0;

}