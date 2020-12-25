# Date created : 25-12-2020
# Author : Ayush Gupta
# Ramanujan-Sato series (refer to README.md or series-image.png for the formula)

from math import sqrt
from math import factorial

# pi = {n*sk}^{-1}
n = sqrt(8)/(99**2)
sk = 0

for k in range(5):
    sk += ((factorial(4*k))/(factorial(k)**4))*((26390*k+1103)/(396**(4*k)))
    
pi = 1/(n*sk)
print("Python pi = ",str(pi),end="")