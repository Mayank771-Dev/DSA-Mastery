class Solution(object):
    def areaOfMaxDiagonal(self, dimensions):
        maxindex = 0
        maxdiagonal = 0

        for i in range(len(dimensions)):
            diagonal = dimensions[i][0]**2 + dimensions[i][1]**2

            if diagonal > maxdiagonal:
                maxindex = i
                maxdiagonal = diagonal

            elif diagonal == maxdiagonal:
                area = dimensions[i][0] * dimensions[i][1]
                maxarea = dimensions[maxindex][0] * dimensions[maxindex][1]

                if area > maxarea:
                    maxindex = i

        return dimensions[maxindex][0] * dimensions[maxindex][1]
        