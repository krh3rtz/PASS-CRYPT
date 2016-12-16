# PASS-CRYPT
Password Crypter.

Sometimes, it is necessary to keep our credentials in secret, yet we all know that keeping this info in a 
computer is not always a good idea. In this case we can a use "PASS-CRYPT". This tool is intended to be used a 
crypter of plain text. This is accomplished by using several algorithms that will generate a key, which 
will then be used to "obf" the text.

To keep the integrity of data, and somehow avoid password cracking, there are several variables that can be
modified in order to have complete control of them throughout the process of key generation. Those variables are:

    key:	The key provided by the user (completely randomized in lengh and characters).
   
    By:	    This is a number completely necessary for the process of key generation.
    
    A:	    Times to generate a routine (more info in the fi function in "lib/cr.h"). 
    
    B: 	    Key length.
    
    C:	    More info in "lib/cr.h" file.
    
OPTIONS:

    Crypt:   	    Crypts all the data included in the "hello.txt".

    Decrypt: 	    Generates a "decrypted.txt" file with the original plain text from the "hello.txt" file.

    Instructions:	Opens this info-file.

    Exit:		.



FILES BREVIARY:

    hello.txt:	    File tha contains the original text to encrypt.

    obf.txt:	    TXT containing the crypted text.

    decrypted.txt:	File containing the uncrypted plain text.
 
Disclaimer: Keep all the passwords in a safe place. By studying the code, you can have complete control of the
            key generation process. Use asscii characters only.
             
You can also crypt entire texts.

By: Krhertz.
