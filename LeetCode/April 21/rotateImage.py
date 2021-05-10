def rotate(matrix):
    i = 0
    while i < len(matrix) - 1:
        j = i+1
        x = i+1
        while j < len(matrix):
            matrix[i][j], matrix[x][i] = matrix[x][i], matrix[i][j]
            x+=1
            j+=1
        
        i+=1

    for i in matrix:
        j = 0
        k = len(matrix) - 1
        while j < k:
            i[k], i[j] = i[j], i[k]
            j+=1
            k-=1

    print(matrix)
        




rotate([[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]])