# FileIO
## Algorithm 
```
Initialize an ifstream file pointer
Initialize a stringstream object
Initialize several string variables, Int: IntA and IntB 

If file is opened: 
    Loop through each line of the code
    for each line: 
        use stringstream to read line
        read until first coma, put into IntA 
        read until second coma, put into IntB 
        read rest of the the line and store the rest as text.
        clear the rest of the stringstream 
        add IntA and IntB to stringstream and seperate by a space
        read values and send them back as integers
        add the integers together 
        Use a loop to print the text that many times 
    After Loop is finished, close the file.
``` 
