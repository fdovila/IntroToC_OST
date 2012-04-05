array[0] = 'a', array[1] = 'b', array[2] = 'c', array[3] = 'd', temp = ' '

array[0] = 'a', array[1] = 'b', array[2] = 'c', array[3] = ' ', temp = 'd'
3 to temp
2 to 3
array[0] = 'a', array[1] = 'b', array[2] = ' ', array[3] = 'c', temp = 'd'
1 to 2
array[0] = 'a', array[1] = ' ', array[2] = 'b', array[3] = 'c', temp = 'd'
0 to 1
array[0] = ' ', array[1] = 'a', array[2] = 'b', array[3] = 'c', temp = 'd'
temp to 0
array[0] = 'd', array[1] = 'a', array[2] = 'b', array[3] = 'c', temp = ' '
3 to temp
array[0] = 'd', array[1] = 'a', array[2] = 'b', array[3] = ' ', temp = 'c'
2 to 3
array[0] = 'd', array[1] = 'a', array[2] = ' ', array[3] = 'b', temp = 'c'
1 to 2
array[0] = 'd', array[1] = ' ', array[2] = 'a', array[3] = 'b', temp = 'c'
temp to 1
array[0] = 'd', array[1] = 'c', array[2] = 'a', array[3] = 'b', temp = ' '
3 to temp
array[0] = 'd', array[1] = 'c', array[2] = 'a', array[3] = ' ', temp = 'b'
2 to 3
array[0] = 'd', array[1] = 'c', array[2] = ' ', array[3] = 'a', temp = 'b'
temp to 2
array[0] = 'd', array[1] = 'c', array[2] = 'b', array[3] = 'a', temp = 'b'


array[0] = 'a', array[1] = 'b', array[2] = 'c', array[3] = 'd', temp = ' '

// i = size of the array
char array[] = {'a','b','c','d'};
char temp;
int i = 4;

for(t = 1; i = t; t++) {
	array[i]   = temp;       // 'a','b','c','d' temp = 'd'	
	array[i-t] = array[i];   // 'a','b','c','c' temp = 'd'
	
	array[i-2] = array[i-1]; // 'a','b','b','c' temp = 'd'
	
	array[i-i] = array[i-2]; // 'a','a','b','c' temp = 'd'
	temp       = array[i-i]; // 'd','a','b','c' temp = 'd'
	
}



                                     // 'a','b','c','d' temp = ' '
   array[i]     = temp;              // 'a','b','c',' ' temp = 'd'      <--STEP X
   array[i-1]   = array[i];          // 'a','b',' ','c' temp = 'd'      <--STEP Y
   array[i-2]   = array[i-1];        // 'a',' ','b','c' temp = 'd'      <--STEP Z

// array[i-n]   = array[i - (n-1)];  // 'a',' ','b','c' temp = 'd'      <--STEP 'n'

   array[i-i]   = array[i-2];  // ' ','a','b','c' temp = 'd'
   temp         = array[i-i];  // 'd','a','b','c' temp = 'd'

                            // 'd','a','b','c' temp = ' '
   array[i]     = temp;        // 'd','a','b',' ' temp = 'c'      <--STEP X
   array[i-1]   = array[i];    // 'd','a',' ','b' temp = 'c'      <--STEP Y
   array[i-2]   = array[i-1];  // 'd',' ','a','b' temp = 'c'      <--STEP Z

   temp         = array[i-2];  // 'd','c','a','b' temp = ' '

   array[i]     = temp;        // 'd','c','a',' ' temp = 'b'      <--STEP X
   array[i-1]   = array[i];    // 'd','c',' ','a' temp = 'b'      <--STEP Y
   temp         = array[i-1];  // 'd','c','b','a' temp = ' '      <--STEP Z




index arraysize to temp
index arraysize-1 to index arraysize
index arraysize-2 to index arraysize-1
temp    to index arraysize-2

index arraysize to temp
index arraysize-1 to index arraysize
temp    to index arraysize-1



                                     // 'a','b','c','d' temp = ' '
   array[i]     = temp;              // 'a','b','c',' ' temp = 'd'      <--STEP X
   array[i-1]   = array[i];          // 'a','b',' ','c' temp = 'd'      <--STEP Y
   array[i-2]   = array[i-1];        // 'a',' ','b','c' temp = 'd'      <--STEP Z

// array[i-n]   = array[i - (n-1)];  // 'a',' ','b','c' temp = 'd'      <--STEP 'n'

   array[i-i]   = array[i-2];  // ' ','a','b','c' temp = 'd'
   temp         = array[i-i];  // 'd','a','b','c' temp = 'd'

                            // 'd','a','b','c' temp = ' '
   array[i]     = temp;        // 'd','a','b',' ' temp = 'c'      <--STEP X
   array[i-1]   = array[i];    // 'd','a',' ','b' temp = 'c'      <--STEP Y
   array[i-2]   = array[i-1];  // 'd',' ','a','b' temp = 'c'      <--STEP Z

   temp         = array[i-2];  // 'd','c','a','b' temp = ' '

   array[i]     = temp;        // 'd','c','a',' ' temp = 'b'      <--STEP X
   array[i-1]   = array[i];    // 'd','c',' ','a' temp = 'b'      <--STEP Y
   temp         = array[i-1];  // 'd','c','b','a' temp = ' '      <--STEP Z













