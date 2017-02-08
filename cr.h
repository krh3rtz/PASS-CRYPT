/*
 cr.h: This file contains all the functions used in the crypter.
 
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

 Put this library in a "lib" folder before compilation.
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define A 15
#define B 25
#define C 7

unsigned int int_carac (char *cle, int size){

  unsigned int tot = 0;
  int i;
  int aux = 0;

  for (i = 0; i < size; i++){
        aux = *(cle + i);
        if (aux >= 32){
                tot = tot + aux;
                aux = 0;
        }
  }
  return tot;
}

unsigned int modul (unsigned int num_clav, int times){
  return num_clav % times;
}

unsigned int fi (unsigned int modul){

  unsigned int res = 0;
  int i;

  for (i = 0; i < A; i ++){
        res = (modul - 1) + modul;
        modul++;
  }
  return res;
}

void crypt(unsigned int llav){
  int i;
  int carac;

  FILE  *arch, *nue;

  if ((arch = fopen ("hello.txt","r")) != NULL){
	if ((nue = fopen ("obf.txt","a")) != NULL){
		  }else {
        		perror ("Error:");
        		exit(-1);
        		}

	do{
		char temp;
		temp = fgetc(arch);
		carac = temp;
		if (carac > 8 && carac < 128){
			temp = temp + llav;
			fputc(temp, nue);
		}
        }while(!feof(arch));
	rewind (arch);
	rewind (nue);
	fclose (arch);
	fclose (nue);
  }else {
          FILE *hello;
	  printf ("The file 'hello.txt' doesn't exist or there was a problem while opening it.\nTherefore a new 'hello' file will be created so you can include\nyour text-to-crypt in it.\n\n");
          hello = fopen("hello.txt","w" );
          fclose (hello);
	  exit (-1);
	}
  system ("clear;echo 'done'");
}

void decrypt(unsigned int llav){
  int i;

  FILE  *arch, *nue;

  if ((arch = fopen ("obf.txt","r")) != NULL){
	if ((nue = fopen ("decrypted.txt","w")) != NULL){
  		}else {
        		perror ("Error:");
        		exit(-1);
        		}
	do{
		char temp;
		temp = fgetc(arch);
		temp = temp - llav;

		if(temp > 8 && temp < 128){
			fputc(temp, nue);
		}

        }while(!feof(arch));
	rewind (arch);
	rewind (nue);
	fclose (arch);
	fclose (nue);
  }else {
          FILE *hello;
	  printf ("The file 'hello.txt' doesn't exist or there was a problem while opening it.\nTherefore a new 'hello' file will be created so you can include\nyour text-to-crypt in it.\n\n");
          hello = fopen("hello.txt","w" );
          fclose (hello);
	  exit (-1);
	}
  system ("clear;echo 'done'");
}

unsigned int value (){

  char cle [B];
  char ti[C];
  int size , times;
  getchar();
  puts ("key: ");
  fflush (stdin);
  fgets (cle, B, stdin);
  size = strlen(cle) + 1;

  printf ("By: ");
  fflush (stdin);
  fgets (ti, C , stdin);
  times = atoi (ti);

  return fi (modul(int_carac (cle, size), times ));
}

void instruc(){
	system ("less README.md;");
}
