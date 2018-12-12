type reading =
  | Yes
  | No;

let areYouReading = Yes;

let action =
  switch (areYouReading) {
  | Yes => "Keep on going"
  | No => "Take a break and come back later"
  };
type weapon =
  | Arrows(int) /*int to specify how many arrows you have*/
  | Sword;

let myweapon = Arrows(12);

let useweapon =
  switch (myweapon) {
  | Arrows(0) => "Switch to a sword"
  | Arrows(1) => "Save it for later"
  | Arrows(2 | 3) => "Your arrows are running out"
  | Arrows(myarrows) => string_of_int(myarrows) ++ " Are remaining"
  | Sword => "Live and die by the sword"
  };