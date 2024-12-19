/*
In DNA strings, symbols "A" and "T" are complements of each other, as "C" and "G". Your function receives one side of the DNA (string, except for Haskell); you need to return the other complementary side. DNA strand is never empty or there is no DNA at all (again, except for Haskell).

Example: (input --> output)
"ATTGC" --> "TAACG"
"GTAT" --> "CATA"
*/

#include <iostream>
#include <string>

// Solucion
std::string DNAStrand(const std::string& dna)
{
  std::string output;
  for(int x=0; dna.size()>x; x++){
    switch(dna[x]){
        case 'A':
         output += 'T';
         break;
        case 'T':
         output += 'A';
         break;
        case 'C':
         output += 'G';
         break;
        case 'G':
         output += 'C';
         break;
    }
  }
  return output;
}

// Test
int main() {
    std::string dna = "ATTGC";
    std::string complement = DNAStrand(dna);
    std::cout << "Cadena de DNA Original: " << dna << std::endl;
    std::cout << "Cadena de DNA Complementaria: " << complement << std::endl;
    return 0;
}
