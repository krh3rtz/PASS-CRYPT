/*
  PASS-CRYPT

 * Author Krhertz 2016
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib/cr.h"

int main (int argc, char *argv[]){

  int opt;
  char opti[2];
  system ("clear");

  do{
    printf ("*** PASS-CRYPT ***\nChoose an option: \n1) Crypt\t2) Decrypt\t3) Instructions\t4)exit\n");
    fflush (stdin);
    fgets (opti, 2, stdin);
    opt = atoi(opti);

    switch(opt){
          case 1: crypt(value ()) ;break;
          case 2: decrypt(value ()); break;
          case 3: instruc(); break;
          default: system ("clear");
		   if (opt != 4)
		       	puts ("Choose a correct option.");
		   break;
    }
  }while(opt != 4);

  printf ("\n\nBe Low Key...\n\nBy Krhertz.\n\n");
  return 0;
}
