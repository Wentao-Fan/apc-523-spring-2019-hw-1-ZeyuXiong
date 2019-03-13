import numpy as np 
import matplotlib.pyplot as plt 

x = np.linspace(0.2,1,1001)
plt.plot(x,np.exp(x)/x)
plt.plot(x,x/(np.exp(x)-1))
plt.xlabel("x")
plt.ylabel("conditions")
plt.title("blue line = cond A; read line = cond f")
plt.show()