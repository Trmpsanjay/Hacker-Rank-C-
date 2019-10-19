
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle
{
    protected:
        int width,height;
    public:
        void display()
        {
            cout<<width<<" "<<height<<endl;
        }
};
class RectangleArea : public Rectangle
{
    protected:
    int area;
    public:
        void read_input()
            {
                cin>>width>>height;
            }
            void display()
            {
                area=width*height;
                cout<<area;
            }
};
