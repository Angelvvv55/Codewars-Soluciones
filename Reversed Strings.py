'''
Complete the solution so that it reverses the string passed into it.

'world'  =>  'dlrow'
'word'   =>  'drow'
'''

#Solucion
def solution(string):
    nstring = ""
    for i in string:
        nstring = i + nstring
    return nstring

#Test
string = "world"
print(solution(string))