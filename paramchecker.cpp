bool checklimits(float data,float upper,float lower){ 
  return(data < lower || data > upper);
}
bool spo2check(float spo2,upper){
return (data < upper);
}
bool vitalsAreOk(float bpm, float spo2, float respRate) {
    return(checklimits(bpm,C_BPM_LOWLIMIT_F,C_BPM_UPPPER_LIMIT_F) ||(spo2check(spo2,C_SPO2_UPPER_F)) || (respRatecheck(respRate,C_RESP_LOWLIMIT_F,C_RESP_UPPPER_LIMIT_F)));
}
