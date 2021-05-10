def minDistance(word1, word2):
    l1 = len(word1)
    l2 = len(word2)
    count = 0
    j = 0
    i = 0
    if l1 > l2:
        big = word1
        small = word2
    else:
        big = word2
        small = word1
        
    while(j < l2 and i < l1):
        if big[i] == small[j]:
            j+=1
        else:
            j = 0
            count+=1

        i+=1

    count += (len(big) - len(small))
    return count



minDistance("sea", "eat")