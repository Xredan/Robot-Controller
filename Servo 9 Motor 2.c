#pragma config(Motor,  port2,           rightMotor,    tmotorNormal, openLoop, reversed)
#pragma config(Motor,  port3,           leftMotor,     tmotorNormal, openLoop)

task main(){
    while(1 == 1){
    	if (vexRT[Ch3] < 0){
    		backward(vexRT[Ch3]);
   		}
  		else{
  			forward(vexRT[Ch3]);
			}
  	  motor[leftMotor]  = vexRT[Ch4];   // Left Right
  	  motor[rightMotor] = vexRT[Ch3];   // Up Down
  }
}
