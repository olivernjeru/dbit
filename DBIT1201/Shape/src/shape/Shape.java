package shape;

class Shape {
    int length,width,base,height;
    double radius,perimeter,circumference,area;
    public Shape(){
        length=0;
        width=0;
        base=0;
        height=0;
        perimeter=0;
        radius=0.0;
        area=0.0;
        circumference=0.0;
    }
        public void setLength(int myLength){
            length = myLength;
        }
        public void setWidth(int myWidth){
            width = myWidth;
        }
        public void setBase(int myBase){
            base = myBase;
        }
        public void setHeight(int myHeight){
            height = myHeight;
        }
        
        public void setRadius(double myRadius){
            radius = myRadius;
        }
        public double cal_tArea(int b,int h){
            b=base;
            h=height;
            area=0.5*b*h;
            return area;
        }
        public double cal_rArea(int l, int w){
            l=length;
            w=width;
            area=l*w;
            return area;
        }
        public double cal_cArea(double r){
            r=radius;
            area=22/7*radius*radius;
            return area;
        }
    }

