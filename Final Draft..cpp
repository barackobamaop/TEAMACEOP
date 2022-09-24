#include<iostream>
using namespace std;
class Meciahacks
{
public:
    float l,b,f;
    double area;
    void input()
    {
    cout<<"\n---------------------------";
    cout<<"\n Required length and breath";
    cout<<"\n---------------------------";
    cout<<"\n  Enter length of the building(in feet)=";
    cin>>l;
    cout<<"\n  Enter breath of the building(in feet)=";
    cin>>b;
    cout<<"\n Enter required floors=";
    cin>>f;
    area=l*b;
    cout<<"\n area of the building="<<area<<" sq.ft";
    }
public:
    double exv=3.5,e;
    void Excavation()
    {
        cout<<"\n-------------------------------------------";
        cout<<"\n Total Volume Excavated for Construction of building";
        cout<<"\n-------------------------------------------";
        e=exv*area;
        cout<<"\n Total volume required for Excavation=         "<<e<<" cubic ft";
    }
public:
    long double cem1=0.039,snd1=0.047,agr3=0.2690,c4,s4,a4;
    void RccCop()
    {
        cout<<"\n-------------------------------------------";
        cout<<"\n Total Material required for R.C.C Copping";
        cout<<"\n-------------------------------------------";
        c4=cem1*area;
        cout<<"\n Cement Required for R.C.C Copping=           "<<c4<<" bags";
        s4=snd1*area;
        cout<<"\n sand Required for R.C.C Copping=             "<<s4<<" cubic m";
        a4=agr3*area;
        cout<<"\n Aggregate Required for R.C.C Copping=        "<<a4<<" cubic m";
    }
public:
    long double cem=0.06,snd=0.005,agr=0.0135,c5,s5,a5;
    void PCC()
    {
        cout<<"\n-------------------------------------------";
        cout<<"\n Material required PCC work..";
        cout<<"\n-------------------------------------------";
        c5=cem*area;
        cout<<"\n Cement required for PCC work=                "<<c5<<" bags";
        s5=snd*area;
        cout<<"\n Sand required for PCC work=                  "<<s5<<" cubic m";
        a5=agr*area;
        cout<<"\n Aggregate required for PCC work=             "<<a5<<" cubic m";
    }
public:
    double fbw=1.1359,fn;
    void  FoundationBrickwork()
    {
       cout<<"\n--------------------------------------------";
       cout<<"\n Total Volume covered by bricks";
       cout<<"\n--------------------------------------------";
       fn=fbw*area;
       cout<<"\n Volume covered by brick for foundation=      "<<fn<<" cubic ft";
    }
public:
    double fili=2.034,f1;
   void Earthfilling()
   {
       cout<<"\n--------------------------------------------";
       cout<<"\n Total volume filled for construction of building...";
       cout<<"\n--------------------------------------------";
       f1=fili*area;
       cout<<"\n Total Volume of filling=                    "<<f1<<" cubic ft";
   }
public:
    long double Bricks=10.3,Cement=0.0275,sand=0.0065,b11,c6,s6;
    void wall()
    {
        cout<<"\n-------------------------------------------";
        cout<<"\n Material required for Construction of wall";
        cout<<"\n-------------------------------------------";
        b11=f*Bricks*area;
        cout<<"\n Bricks required for construction of wall=  "<<b11<<" bricks";
        c6=Cement*f*area;
        cout<<"\n cement required for construction of wall=  "<<c6<<" bags";
        s6=sand*f*area;
        cout<<"\n sand required for construction of wall=    "<<s6<<" cubic m";

    }
public:
    long double cement1=0.0152,sand1=0.0018,c7,s7;
    void plaster()
    {
        cout<<"\n-------------------------------------------";
        cout<<"\n Material required for Plaster Work";
        cout<<"\n-------------------------------------------";
        c7=cement1*f*area;
        cout<<"\n cement required for plaster=             "<<c7<<" bags";
        s7=sand1*f*area;
        cout<<"\n sand required for plaster=               "<<s7<<" cubic m";
    }
public:
     long double s=0.446,agr2=0.02508,iron=3,s8,a8,i8,cl=0.184,c8;
    void slab()
    {
        cout<<"\n-------------------------------------------";
        cout<<"\n Material required for R.C.C. Slab ";
        cout<<"\n-------------------------------------------";
        c8=f*cl*l*b;
        cout<<"\n cement required for slab=                "<<c8<<" bags";
        s8=f*s*l*b;
        cout<<"\n sand required for slab=                  "<<s<<" cubic m";
        a8=f*agr2*l*b;
        cout<<"\n aggregate required for slab=             "<<a8<<" cubic m";
        i8=f*iron*l*b;
        cout<<"\n iron required for slab=                  "<<i8<<" kg";
    }
public:
    long double conc=0.0457,c1=0.02,s2=0.0014,agr1=0.0024,iron1=0.65,con9,c9,s9,i9,a9;
    void Rcc()
    {
        cout<<"\n-------------------------------------------";
        cout<<"\n Material required for R.C.C Lintel";
        cout<<"\n-------------------------------------------";
        con9=f*conc*l*b;
        cout<<"\n concrete work required for R.C.C lintel=   "<<con9<<" cubic m";
        c9=f*c1*l*b;
        cout<<"\n cement required for R.C.C lintel=          "<<c9<<" bags";
        s9=f*s2*l*b;
        cout<<"\n sand required for R.C.C lintel=            "<<s9<<" cubic m";
        a9=f*agr1*l*b;
        cout<<"\n aggregate required for R.C.C lintel=       "<<a9<<" cubic m";
        i9=f*iron1*l*b;
        cout<<"\n iron required for R.C.C lintel=            "<<i9<<" kg";

    }
public:
    int o;
    long double cmn=0.02,Snd=0.28,tbt=0.08,fbf=0.04,c10,s10,t10,f10;
    void flooring ()
      {
       cout<<"\n --------------------------------------------";
       cout<<"\n FLOORING WORK.....";
       cout<<"\n --------------------------------------------";
       cout<<"\nPress 1)--->2X2";
       cout<<"\nPress 2)--->4X4";
       cout<<"\nPress any of the following for size of tile:";
       cin>>o;
       if(o==1)
       {
           t10=f*area*tbt;
        cout<<"Number of 2X2 boxes of tiles required for flooring="<<t10<<"boxes";
       }

       else if(o==2)
       {
           f10=f*area*fbf;
        cout<<"Number of 4X4 boxes of tiles required for flooring="<<f10<<"boxes";
       }
        c10=f*area*cmn;
        cout<<"\nAmount of cement required="<<c10<<"bags";
        s10=f*area*Snd;
        cout<<"\nAmount of sand required="<<s10<<"cubic m";
      }
public:
    double stl=60,cme=8,san=0.32,aggr=0.53,san1=0.45,cme1=4.75,ms=85;
    void StepsnPlasteringnRailing()
    {

        cout<<"\n-------------------------------------------";
        cout<<"\n STAIRCASE n PLASTERING n RAILING.....";
        cout<<"\n-------------------------------------------";
        cout<<"\nTotal amount of steel=    "<<f*stl<<"kg";
        cout<<"\nTotal amount of cement5=  "<<f*(cme+cme1)<<"bags";
        cout<<"\nTotal amount of sand=     "<<f*(san+san1)<<"cubic meter";
        cout<<"\nTotal amount of aggregate="<<f*aggr<<"cubic meter";
       cout<<"\nTotal amount of ms steel=  "<<f*ms<<"kg";
    }
public:
    long
     double color=0.00517;
    int hl=1,kt=1,lbd=12,lbt=7,lh=20,kl=10,kb=8,hg=10,b2,h=6,k=5,ba,bp,be,t,qwf,qdw;

    double bucks=0.00517,tq,aa,bb,cc,dd,ee;
    void Electricandpaint()
    {
        cout<<"\n Enter No. of bedroom=";
        cin>>bp;
        cout<<"\n Enter No. of Bathroom=";
        cin>>ba;
        be=ba*3;
        b2=bp*4;
        cout<<"\n points in Hall="<<h;
        cout<<"\n points in Bedroom="<<b2;
        cout<<"\n points in Kitchen="<<k;
        cout<<"\n points in Bathroom="<<be;
        t=b2+be+h+k;
        cout<<"\n Total point in the building="<<f*t<<"points";
        cout<<"\n-------------------------------------------";
        cout<<"\n PAINT WORK.....";
        cout<<"\n-------------------------------------------";
        aa=lbd*bp*hg*bucks;
        cout<<"\n Number of paint buckets needed for bedrooms="<<aa<<"buckets";
        bb=hg*ba*bucks*lbt;
        cout<<"\n Number of paint buckets needed for bathrooms="<<bb<<"buckets";
        cc=hg*hl*bucks*lh;
        cout<<"\n Number of paint buckets needed for Hall="<<cc<<"buckets";
        dd=hg*kt*bucks*kl;
        cout<<"\n Number of paint buckets needed for Kitchen="<<dd<<"buckets";
        ee=(hg*f*2*bucks*b)+(hg*f*2*bucks*l);
        cout<<"\n Number of paint buckets needed for exterior area="<<ee<<"buckets";

        tq=(aa+bb+cc+dd+ee)*f;
        cout<<"\n TOTAL NUMBER OF PAINT BUCKETS REQUIRED="<<tq<<"buckets";
        cout<<"\n-------------------------------------------";
        cout<<"\n Doors And Window...";
        cout<<"\n-------------------------------------------";
        cout<<"\n Total No. of doors ="<<f*(bp+ba+2);
        cout<<"\n Total No. of windows="<<f*(bp+ba+3);
        qwf=f*(bp+ba+2);
        cout<<"\n Total frames for door="<<f*(bp+ba+2);
        qdw=f*(bp+ba+3);
        cout<<"\n Total frames for window="<<f*(bp+ba+3);

     }
public:
    unsigned long int Q,B,C,A,I,Co,S,c0=355,a0=570,i0=65,s0=950,Cc,Cc1,Ss,Ss1,Aa,Aa1,Ii,Ii1,qdf;
    void Total()
    {
        cout<<"\n-------------------------------------------";
        cout<<"\n Total Costing of Material";
        cout<<"\n-------------------------------------------";
        B=b11*5;
        cout<<"\n bricks="<<B;
        Cc=(c4+c5+c6+c7)*c0;
        Cc1=Cc+(c9+c10+c8)*c0;
        C=Cc+Cc1;
        cout<<"\n Cement="<<C;
        Ss=s0*(s4+s5+s6+s7);
        Ss1=Ss+(s8+s9+s10)*s0;
        S=Ss+Ss1;
        cout<<"\n sand="<<S;
        Aa=a0*(a4+a5);
        Aa1=a0*(a8+a9);
        A=Aa+Aa1;
        cout<<"\n aggregate="<<A;
        Ii=i0*i8;
        Ii1=i0*i9;
        I=Ii+Ii1;
        cout<<"\n iron="<<I;
        Co=con9*870;
        cout<<"\n concrete="<<Co;
        Q=B+C+A+Co+I+S+(f*(stl+cme+cme1+san+san1+aggr+ms));
        cout<<"\n Total coasting of Material="<<Q<<" rs";
    }
public:
    unsigned long int tot,rcc;
    void Labour()
    {
        cout<<"\nTotal Labour cost for excavation=           "<<e*8<<"Rs";
        cout<<"\n Total Labour cost for PCC work=            "<<0.33*40*area<<"Rs";
        cout<<"\nTotal Labour cost for Foundation Brick Work="<<fn*23.75<<"Rs";
        cout<<"\nTotal Labour cost for Earth Filling=        "<<f1*11<<"Rs";
        cout<<"\nTotal Labour cost for RCC Copping=          "<<0.01*area<<"Rs";
        cout<<"\nTotal Iron Labour work in RCC Copping=      "<<26.161*area<<"Rs";
        cout<<"\nTotal cost of brick work=                   "<<f*11.67*area<<"Rs";
        cout<<"\nTotal cost of slab=                         "<<f*57*area<<"Rs";
        rcc=(unsigned long int)f*215*area;
        cout<<"\nTotal cost for RCC lintel=                  "<<rcc<<"Rs";
        cout<<"\n Total cost for plaster=                    "<<f*7*area<<"Rs";
        cout<<"\n Total cost for flooring=                   "<<f*20*area<<"Rs";
        cout<<"\n Total cost for electric wiring=            "<<f*780*t<<"Rs";
        cout<<"\n Total cost for colour=                     "<<f*tq*3000<<"Rs";
        cout<<"\n Total Labour work for colour=              "<<tq*70*87<<"Rs";
        tot=(unsigned long int)(e*8)+(0.33*40*area)+(fn*23.75)+(0.01*area)+(26.161*area)+(f*11.67*area)+(f*57*area)+(f*215*area)+(f*7*area)+(f*20*area)+(f*780*t)+(f*tq*3000)+(tq*70*87);
        cout<<"\n TOTAL LABOUR COST=Rs"<<tot;
        cout<<"\n PROJECT COSTING=Rs"<<tot+Q;
    }
};
int main()
{
   Meciahacks m;
   m.input();
   m.Excavation();
   m.Earthfilling();
   m.PCC();
   m.FoundationBrickwork();
   m.Rcc();
   m.wall();
   m.RccCop();
   m.plaster();
   m.flooring();
   m.Electricandpaint();
   m.StepsnPlasteringnRailing();
   m.Total();
   m.Labour();
}
