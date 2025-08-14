import numpy as np
import  pandas as pd

ser= pd.Series()
print(ser,type(ser))

data = np.array([12,3,4,5,6],dtype=str)
# data= np.array([[1,2],[3,4]])#not allowed in pandas series
print("numpy array of string:\n",data)
ser=pd.Series(data)
print("pandas series:\n", ser)