import os
import numpy as np
import matplotlib.pyplot as plt


a = os.system("g++ funcion.cpp -o f")
a = os.system("./f > data.txt")

datos=np.loadtxt("data.txt")
plt.hist(datos, bins=40)
plt.grid(True)
plt.tittle('')
plt.savefig("Ej22.png")