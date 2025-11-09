def my_roman_numerals_converter(param1):
    n_numbers = [1,4,5,9,10,40,50,90,100,400,500,900,1000]
    r_numerals = [ "I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"]
    i = 12
    roman = ''
    while param1 != 0:
        if n_numbers[i] <= param1:
            roman  += r_numerals[i]
            param1 = param1 - n_numbers[i]
        else:
            i -= 1
    return roman
    
