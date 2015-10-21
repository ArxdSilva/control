/*
 * 
  SimulatedEnv.java - Environment file for the 4WD vehicle chassis.
  Created by Lazarin, NM and Pantoja, CE - Jun 1, 2015.
  Presented in the 9th Software Agents, Environments and Applications School (WESAAC) - 2015. 
  
  In this example, the car distance from an object cannot be higher than 25cm, 
  because a percept with value 1000 is generated when the agent do not get a 
  percept from the environment. However, it can be changed.
  * 
*/

import jason.asSyntax.*;
import jason.environment.*;
import java.util.logging.*;

import br.pro.turing.javino.Javino;

public class controlcar extends Environment {


	private String percept = "distance(5)";
	private String msg = "50";
	private Javino jBridge = new Javino("/dev/com9", "c:\\cygwin64\\bin\\",200); //WINDOWS
	//private Javino jBridge = new Javino("/dev/ttyACM0", 200); //RASP
	/** Called before the MAS execution with the args informed in .mas2j */
	@Override
	public void init(String[] args) {
		super.init(args);
		this.jBridge.sendmsg("SONAR");
		//addPercept(Literal.parseLiteral("distance(1000)"));
	}

	@Override
	public boolean executeAction(String agName, Structure action) {
		
		if (action.toString().equals("refresh")) {
			this.clearPercepts();
			if (this.jBridge.availablemsg()) {
				this.msg = this.jBridge.getmsg();
			} 
			else {
				this.msg = "1000";
			}
			
			if (this.msg.equalsIgnoreCase("error")) {
				this.msg = "1000";
			}
			
			addPercept(Literal.parseLiteral("distance(" + this.msg + ")"));
			System.out.println("Percept: " + this.msg);
			logger.info("running refresh.");
		}

		if (action.toString().equals("moveFront")) {
			this.clearPercepts();
			this.percept = "front"; 
	        this.jBridge.sendmsg("MOVE");
			logger.info("sending FRONT to Javino.");
		}
		
		if (action.toString().equals("moveLeft")) {
			this.clearPercepts();
			this.percept = "left";
			this.jBridge.sendmsg("LEFT");
			logger.info("sending LEFT to Javino.");
		}

		if (action.toString().equals("stop")) {
			this.clearPercepts();
			this.percept = "stop";
			this.jBridge.sendmsg("STOP");
			logger.info("sending STOP to Javino.");
		}
		
		return true;
	}

	/** Called before the end of MAS execution */
	@Override
	public void stop() {
		this.jBridge.sendmsg("NOSONAR");
		super.stop();
	}
}
