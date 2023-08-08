int a;
int b;
int c;

delta = b * b - 4 * a * c;

if (delta < 0) {
  num_sol = 0;

} 
  else {
    t0 = -b / a;

    if (delta == 0) {
      num_sol = 1;
      sol0 = t0 / 2;
    } 
      else {
        num_sol = 2;
        t1 = sqrt(delta) / a;

        sol0 = (t0 + t1) / 2; 

        sol1 = (t0 + t1) / 2;
      }
}