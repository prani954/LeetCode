class Solution(object):
    def pushDominoes(self, dominoes):
        """
        :type dominoes: str
        :rtype: str
        """
        N = len(dominoes)
        force = [0]*N

        temp = 0
        for i in xrange(N):
            if dominoes[i] == 'R': temp=N
            elif dominoes[i] == 'L': temp=0
            else: temp = max(temp-1, 0)
            force[i] += temp

        for i in xrange(N-1, -1, -1):
            if dominoes[i] == 'L': temp=N
            elif dominoes[i] == 'R': temp = 0
            else: temp = max(temp-1, 0)
            force[i] -= temp
        return "".join('.' if temp==0 else 'R' if temp>0 else 'L' for temp in force)

        