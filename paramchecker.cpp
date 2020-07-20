bool bpmcheck(float bpm){ 
  return(bpm < 70 || bpm > 150);
}
bool spo2check(float spo2){
return (spo2 < 80);
}
bool respRatecheck(float respRate){
return (respRate < 30 || respRate > 60);
}
bool vitalsAreOk(float bpm, float spo2, float respRate) {

  if(bpmcheck(bpm) ||(spo2check(spo2)) || (respRatecheck(respRatecheck)))
           return false;
 return true;
}
