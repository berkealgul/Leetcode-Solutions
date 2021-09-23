/*
 * @lc app=leetcode id=917 lang=c
 *
 * [917] Reverse Only Letters
 */

// @lc code=start
bool isCharacter(char c)
{
    if((64 < c  && c < 91) || (c < 123 && 96 < c))
        return true;
    else
        return false;
}

char * reverseOnlyLetters(char * s){
    int n;
    for (n = 0; s[n]; n++);
    int i = 0;
    
    n--;
    
    if(n < 1)
        return s;
    
    
    
    while(i < n)
    {
        printf("-- %d-%d %c-%c --", n,i, s[n], s[i]);
        
        bool endIsCharacter = isCharacter(s[n]);
        bool beginIsCharacter = isCharacter(s[i]);
        

        
        if(endIsCharacter && beginIsCharacter)
        {
            char c = s[n];
            s[n] = s[i];
            s[i] = c;
            i++;
            n--;
        }
        else
        {
            if(!endIsCharacter) { n--; }
            if(!beginIsCharacter) { i++; }            
        }
        

    }
    
    return s;
}

// @lc code=end

