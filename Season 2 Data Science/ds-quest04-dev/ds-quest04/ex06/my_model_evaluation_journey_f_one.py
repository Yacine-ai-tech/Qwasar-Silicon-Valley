import numpy as np 
import pandas as pd 
from sklearn.metrics import f1_score




def my_model_evaluation_journey_f_one(param_1, param_2):
    return f1_score(np.array(param_1),np.array(param_2),average=None)