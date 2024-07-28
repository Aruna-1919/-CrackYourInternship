class Solution:
    def intToRoman(self, num: int) -> str:
        result=[("M",1000),("CM",900),("D",500),("CD",400),("C",100),("XC",90),("L",50),("XL",40),("X",10),("IX",9),("V",5),("IV",4),("I",1)]
        res_string=[]
        for sym,val in result:
            if num==0:
                break
            count=num//val
            num=num%val
            res_string.append(sym*count)
        return "".join(res_string)
        
