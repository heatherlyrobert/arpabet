#include "arpabet.h"



char
main                    (int a_argc, char *a_argv [])
{
   printf ("%s\n", P_ONELINE);
   printf ("%s, %s\n", P_BASENAME, P_SUBJECT);
   printf ("   based on seeing darpa's ¶arpabet¶ used by google ¶how to say¶\n");
   printf ("\n");
   printf ("do not use clever symbols, meant to be read intuitively (mostly;)\n");
   printf ("\n");
   printf ("consonants (30)...\n");
   printf ("   p    pie, pickle, paint, parsley\n");
   printf ("   t    title, terror, tarragon, teacher\n");
   printf ("   k    kite, clown, catnip, cancer\n");
   printf ("   b    boy, bay, boston, bishop\n");
   printf ("   d    die, dog, daughter, diagram\n");
   printf ("   g    guy, guitar, gorilla, garlic\n");
   printf ("   m    rhythm, man, monster, mint\n");
   printf ("   n    button, nano, nutmeg\n");
   printf ("   ng   ginsing, running, sting\n");
   printf ("   f    fennel\n");
   printf ("   v    clove\n");
   printf ("   th   theater, thistle\n");
   printf ("   dh   heather (verify if unique enough)\n");
   printf ("   s    sage\n");
   printf ("   z    hazelnut, hector\n");
   printf ("   sh   squash\n");
   printf ("   zh   pleasure\n");
   printf ("   ch   chicory, china, chest\n");
   printf ("   j    jaguar, giraffe, sage, urge\n");
   printf ("   l    letter, licorice\n");
   printf ("   w    kiwi, weather\n");
   printf ("   r    parsley, record\n");
   printf ("   y    yew, yellow\n");
   printf ("   h    horseradish, hello\n");
   printf ("   dt   butter (verify if unique enough)\n");
   printf ("   el   thistle, tassel, vassel\n");
   printf ("\n");
   printf ("combos that are common enough...\n");
   printf ("   kw   question (kwehs·chihn), quaint (kwaynt), quick (kwihk)\n");
   printf ("   ky   cuba (kyoo·buh)\n");
   printf ("   ngk  bank\n");
   printf ("   st   story\n");
   printf ("   nt   wintergreen, quaint\n");
   printf ("\n");
   printf ("combos (compress short vowels ?!)...\n");
   printf ("   tr  < tur      locator (low·kay·tr)\n");
   printf ("   str < stur     struck (struh·k)\n");
   printf ("   snt < sihnt    adjacent (uh·jay·snt)\n");
   printf ("   mnt < mihnt    placement (plays·mnt), government (guh·vur·mnt)\n");
   printf ("\n");
   printf ("vowels (16)...\n");
   printf ("   aa   bot  (baa·t), palm, father (faa·thur), comma (caa·muh), wash (waa·sh)\n");
   printf ("   ah   bat  (bah·t), after (ahf·tur)\n");
   printf ("   ai   bite (bai·t), die (dai), eye (ai)\n");
   printf ("   ay   bait (bay·t), baby (bay·bee)\n");
   printf ("   ee   beet (bee·t), each (eec), history (hihs·tree), money (muh·nee)\n");
   printf ("   eh   bet  (beh·t), bed (beh·d), head (heh·d), bear (behr)\n");
   printf ("   ih   bit  (bih·t), history (hihs·tree), italy (ih·tah·lee)\n");
   printf ("   oh   boat (boh·t), go (goh), road (roh·d), story (stoh·ry)\n");
   printf ("   oi   boil (boi·l), toy (toi), boy (boi)\n");
   printf ("   oo   boot (boo·t), dude (doo·d), glue (gloo), cuba (kyoo·buh)\n");
   printf ("   ou   bout (bou·t), out (ou·t), loud (lou·d)\n");
   printf ("   uh   butt (buh·t), duck (duh·k), struck (struh·k), boolean (boo·lee·uhn)\n");
   printf ("   ul   bull (bul)\n");
   printf ("   uu   book (buu·k), good (guu·d), put (puu·t)\n");
   printf ("   ur   bird (bur·d), urge (ur·j)\n");
   printf ("   vh   tsa'e v\n");
   printf ("\n");
   printf ("connectors\n");
   printf ("   ·    separate syllables (i may overuse and over separate)\n");
   printf ("   '    stress previous syllable\n");
   printf ("\n");
   printf ("end of early version\n");
   printf ("\n");
   return 0;
}
