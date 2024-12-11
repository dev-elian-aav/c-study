# Assignment Operators

* Operators 2.1: 10. Good
* Operators 2.2: 8. Wrong
* Operators 2.3: 0. Wrong 
* Operators 2.4: 1. Good

* Operators 2.2: Welp my bad, I read each line as separate, ignoring that only from Operators 2.3 x gets a new assignment.
This answer from stack overflow helped me. [Source](https://stackoverflow.com/a/44212998)
* Operators 2.3: It's 1 because y is truly equal to z, as both were assigned the value 4 in Operators 2.2.
This answer from stack overflow helped me. [Source](https://stackoverflow.com/a/4378147)
* Operators 2.4: I didn't understand why is right until I catch on that ´´´x == (y = z)´´´ is not an assignment, so x value is
still 1. If this was written instead ´´´a = x == (y = z)´´´ it would return 0 since it's false since ´´´x = 1´´´ 
and ´´´y = z = 4´´´.
