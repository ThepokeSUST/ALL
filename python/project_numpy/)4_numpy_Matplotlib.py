import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
plt.style.use("dark_background")
# print(np.pi)
# print(np.sin(np.pi/2),np.sin(np.pi/6))

# x=np.arange(1,11)
# y= np.arange(10,110,10)

# plt.figure(figsize=(6,6))
# plt.plot(x,y,'r--')
# plt.show()


# xax= np.arange(1,11,1)
# print(xax)
# yax=np.arange(1,100,10)
# print(yax)
# plt.plot(xax,yax)
# plt.show()


dataFrame = pd.DataFrame( 
    {
        "bat":["A","B","C","D"],
        "MRP":[100,200,300,400],
        "weight":[40,30,20,10]
    }
)

plt.plot(dataFrame["MRP"],dataFrame["weight"])
plt.show()
