import matplotlib.pyplot as plt
import numpy as np

datos=np.loadtxt('onda.tx')


plt.figure()

plt.plt(onda[:,0], onda[:,1])
plt.plt(onda[:,0], onda[:,2])
plt.plt(onda[:,0], onda[:,3])
plt.plt(onda[:,0], onda[:,4])

plt.title('Evolucion Ecuacion de Onda')
plt.xlabel("x")
plt.ylabel("y")
plt.legend()

plt.savefig(graf_onda.png)
