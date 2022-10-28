/* package Main; // don't place package name! */

// import java.util.*;
// import java.lang.*;
// import java.io.*;
import java.util.Scanner;

/* Name of the class has to be "Main" only if the class is public. */
public class Main
{




        public static char[][] transform(final char[] array, final int n) {
        final char[][] array2 = new char[n][n];
        // row by row 
        for (int i = 0; i < n * n; ++i) {
            array2[i / n][i % n] = array[i];
        }
        return array2;
    }

            public static String encrypt(final char[] array, final int n) {
        // data[12] -> [0,12)
        final char[] data = new char[6 * 2];
        // n2 = 5
        int n2 = 6 - 1;
        // length = 6
        int length = 6;
        // ????
        for (int i = 0; i < 6 * 2; ++i, ++i) {
            // data[0] = ARRAy[5] , n2 = 4 , data[2] = array[4] , n2 = 3 
            data[i] = array[n2--];
            data[i + 1] = array[length++];
        }
        // System.out.println((char)n);
        System.out.println("printing lines");
        System.out.println(data);
        
        for (int j = 0; j < 6 * 2; ++j) 
        {
            // create a new array from data named array2
            final char[] array2 = data;
            // // Doesn't copy elements of a[] to b[], only makes
            // b refer to same location
            // b = a;
            final int n3 = j;
            // data = xor(data , n)
            array2[n3] ^= (char)n; 
        }


        return String.valueOf(data);
    }

        public static char[] getArray(final char[][] array, final int n, final int n2) {
        // [0,12)
        System.out.println("in get array function");
        final char[] array2 = new char[6 * 2];
        int n3 = 0;
        // nth row of array to array2 half
        for (int i = 0; i < 6; ++i) {
            array2[n3] = array[n][i];
            ++n3;
        }
        // reverse of n2 row to array2 next half
        for (int j = 0; j < 6; ++j) {
            array2[n3] = array[n2][6 - 1 - j];
            ++n3;
        }
        return array2;
    }
    public static void functor(final String s)
    {
        final char[][] transform = transform(s.toCharArray(), 6);
                for (int i = 0; i <= 6 / 2; ++i) {
            // i = 0 -> j =[0,5) , i =1 -> j =[0,3) , i = 2 -> j = [0,1) , i =3 -> will not run 
            for (int j = 0; j < 6 - 2 * i - 1; ++j) 
            {
                final char c = transform[i][i + j];
                transform[i][i + j] = transform[6 - 1 - i - j][i];
                transform[6 - 1 - i - j][i] = transform[6 - 1 - i][6 - 1 - i - j];
                transform[6 - 1 - i][6 - 1 - i - j] = transform[i + j][6 - 1 - i];
                transform[i + j][6 - 1 - i] = c;
            }
            // for(i=0;i<6;i++)
            // {
            //     for(int j=0;j<6;j++)
            //     {
            //         System.out.print(transform[i][j]);
            //     }
            //     System.out.println();
            // }

            // System.out.println(transform);
            // System.out.println(encrypt(getArray(transform, 0, 5),2));
            // System.out.println(encrypt(getArray(transform, 1, 4),1));
            // System.out.println(encrypt(getArray(transform, 2, 3),0));

            System.out.println(encrypt(getArray(transform, 0, 5),2));
            System.out.println(encrypt(getArray(transform, 1, 4),1));
            System.out.println(encrypt(getArray(transform, 2, 3),0));




                                                            }
    }
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here -> 'abcdefghijklmnopqrstuvwxyz0123456789'
        functor("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    }
}
// mx_yP_1n__@!
// 41dr7N5uM32D
// tr3c10_F4TD2

// 'mx_yP_1n__@!41dr7N5uM32Dtr3c10_F4TD2'








