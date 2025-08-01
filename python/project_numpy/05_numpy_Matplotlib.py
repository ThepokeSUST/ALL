
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd

#dictionary
data = {
      
      "name": ["A","B","C","D"],
      "mrp": [12,23,34,45],
      "weight": [100,2000,300,400]
}

print(type(data))

dataframe= pd.DataFrame(data)

plt.plot(dataframe["name"],dataframe["weight"])
plt.show()