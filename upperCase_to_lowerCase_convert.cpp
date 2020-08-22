void upper_to_lower(string &str){
    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
}
