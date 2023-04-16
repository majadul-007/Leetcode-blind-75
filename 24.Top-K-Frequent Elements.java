

class Solution {
    public int[] topKFrequent(int[] nums, int k) {

//create bucket list

        List<Integer>[] bucket = new List[nums.length + 1];

// frequency map to store the frequency of each nums
		Map<Integer, Integer> fMap = new HashMap<>();


//loop through nums
		for(int n:nums){


//put frquency for each keys and increase by number times it present in index

			fMap.put(n, fMap.getOrDefault(n, 0)+1);
		}


//loop through key in fMap
		for(int key: fMap.keySet()){

			int fre = fMap.get(key);

//check if bucket index is null then create new arraylist
			if(bucket[fre] == null){

				bucket[fre] = new ArrayList<>();
			}
//else add the key by bucket index          

			bucket[fre].add(key);

		}

//res array for storing the k most frequent elements
		int[]  res = new int[k];


		int count = 0;


//start loop from last of bucket length to get the most frequent number
		for(int pos = bucket.length-1; pos >=0 && count <k; pos--){

			if(bucket[pos] != null){

				for(Integer val: bucket[pos]){

					res[count++] = val;
				}
			}
		}

		return res;
        
    }
}