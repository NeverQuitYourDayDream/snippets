# string operations

def is_rot(s1, s2):
    # is s2 a rotation of s1?
    s1 = s1 + s1
    if s2 in s1:
        return True
    return False
    
    # one-liner
    # return s2 in (s1+s1)

def is_anagram(s1, s2):
    # is s2 an anagram of s1?
    # python sorts strings lexicographically 
    s1 = sorted(s1)
    s2 = sorted(s2)
    return s1 == s2

def is_palindrome(s):
    # is s a palindrome?
    return s == s[::-1]

def cyclic_shift(s1, s2):
    # is s2 a cyclic shift of s1?    
    for i in range(len(s1))):
        s2 = s2[1:] + s2[0]
        if s2 in s1:
            return True
    return False
