import numpy as np 
import matplotlib.pyplot as plt 

y = 0.0

for i in range(33,20,-1):
	y =(np.exp(1)-y)/i
print(y)