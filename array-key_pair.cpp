class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    
	    int flag=0;
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            if(x=(arr[i]+arr[j])){
	                flag=1;
	                break;
	            }
	        }
	    }
	    return flag;
	}
};
