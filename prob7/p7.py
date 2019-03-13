import numpy as np 
import matplotlib.pyplot as plt 

p = np.zeros(21)
#p = np.zeros(21,dtype=int)
p[0] = -1
p[1] = 1

for i in range(2,21):
	p_temp = p[0:i]
	p[0:i+1] = np.block([-p_temp*i,np.array([0])]) + np.block([np.array([0]), p_temp])

p = p[::-1]
print(p)

print("root =",np.roots(p)[0])

delta = 1e-8
for i in range(4):
	p[0] = 1+delta
	print("root =", np.roots(p)[0])
	delta *= 100

p[0] = 1
p[1] = -210 - pow(2,-23)
print("root =",np.roots(p))


print("now printing condition numbers:")
p = p[::-1]
#l = np.arange(21)
for Omega in [14, 16, 17, 20]:
	cond = 0.0
	Omegal = 1.0
	dp = 0.0
	for l in range(21):
		cond += abs(p[l]*Omegal)
		dp += p[l]*l*Omegal
		Omegal *= Omega
	cond /= abs(dp)
	print(Omega, cond)
	#print(Omega)

