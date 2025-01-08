#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)       
//  Noun:       baby
//  action 1:   baby cries
baby.cries();
//  action 2:   baby eats
baby.eats();
//  action 3:   baby sleeps
baby.sleeps();
//  2)
//  Noun:       wife
//  action 1:   wife reads
wife.reads();
//  action 2:   wife cooks
wife.cooks();
//  action 3:   wife yells
wife.yells();
//  3)
//  Noun:       dog
//  action 1:   dog runs
dog.runs();
//  action 2:   dog hides
dog.hides();
//  action 3:   dog barks
dog.barks();
//  4)
//  Noun:       postman
//  action 1:   postman walks
postman.walks();
//  action 2:   postman delivers
postman.delivers();
//  action 3:   postman sings
postman.sings();
//  5)
//  Noun:       people
//  action 1:   people vote
people.vote();
//  action 2:   people gossip
people.gossip();
//  action 3:   people dance
people.dance();
//  6)
//  Noun:       birds
//  action 1:   birds fly
birds.fly();
//  action 2:   birds chirp
birds.chirp();
//  action 3:   birds excrete
birds.excrete();
//  7)
//  Noun:       pastor
//  action 1:   pastor prays
pastor.prays();
//  action 2:   pastor preaches
pastor.preaches();
//  action 3:   pastor encourages
pastor.encourages();
//  8)
//  Noun:       student 
//  action 1:   student studies
student.studies();
//  action 2:   student learns
student.learns();
//  action 3:   student writes
student.writes();
//  9)          
//  Noun:       waiter
//  action 1:   waiter greets
waiter.greets();
//  action 2:   waiter takes orders
waiter.takesOrders();
//  action 3:   waiter delivers food
waiter.deliversFood();
//  10)
//  Noun:       coach
//  action 1:   coach teaches
coach.teaches();
//  action 2:   coach leads
coach.leads();
//  action 3:   coach disciplines
coach.disciplines();


#endif


/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
