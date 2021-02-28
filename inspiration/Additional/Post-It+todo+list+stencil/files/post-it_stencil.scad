$fn=64;
piSize=77;
difference(){
cube([piSize+4,piSize+4,3],true);
 for (i =[-4:4]){
    translate([-32,(i*7)-2,-2])cylinder(d=5,h=5);
    translate([2,(i*7),0]) cube([piSize-17,1.5,5],true);
 }
translate([0,0,1])cube([piSize,piSize,3],true);
 };