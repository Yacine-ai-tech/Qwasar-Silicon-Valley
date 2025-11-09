import csv
class MySelectQuery:
    def __init__(self,csv_content):
        # to read it as dictionary
        self.data=csv.DictReader(csv_content.splitlines())
    """for the where method we will first iterate over dictionnary end each time that the criteria 
    is among the values of colum_name key the row will appended to the container.
    then we will retrieve the dictionary inside the list and get its values which will be converted to a list for a serialization matter
    the line 14 is used to concatenate the items of the previous list into a string to meet the exercice requirements
    """
    def where(self,colum_name,criteria):
        container=[row for row in self.data if criteria in row[colum_name]]
        temp=list(container[0].values())
        result=','.join(item for item in temp)
        return [result] 