class BrowserHistory {
   URL headUrl;
    URL currentUrl;

    public BrowserHistory(String homepage) {
        this.headUrl = new URL(homepage);
        this.currentUrl = this.headUrl;
    }
    
    public void visit(String url) {
        URL tmpUrl = currentUrl;
        currentUrl.nextUrl = new URL(url);
        currentUrl = currentUrl.nextUrl;
        currentUrl.prevUrl = tmpUrl;
    }
    
    public String back(int steps) {
        while(currentUrl.prevUrl!=null && steps-->0){
            currentUrl = currentUrl.prevUrl;
        }
        return currentUrl.urlString;
    }
    
    public String forward(int steps) {
        while(currentUrl.nextUrl!=null && steps-->0){
            currentUrl = currentUrl.nextUrl;
        }
        return currentUrl.urlString;
    }
    
    class URL{
        URL prevUrl;
        URL nextUrl;
        String urlString;
        
        public URL(String _urlString){
            this.urlString = _urlString;
        }
    }
}


/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory obj = new BrowserHistory(homepage);
 * obj.visit(url);
 * String param_2 = obj.back(steps);
 * String param_3 = obj.forward(steps);
 */