include <Arduino_OpenSCAD_mounting_library_(v2.0)\arduino.scad>
module roundedcube(xdim ,ydim ,zdim,rdim)
{
    hull(){
        translate([rdim,rdim,0])cylinder(h=zdim,r=rdim);
        translate([xdim-rdim,rdim,0])cylinder(h=zdim,r=rdim);
        translate([rdim,ydim-rdim,0])cylinder(h=zdim,r=rdim);
        translate([xdim-rdim,ydim-rdim,0])cylinder(h=zdim,r=rdim);
    }
}
module board_face()
{
    roundedcube(200,120,18,3);
}
module arduinohole()
{
    cylinder (h=20, r=(3.2/2));
} 
module leg()
{
    roundedcube(18,120,30,3);
}
module led_top()
{
    cylinder(h=3,r=3.2);
}
module button_top()
{
    cylinder(h=3,r=3.6);
}    
module button_bottom()
{
    cylinder(h=15,r=5);
}    
module button()
{
    translate([0,0,15])button_top();
    translate([0,0,0])button_bottom();
}
module led()
{
    translate([0,0,15])led_top();
    translate([0,0,0])button_bottom();
}
module cutaway()
{
    cube([200,120,18],center=true); //Used to taper off the edges of the top surface slightly
}
module board()
{
    difference()
    {
        board_face();
        translate([175,60,0]) button();//Right arrow
        translate([125,60,0]) button();//Left Arrow
        translate([150,85,0]) button();//Up Arrow
        translate([150,35,0]) button();//Down Arrow
        translate([150,105,0]) button();//Page Up
        translate([150,15,0]) button();//Page Down
        translate([25,105,0]) button();// Escape
        translate([125,100,0]) button();//4 (Tone)
        translate([100,100,0]) button();//3 (Tone)
        translate([75,100,0]) button();//2 (Tone)
        translate([50,100,0]) button();//1 (Tone)
        translate([25,15,0]) button();//Ctrl
        translate([50,15,0]) button();//Alt
        translate([75,15,0]) button();//Del
        translate([25,60,0]) button();//Tab
        translate([100,35,0]) button();//Space 
        translate([175,15,0]) button();//+
        translate([150,60,0])button();//Enter
        
        translate([100,60,0])led();
        
        translate([41.5,77,0]) arduinohole();
        translate([90,78,0]) arduinohole();
        translate([56.6,25.75,0]) arduinohole();
        translate([85,25.75,0]) arduinohole();
    }
    translate([182,0,-30]){
        leg();
    }    

    translate([0,0,-30]){
        leg();
    }   
}
$fn=64;
difference(){
    board();
    translate([100,-30,0]) rotate(45,[1,0,0]) cutaway();
    translate([100,150,0]) rotate(135,[1,0,0]) cutaway();
    translate([-30,60,0]) rotate(135,[0,1,0]) cutaway();
    translate([230,60,0]) rotate(45,[0,1,0]) cutaway();
}