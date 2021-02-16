/*
 * Simple hello program that prints the architecture that it is running on.
 */
#include <stdio.h>
#include <stdlib.h>
 
#ifndef ARCH
#define ARCH "Undefined"
#endif  

int main() {
  printf("Hello, I am a container running on architecture\n%s", ARCH);
  exit(0);
}