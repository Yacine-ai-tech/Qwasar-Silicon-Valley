import pandas as pd


def my_pandas_journey_rename_columns(param_1, param_2, param_3):
    param_1.rename(columns = {param_2:param_3}, inplace = True)
    return param_1