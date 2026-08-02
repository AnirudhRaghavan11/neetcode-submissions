class Solution:

    def encode(self, strs):
        """Encodes a list of strings to a single string."""
        enStr = ""
        for s in strs:
            # Append each string's length and a delimiter '#' before the string itself.
            enStr += str(len(s)) + "#" + s
        return enStr

    def decode(self, s):
        """Decodes a single string to a list of strings."""
        decList, i = [], 0
        while i < len(s):
            # Find the next '#' to determine the next string's length.
            j = s.find('#', i)
            length = int(s[i:j])
            # Extract the string of that length.
            decList.append(s[j+1 : j+1+length])
            # Move the index past this string.
            i = j+1+length
        return decList
