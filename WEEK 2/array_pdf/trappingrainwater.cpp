class Solution {
public:
    int trap(vector<int>& height) {
        int w=0,h1,h2;
        for(int i=0;i<height.size();i++){
            h1=0;h2=0;
            for(int j=0;j<i;j++){
                if(h1<height[j])
                    h1=height[j];
            }
            for(int k=i+1;k<height.size();k++){
                if(h2<height[k])
                    h2=height[k];
            }
            if(h1>=h2&&h1!=0&&h2!=0){
               if(h2-height[i]>0)
                   w+=h2-height[i];
            }
            if(h2>h1&&h1!=0&&h2!=0)
                if(h1-height[i]>0)
                    w+=h1-height[i];
        }
        return w;
    }
};
