int minDifference(int arr[], int n)  { 
	    
	    int sum = 0;
	    for(int i=0;i<n;i++) sum += arr[i];
	    
        // Creating an boolean array for maxsum possible.
        // And putting that zero sum is possible.
	    bool poss[sum+1] = {0};
	    poss[0] = 1;
	    
        /*
            appending every element to the possible subset present
            upto now.
        */

	    for(int i=0;i<n;i++){
	        for(int j=sum;j>=0;j--){
	            if(poss[j])
	                poss[j + arr[i]] = 1;
	        }
	    }
	    
	    for(int i=sum/2;i>=0;i--){
	        if(poss[i])
	            return sum-2*i;
	    }
	    
	    return -1;
	} 