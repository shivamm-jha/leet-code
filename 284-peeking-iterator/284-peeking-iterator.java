// Java Iterator interface reference:
// https://docs.oracle.com/javase/8/docs/api/java/util/Iterator.html

class PeekingIterator implements Iterator<Integer> {
    Integer nextEl = null;
    Iterator<Integer> iter;
	public PeekingIterator(Iterator<Integer> iterator) {
	    // initialize any member here.
       iter= iterator;
        if(hasNext()){
            nextEl= iter.next();
        }
	    
	}
	
    // Returns the next element in the iteration without advancing the iterator.
	public Integer peek() {
        return nextEl;
	}
	
	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	@Override
	public Integer next() {
	    int curr_val = nextEl;
        
        if(iter.hasNext()){
            nextEl= iter.next();
            
        }
        else nextEl =  null;
        return curr_val;
        
	}
	
	@Override
	public boolean hasNext() {
	    return nextEl!= null || iter.hasNext();
	}
}
