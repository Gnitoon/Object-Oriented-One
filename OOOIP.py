class One:
    def __init__(self):
        self.one = 1

    """ 
     * @description set one to desired value. Value must be '1'
     * @param {Number} newOne one
     * @example setOne(1) -> 1
     """
    def setOne(self, newOne):
        if(type(newOne) != int or newOne != 1):
            raise ValueError("Value must be 1")
            return
        else:
            self.one = newOne
            return self.one

    """
     * @description get actual one
     """
    def getOne(self):
        return self.one

# use
i = One()
print(i.getOne() + 1)

# ...
i.setOne(2)
