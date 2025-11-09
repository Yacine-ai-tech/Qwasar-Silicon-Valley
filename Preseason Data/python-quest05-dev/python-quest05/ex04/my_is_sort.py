
def my_is_sort(lion):
    ASC = True
    DESC = True
    for i in range (1,len(lion)):
        if lion[i-1] < lion[i]:
            DESC = False
            break
    for i in range(1,len(lion)):
        if lion[i-1]> lion[i]:
            ASC = False
            break
    if ASC or DESC :
        return True
    else:
        return False