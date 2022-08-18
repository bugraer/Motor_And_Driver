 
 Bs=180;
 Br=180;
 P=1;
 Q1 = 1/2*((2*180)-(Bs+Br));
 Q2 = Q1+Br;
 Q3 = Q2+(Br-Bs);
 Q4 = Q3-Bs;
 Q5 = Q4-Q1;
 
x = 0:1:20;
y=[0 Q1 Q2 Q3 Q4 Q5 Q1 Q2 Q3 Q4 Q5 Q1 Q2 Q3 Q4 Q5 Q1 Q2 Q3 Q4 Q5];

plot(x,y)
xlabel('rotor konumu')
ylabel('enduktans')
title('ARM')
grid on
hold on

