**Problem:**  

**Write a Cholesky factorization program and test it by solving the following problem :**  
  0.05x1 + 0.07x2 + 0.06x3 + 0.05x4 = 0.23  
  0.07x1 + 0.10x2 + 0.08x3 + 0.07x4 = 0.32  
  0.06x1 + 0.08x2 + 0.10x3 + 0.09x4 = 0.33  
  0.05x1 + 0.07x2 + 0.09x3 + 0.10x4 = 0.31  

**Solution:**  

For Cholesky we need the lower triangular matrix and then we calculate the transpose of the lower
triangular matrix to satisfy the condition A = LLT. After calculating the transpose, we compute LZ = b
and UX =Z to calculate the values of X.

**The program returns the below values:**

**Lower Triangular matrix:**  

  0.223607   0.000000  0.000000  0.000000  
  0.313050   0.044721  0.000000  0.000000  
  0.268328  -0.089443  0.141421  0.000000  
  0.223607  -0.000000  0.212132  0.070711  

**Transpose of lower triangular matrix:**  
  0.223607 0.313050 0.268328 0.223607  
  0.000000 0.044721 -0.089443 -0.000000  
  0.000000 0.000000 0.141421 0.212132  
  0.000000 0.000000 0.000000 0.070711  

  X1= 1.0  
  X2= 1.0  
  X3= 1.0  
  X4= 1.0  
