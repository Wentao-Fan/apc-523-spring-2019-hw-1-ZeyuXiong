import numpy as np 
import matplotlib.pyplot as plt 

x = np.linspace(1,10,1001)
y = np.linspace(1,10,1001)
for i in range(52):
	x = np.sqrt(x)

for i in range(52):
	x = x*x

plt.plot(y,x)
plt.xlabel("x")
plt.ylabel("fA(x)")
plt.show()