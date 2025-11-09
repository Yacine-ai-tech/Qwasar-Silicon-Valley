import numpy as np 
import pandas as pd 
from sklearn.metrics import r2_score


def my_model_evaluation_journey_r2_score(param_1, param_2):
    data1=pd.read_csv(param_1)
    data2=pd.read_csv(param_2)
    df_1=data1.iloc[:16, 1:5]
    df_2=data2.iloc[:16,1:5]
    return r2_score(df_1,df_2)

