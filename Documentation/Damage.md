"damage" is a float between 0..1 (see setDamage scripting command), where 0 means totally healthy and 1 means totally destroyed.

Damage is caused by ammo (CfgAmmo) hitting the target (potentially indirectly) considering its armor (resistance against hits). I.e. a projectile causes hit points, which are reduced by armor to form damage.
The following should (roughly) hold: damage = hitPoints / armor

TODO: the following only holds for explosives, not merely kinetic hits, which is yet to be documented

An explosive creates damage to everything in a sphere with radius CfgAmmo.indirectHitRange and hitpoints CfgAmmo.indirectHit. Anything in that sphere gets the full CfgAmmo.indirectHit hitpoints with a falloff to 4x the radius [i.e. after 4x radius, no hitpoints are caused and in between some interpolation takes place (linear and exponential are both specified in the BI wiki)].
If the explosive actually directly hits a target (i.e. "touching" the object while exploding), not only will it get the hitpoints from within the sphere but also CfgAmmo.hit - CfgAmmo.indirectHit (or simply CfgAmmo.hit in total, which is why CfgAmmo.hit must always be >= CfgAmmo.indirectHit).

So for explosives the CfgAmmo.indirectHitRange should roughly correspond to the detonation radius or lethal radius. CfgAmmo.indirectHit should then be the average explosive penetration strength within that explosion. CfgAmmo.hit should be the maximum explosive penetration strength.
