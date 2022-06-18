class WordFilter {
    HashMap<String, Integer> map = null;
    // O(N*l*l)
    public WordFilter(String[] words) {

        map = new HashMap<>();

        int index=0;
        for(String word: words){
            for(int i=0;i<=word.length();i++){
                for(int j=0;j<=word.length();j++){
                    String prefixAndSuffix = word.substring(0, i) + "#" + word.substring(j);

                    map.put(prefixAndSuffix, index);


                }
            }
            index++;
        }
    }

    // O(1)
    public int f(String prefix, String suffix) {
        String queryStr = prefix + "#" + suffix;
        return map.getOrDefault(queryStr, -1);
    }
}