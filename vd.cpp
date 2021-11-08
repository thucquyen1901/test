 #include <iostream>
using namespace std;
class bai2
{
	public:
		int a[100][100];
		int n=0;
	public:
		bai2()
		{
			int n;
            cin>>n;
            A.getn(n);A.nhap();
            B.getn(n);B.nhap();
            cout<<"Ma tran A vua nhap:\n";
            A.hien();
            cout<<"Ma tran B vua nhap:\n";
            B.hien();
            C=A+B;
    cout<<"Ma tran ket qua:\n";
    C.hien();
			nhap(n);
			xuat(n);
		}
		~bai2()
		{
			cout << "Doi tuong da bi huy" << endl;
		}
		int getn(int n)
        {
            return n;
        }
};
std::istream &operator >>(std::istream &in, string &a){
    cout<<" "; in>>a;
    return in;
}
std::ostream &operator <<(std::ostream &out,std::string a){
    out<<a<<endl;
    return out;
}
void bai2::nhap(int n)
{
    cout<<"Nhap vao cac gia tri trong mang:\n";
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
}
void bai2::xuat(int n)
{
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<"a["<<i<<"]["<<j<<"]="<<a[i][j]<<"\t";
            }
        cout<<"\n";
        }
}
main()
{
    bai2 A,B,C;
    
}
