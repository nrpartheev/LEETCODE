def plusOne(self, digits: List[int]) -> List[int]:
    if digits==[]:
        return [1]
    if digits[-1]+1 == 10:
        digits = self.plusOne(digits[:len(digits)-1])
        digits.append(0)
    else:
        digits[-1]+=1
    return digits
        
