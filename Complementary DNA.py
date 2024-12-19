''' 
In DNA strings, symbols "A" and "T" are complements of each other, as "C" and "G". Your function receives one side of the DNA (string, except for Haskell); you need to return the other complementary side. DNA strand is never empty or there is no DNA at all (again, except for Haskell).

Example: (input --> output)
"ATTGC" --> "TAACG"
"GTAT" --> "CATA"
'''

#Solucion
def DNA_strand(dna):
    # code here
    a = ""
    for i in dna:
        if i == "A":
            a += "T"
        elif i == "T":
            a += "A"
        elif i == "C":
            a += "G"
        elif i == "G":
            a += "C"
    return a

#Test
dna = "ATTGC"
print(DNA_strand(dna))