import re
class Solution:
    def isValid(self, word: str) -> bool:
        regex = re.compile('[@_!#$%^&*()<>?/\|}{~:]')
        vowel = ['a', 'e', 'i', 'o', 'u']
        cnt1 = 0
        cnt2 = 0
        if len(word)<3:
            return False
        else:
            for ch in word.lower():
                if ch in vowel:
                    cnt1 += 1
                else:
                    if ch >='0' and ch <='9':
                        continue
                    else:
                        cnt2 += 1
            if cnt1>=1 and cnt2>=1 and regex.search(word) == None:
                return True
        return False