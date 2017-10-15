/*
 * função auxiliar define parametro de comunicação
 * 
 * 
 * 
 * 
 * 
 */void pulseIR(long microsecs) {

 
cli();  // this turns off any background interrupts
 
while (microsecs > 0) {
// 38 kHz is about 13 microseconds high and 13 microseconds low
digitalWrite(IRledPin, HIGH);  // this takes about 3 microseconds to happen
delayMicroseconds(10);         // hang out for 10 microseconds
digitalWrite(IRledPin, LOW);   // this also takes about 3 microseconds
delayMicroseconds(10);         // hang out for 10 microseconds
 

microsecs -= 26;
}
 
sei();  // this turns them back on
}





