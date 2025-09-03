class CfgPatches
{
    class ld3k_jca_m107a1_compat_ace3
    {
        requiredAddons[]=
        {
            "Weapons_F_JCA_M107",
            "Weapons_F_JCA_M107_LongRangeRifles_M107",
            "Weapons_F_JCA_M107_Accessories"
        };
        requiredversion=0.1;
        units[]={};
        weapons[]={};
    };
};
class CfgAmmo
{
    class BulletBase;
    /*class B_127x99_Ball: BulletBase // official BI tool All-in-one Config Arma3 2.19.152606 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    {
        hit=30;
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_127";
        visibleFire=8;
        audibleFire=120;
        dangerRadiusBulletClose=12;
        dangerRadiusHit=16;
        suppressionRadiusBulletClose=8;
        suppressionRadiusHit=12;
        cost=5;
        airLock=1;
        caliber=2.6;
        typicalSpeed=880;
        timeToLive=10;
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        tracerScale=1.2;
        tracerStartTime=0.075;
        tracerEndTime=1;
        airFriction=-0.00086;
        class CamShakeExplode
        {
            power=3.60555;
            duration=0.8;
            frequency=20;
            distance=10.8167;
        };
        class CamShakeHit
        {
            power=13;
            duration=0.4;
            frequency=20;
            distance=1;
        };
    };
    class B_127x99_Ball_Tracer_Red: B_127x99_Ball
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class B_127x99_Ball_Tracer_Green: B_127x99_Ball
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class B_127x99_Ball_Tracer_Yellow: B_127x99_Ball
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class B_127x99_SLAP: B_127x99_Ball
    {
        hit=50;
        indirectHit=0;
        indirectHitRange=0;
        caliber=3.4;
        typicalSpeed=1215;
        airFriction=-0.00036;
        cost=15;
        class CamShakeExplode
        {
            power=4.47214;
            duration=0.8;
            frequency=20;
            distance=13.4164;
        };
        class CamShakeHit
        {
            power=20;
            duration=0.4;
            frequency=20;
            distance=1;
        };
    };
    class B_127x99_SLAP_Tracer_Red: B_127x99_SLAP
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class B_127x99_SLAP_Tracer_Green: B_127x99_SLAP
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class B_127x99_SLAP_Tracer_Yellow: B_127x99_SLAP
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };*/
    class JCA_B_127x99_Ball_M33: BulletBase // Barrett 661gr M33 Ball https://barrett.net/products/accessories/ammunition/50bmg/
    {
        ACE_caliber=12.98; // CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-i/50-browning-en.pdf
        ACE_bulletLength=58.42; // 2.3"
        ACE_bulletMass=42.832; // 661gr
        ACE_ammoTempMuzzleVelocityShifts[]={-18.7,-18.2,-16.6,-14,-10.4,-5.7,0,6.8,14.6,23.4,33.3}; // Same curve default ACE_ammoTempMuzzleVelocityShifts. Muzzle velocity shift 0m/s ICAO conditions (15°C, 1013.25hPa, 0%)
        ACE_ballisticCoefficients[]={0.62}; // 2750fps 29" https://barrett.net/products/accessories/ammunition/50-bmg-archive/
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={762,838,853,871,903}; // 2500, 2750, 2800, 2858, 2961fps https://barrett.net/products/accessories/ammunition/50-bmg-archive/
        ACE_barrelLengths[]={508,736.6,812.8,914.4,1143}; // 20, 29, 32, 36, 45" https://barrett.net/products/accessories/ammunition/50-bmg-archive/
        ace_vehicle_damage_incendiary=0.2; // ACE3
        hit=32.3; // 17465 Joules, B_127x99_Ball 30 16238 Joules
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_127";
        visibleFire=8;
        audibleFire=120;
        dangerRadiusBulletClose=12;
        dangerRadiusHit=16;
        suppressionRadiusBulletClose=8;
        suppressionRadiusHit=12;
        cost=5;
        airLock=1;
        caliber=2.6; // SD 0.362 lb/in2
        typicalSpeed=903; // 17465 Joules, B_127x99_Ball 880 16238 Joules
        timeToLive=10;
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        tracerScale=1.2;
        tracerStartTime=0.23; // Visible 200m 1500m, 43g MV 903m/s ICAO according to https://www.nammo.com/, ToF 200m 0.23s (Strelok Pro), B_127x99_Ball 0.075
        tracerEndTime=2.71; // Visible 200m 1500m, 43g MV 903m/s ICAO according to https://www.nammo.com/, ToF 1500m 2.71s (Strelok Pro), B_127x99_Ball 1
        nvgOnly=0; // B_127x99_Ball w/o nvgOnly
        airFriction=-0.00065856; // airFrictionAnalysis.txt in docs folder
        class CamShakeExplode
        {
            power=3.60555;
            duration=0.8;
            frequency=20;
            distance=10.8167;
        };
        class CamShakeHit
        {
            power=13;
            duration=0.4;
            frequency=20;
            distance=1;
        };
    };
    class JCA_B_127x99_Ball_M33_Tracer_Red: JCA_B_127x99_Ball_M33
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_127x99_Ball_M33_Tracer_Green: JCA_B_127x99_Ball_M33
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_127x99_Ball_M33_Tracer_Yellow: JCA_B_127x99_Ball_M33
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class JCA_B_127x99_Ball_M33_Tracer_IR: JCA_B_127x99_Ball_M33
    {
        tracerScale=0.6; // IR dim tracer
        tracerStartTime=0.23; // Visible 200m 1000m, 43g MV 903m/s ICAO according to https://www.nammo.com/, ToF 200m 0.23s (Strelok Pro), B_127x99_Ball 0.075
        tracerEndTime=1.51; // Visible 200m 1000m, 43g MV 903m/s ICAO according to https://www.nammo.com/, ToF 1000m 1.51s (Strelok Pro), B_127x99_Ball 1
        nvgOnly=1;
    };
    class JCA_B_127x99_Ball_AMAX: JCA_B_127x99_Ball_M33 // https://www.hornady.com/ammunition/rifle/50-bmg-750-gr-a-max-match#!/
    {
        ACE_bulletLength=64.77; // 2.550" https://static.hornady.media/presscenter/docs/1410998610-50-BMG-750gr-AMAX.pdf
        ACE_bulletMass=48.6; // 750gr
        ACE_muzzleVelocityVariationSD=0.2; // ACE3 https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L689
        ACE_ballisticCoefficients[]={1.0362}; // ASM BC 1.050 2815fps (36"), ICAO 1.03618 826m/s (29") https://static.hornady.media/presscenter/docs/1410998610-50-BMG-750gr-AMAX.pdf
        ACE_muzzleVelocities[]={751,826,840,858,889}; // 2463, 2709, 2757, 2815, 2917fps
        hit=35.5; // 19208 Joules, B_127x99_Ball 30 16238 Joules
        caliber=3; // SD 0.41 lb/in2, ACE3 https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L685
        typicalSpeed=889; // 19208 Joules, B_127x99_Ball 880 16238 Joules
        airFriction=-0.00039574; // airFrictionAnalysis.txt in docs folder
    };
    class JCA_B_127x99_Ball_M903_SLAP: JCA_B_127x99_Ball_M33 // M903 SLAP
    { // Very high M903 SLAP BC 1.101 with data below, change for M962 SLAP-T BC 0.735 more coherent with .30" projectile and 29" barrel muzzle velocity.
        // ACE_caliber=7.7; // 0.303" https://www.1919a4.com/cdn-cgi/image/format=auto,onerror=redirect,width=1920,height=1920,fit=scale-down/https://www.1919a4.com/attachments/4-83-png.134461/
        // ACE_bulletLength=37; // 1.457" https://www.reddit.com/media?url=https%3A%2F%2Fpreview.redd.it%2F89pc3p78cm561.jpg%3Fauto%3Dwebp%26s%3Db42d11b49565e34f7adb561f3fab6821ac34d6b0
        // ACE_bulletMass=22.6; // 348.77gr https://www.1919a4.com/cdn-cgi/image/format=auto,onerror=redirect,width=1920,height=1920,fit=scale-down/https://www.1919a4.com/attachments/4-83-png.134461/
        // ACE_ammoTempMuzzleVelocityShifts[]={-18.7,-18.2,-16.6,-14,-10.4,-5.7,0,6.8,14.6,23.4,33.3}; // Same curve default ACE_ammoTempMuzzleVelocityShifts. Muzzle velocity shift 0m/s ICAO conditions (15°C, 1013.25hPa, 0%)
        // ACE_ballisticCoefficients[]={1.101}; // muzzle velocity 4000fps barrel length 45", ToF 1200m 1.2s, ToF 2500m 3.2s (1.082 ASM) "Marine Corps Warfighting Publication (MCWP) 3-15.1, Machine Guns and Machine Gun Gunnery" https://www.1919a4.com/cdn-cgi/image/format=auto,onerror=redirect,width=1920,height=1920,fit=scale-down/https://www.1919a4.com/attachments/4-83-png.134461/
        // ACE_ballisticCoefficients[]={0.866}; // for test distance in Yards: muzzle velocity 4000fps barrel length 45", ToF 1200yards 1.14s, ToF 2500yards 3.2s (0.851 ASM)
        // ACE_ballisticCoefficients[]={0.703}; // for test distance in Yards: muzzle velocity 4000fps barrel length 45", ToF 1200yards 1.2s, ToF 2500yards 3.74s (0.690 ASM)
        // ACE_velocityBoundaries[]={};
        // ACE_standardAtmosphere="ICAO";
        // ACE_dragModel=1;
        // ACE_muzzleVelocities[]={1029,1132,1152,1177,1219}; // 3377, 3715, 3781, 3860, 4000fps (1219m/s) 45"
        // ACE_barrelLengths[]={508,736.6,812.8,914.4,1143}; // 20, 29, 32, 36, 45"
        ACE_caliber=7.5; // 0.295" https://www.reddit.com/media?url=https%3A%2F%2Fpreview.redd.it%2F89pc3p78cm561.jpg%3Fauto%3Dwebp%26s%3Db42d11b49565e34f7adb561f3fab6821ac34d6b0
        ACE_bulletLength=36.8; // 1.409" https://www.reddit.com/media?url=https%3A%2F%2Fpreview.redd.it%2F89pc3p78cm561.jpg%3Fauto%3Dwebp%26s%3Db42d11b49565e34f7adb561f3fab6821ac34d6b0
        ACE_bulletMass=23.166; // 357.5gr (355, 360gr) "Army Ammunition, Data Sheets Small Caliber Ammunition" https://www.inetres.com/gp/military/infantry/mg/50_ammo.html
        ACE_ballisticCoefficients[]={0.735}; // M962 SLAP-T, ballistic app EBC V2 estimated muzzle velocity 3720fps (1134m/s) (ASM 0.723), ballistic data https://static.wikia.nocookie.net/guns/images/8/83/Slaptrajectory.jpg/revision/latest?cb=20110101063514
        ACE_muzzleVelocities[]={1029,1132,1152,1177,1219}; // 3377, 3715, 3781, 3860, 4000fps (1219m/s) 45"
        ace_vehicle_damage_incendiary=0.8; // ACE3
        hit=51.6; // 17215 Joules, B_127x99_SLAP 50 16684 Joules
        caliber=3.4;
        typicalSpeed=1219; // 17215 Joules, B_127x99_SLAP 1215 16684 Joules
        airFriction=-0.00051605; // airFrictionAnalysis.txt in docs folder
        cost=15;
        class CamShakeExplode
        {
            power=4.47214;
            duration=0.8;
            frequency=20;
            distance=13.4164;
        };
        class CamShakeHit
        {
            power=20;
            duration=0.4;
            frequency=20;
            distance=1;
        };
    };
    class JCA_B_127x99_Ball_M962_SLAP_Tracer_Red: JCA_B_127x99_Ball_M903_SLAP // M962 SLAP-T
    {
        ACE_bulletLength=41.4; // 1.63" https://www.snipershide.com/shooting/threads/slap-rounds.7149881/
        ACE_bulletMass=23.004; // 355gr (350, 360gr) "Army Ammunition, Data Sheets Small Caliber Ammunition" https://www.inetres.com/gp/military/infantry/mg/50_ammo.html
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerScale=1; // .30" projectile
        tracerStartTime=0.01; // No start tracer, "from muzzle". Visible 13m, ToF 13m 0.01s (Strelok Pro), B_127x99_Ball 0.075
        tracerEndTime=1.62; // "Trace not less than 1370m from muzzle", 1190m/s @24m: 1204m/s @0m ICAO, ToF 1370m 1.62s (Strelok Pro), B_127x99_Ball 1 https://us1.discourse-cdn.com/flex016/uploads/cartridgecollectors/original/3X/7/f/7f02a4d46fdf84650d794110ee26d19f9c119c40.jpeg
    };
    class JCA_B_127x99_Ball_M962_SLAP_Tracer_Green: JCA_B_127x99_Ball_M962_SLAP_Tracer_Red
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_127x99_Ball_M962_SLAP_Tracer_Yellow: JCA_B_127x99_Ball_M962_SLAP_Tracer_Red
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class JCA_B_127x99_Ball_M962_SLAP_Tracer_IR: JCA_B_127x99_Ball_M962_SLAP_Tracer_Red
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        nvgOnly=1;
    };
    class JCA_B_127x99_Ball_Mk211_HEIAP: JCA_B_127x99_Ball_M903_SLAP // Raufoss Mk 211 https://en.wikipedia.org/wiki/Raufoss_Mk_211, Nammo Multipurpose NM140 (Handbook 2018)
    {
        ACE_caliber=12.98; // CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-i/50-browning-en.pdf
        ACE_bulletLength=58.42; // 2.3"
        ACE_bulletMass=43.48; // 671gr
        ACE_ballisticCoefficients[]={0.651}; // 2715fps 29" ballistic app EBC V2 (ASM 0.64) https://apps.dtic.mil/sti/tr/pdf/ADA367672.pdf#page=52
        ACE_muzzleVelocities[]={752,828,842,860,891}; // 2468, 2715, 2763, 2821, 2923fps
        ace_vehicle_damage_incendiary=1;
        indirectHit=3; // B_20mm 6
        indirectHitRange=0.8; // B_20mm 1.6
        explosive=0.2; // B_20mm 0.4
        explosionSoundEffect="DefaultExplosion"; // B_20mm
        CraterEffects="ExploAmmoCrater"; // B_20mm
        explosionEffects="ExploAmmoExplosion"; // B_20mm
        typicalSpeed=891;
        airFriction=-0.00062936; // airFrictionAnalysis.txt in docs folder
        class CamShakeExplode // B_20mm
        {
            power=4;
            duration=0.8;
            frequency=20;
            distance=43.7771;
        };
        class CamShakeHit // B_20mm
        {
            power=20;
            duration=0.4;
            frequency=20;
            distance=1;
        };
        soundHit1[]= // B_20mm
        {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01",
            1.7782794,
            1,
            1300
        };
        soundHit2[]= // B_20mm
        {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02",
            1.7782794,
            1,
            1300
        };
        soundHit3[]= // B_20mm
        {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03",
            1.7782794,
            1,
            1300
        };
        soundHit4[]= // B_20mm
        {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04",
            1.7782794,
            1,
            1300
        };
        multiSoundHit[]= // B_20mm
        {
            "soundHit1",
            0.25,
            "soundHit2",
            0.25,
            "soundHit3",
            0.25,
            "soundHit4",
            0.25
        };
        SoundSetExplosion[]= // B_20mm
        {
            "Shell19mm25mm_Exp_SoundSet"
        };
    };
    class JCA_B_127x99_Ball_Mk300_HEIAP_Tracer_Red: JCA_B_127x99_Ball_Mk211_HEIAP // Nammo Multipurpose Mk 300/NM160 (Handbook 2018)
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_127x99_Ball_MPDT_HEIAP_Tracer_IR: JCA_B_127x99_Ball_Mk211_HEIAP // Nammo Multipurpose MP-DT (IR) (Handbook 2018)
    {
        tracerScale=0.6; // IR dim tracer
        tracerStartTime=0.23; // Visible 200m 1000m, 43g MV 903m/s ICAO according to https://www.nammo.com/, ToF 200m 0.23s (Strelok Pro), B_127x99_Ball 0.075
        tracerEndTime=1.51; // Visible 200m 1000m, 43g MV 903m/s ICAO according to https://www.nammo.com/, ToF 1000m 1.51s (Strelok Pro), B_127x99_Ball 1
        nvgOnly=1;
    };
    class JCA_B_127x99_Ball_M8_API: JCA_B_127x99_Ball_M903_SLAP
    {
        ACE_caliber=12.98; // CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-i/50-browning-en.pdf
        ACE_bulletLength=58.67; // 2.31" "Army Ammunition, Data Sheets Small Caliber Ammunition"
        ACE_bulletMass=40.337; // 622.5 gr "Army Ammunition, Data Sheets Small Caliber Ammunition" https://www.inetres.com/gp/military/infantry/mg/50_ammo.html
        ACE_ballisticCoefficients[]={0.58}; // ballistic app EBC V2 estimated muzzle velocity 2758fps (841m/s) (ASM 0.574), ballistic data https://static.wikia.nocookie.net/guns/images/8/83/Slaptrajectory.jpg/revision/latest?cb=20110101063514
        ACE_muzzleVelocities[]={764,841,856,874,905}; // 2508, 2758, 2807, 2866, 2970fps
        ace_vehicle_damage_incendiary=1;
        indirectHit=4; // B_20mm_AP 8
        indirectHitRange=0.1; // B_20mm_AP 0.2
        typicalSpeed=905;
        airFriction=-0.00070327; // airFrictionAnalysis.txt in docs folder
        CraterEffects="ExploAmmoCrater";
        class HitEffects // B_30mm_APFSDS. Observable flash at hard targets. Ignition of vaporized fuel. Material/light armor targets https://www.nammo.com
        {
            hitMetal="ImpactMetalSabotSmall";
            hitMetalPlate="ImpactMetalSabotSmall";
            hitBuilding="ImpactConcreteSabotSmall";
            hitConcrete="ImpactConcreteSabotSmall";
            hitGroundSoft="ImpactEffectsGroundSabot";
            hitGroundRed="ImpactEffectsGroundSabot"; // BulletBase ImpactEffectsRed
            hitGroundHard="ImpactEffectsGroundSabot";
            Hit_Foliage_green="ImpactLeavesGreen";
            Hit_Foliage_Dead="ImpactLeavesDead";
            Hit_Foliage_Green_big="ImpactLeavesGreenBig";
            Hit_Foliage_Palm="ImpactLeavesPalm";
            Hit_Foliage_Pine="ImpactLeavesPine";
            hitFoliage="ImpactLeaves";
            hitGlass="ImpactGlass";
            hitGlassArmored="ImpactGlassThin";
            hitWood="ImpactWood";
            hitHay="ImpactHay";
            hitPlastic="ImpactPlastic";
            hitRubber="ImpactRubber";
            hitTyre="ImpactTyre";
            hitMan="ImpactEffectsBlood";
            hitWater="ImpactEffectsWater";
            hitVirtual="ImpactMetal"; // BulletBase
            default_mat="ImpactEffectsGroundSabot";
        };
    };
    class JCA_B_127x99_Ball_M20_API_Tracer_Red: JCA_B_127x99_Ball_M8_API
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_127x99_Ball_Mk257_API_Tracer_IR: JCA_B_127x99_Ball_M8_API
    {
        tracerScale=0.6; // IR dim tracer
        tracerStartTime=0.23; // Visible 200m 1000m, 43g MV 903m/s ICAO according to https://www.nammo.com/, ToF 200m 0.23s (Strelok Pro), B_127x99_Ball 0.075
        tracerEndTime=1.51; // Visible 200m 1000m, 43g MV 903m/s ICAO according to https://www.nammo.com/, ToF 1000m 1.51s (Strelok Pro), B_127x99_Ball 1
        nvgOnly=1;
    };
};
class CfgMagazines
{
    class JCA_10Rnd_127x108_M107_Mag;
    class JCA_10Rnd_127x108_M107_Sand_Mag;
    /*class JCA_10Rnd_127x108_M107_Mag: CA_Magazine
    {
        author="Grave";
        scope=2;
        displayName="12.7 mm 10Rnd M107A1 Mag";
        picture="\weapons_f_JCA_M107\MagazineProxies\data\UI\Icon_10Rnd_M107_Mag_CA.paa";
        modelSpecial="weapons_f_JCA_M107\MagazineProxies\10Rnd_M107_MAG.p3d";
        modelSpecialIsProxy=1;
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "weapons_f_JCA_M107\LongRangeRifles\M107\data\srifle_M107_02_black_CO.paa"
        };
        ammo="JCA_B_127x108_Ball";
        count=10;
        mass=22;
        initSpeed=915;
        tracersEvery=0;
        lastRoundsTracer=0;
        descriptionShort="Caliber: .50<br />Rounds: 10<br />Used in: M107A1";
    };
    class JCA_10Rnd_127x108_M107_Sand_Mag: JCA_10Rnd_127x108_M107_Mag
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 Sand Mag";
        picture="\weapons_f_JCA_M107\MagazineProxies\data\UI\Icon_10Rnd_M107_Sand_Mag_CA.paa";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "weapons_f_JCA_M107\LongRangeRifles\M107\data\srifle_M107_02_sand_CO.paa"
        };
    };*/
    class JCA_10Rnd_127x99_M107_M33_Mag: JCA_10Rnd_127x108_M107_Mag
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 M33 Mag";
        ammo="JCA_B_127x99_Ball_M33";
        initSpeed=838;
        mass=25.2; // should be 32: 5Rnd_127x108_Mag mass=16 x2, JCA 22, cartridge weight 1762gr x10: 17620gr (1142g)
    };
    class JCA_10Rnd_127x99_M107_M33_Mag_Tracer_Red: JCA_10Rnd_127x99_M107_M33_Mag
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 M33 Tracer (Red) Mag";
        ammo="JCA_B_127x99_Ball_M33_Tracer_Red";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class JCA_10Rnd_127x99_M107_M33_Mag_Tracer_IR: JCA_10Rnd_127x99_M107_M33_Mag_Tracer_Red
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 M33 Tracer (IR) Mag";
        ammo="JCA_B_127x99_Ball_M33_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_10Rnd_127x99_M107_AMAX_Mag: JCA_10Rnd_127x99_M107_M33_Mag
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 AMAX Mag";
        ammo="JCA_B_127x99_Ball_AMAX";
        initSpeed=826;
        mass=25.8; // should be 32: 5Rnd_127x108_Mag mass=16 x2, JCA 22, cartridge weight 1805.3gr x10: 18053gr (1170g)
        displaynameshort="AMAX";
    };
    class JCA_10Rnd_127x99_M107_M903_SLAP_Mag: JCA_10Rnd_127x99_M107_M33_Mag
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 M903 SLAP Mag";
        ammo="JCA_B_127x99_Ball_M903_SLAP";
        initSpeed=1132;
        descriptionShort="Caliber: .50 SLAP<br />Rounds: 10<br />Used in: M107A1";
        mass=20.9; // should be 32: 5Rnd_127x108_Mag mass=16 x2, JCA 22, cartridge weight 1466gr x10: 14660gr (950g)
        displaynameshort="SLAP";
    };
    class JCA_10Rnd_127x99_M107_M962_SLAP_Mag_Tracer_Red: JCA_10Rnd_127x99_M107_M903_SLAP_Mag
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 M962 SLAP Tracer (Red) Mag";
        ammo="JCA_B_127x99_Ball_M962_SLAP_Tracer_Red";
        tracersEvery=1;
        descriptionShort="Caliber: .50 SLAP-T<br />Rounds: 10<br />Used in: M107A1";
        displaynameshort="SLAP-T";
    };
    class JCA_10Rnd_127x99_M107_Mk211_HEIAP_Mag: JCA_10Rnd_127x99_M107_M33_Mag
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 Mk211 HEIAP Mag";
        ammo="JCA_B_127x99_Ball_Mk211_HEIAP";
        initSpeed=828;
        descriptionShort="Caliber: .50 HEIAP<br />Rounds: 10<br />Used in: M107A1";
        mass=25.2; // should be 32: 5Rnd_127x108_Mag mass=16 x2, JCA 22, cartridge weight 1765gr x10: 17650gr (1144g)
        displaynameshort="HEIAP";
    };
    class JCA_10Rnd_127x99_M107_Mk300_HEIAP_Mag_Tracer_Red: JCA_10Rnd_127x99_M107_Mk211_HEIAP_Mag
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 Mk300 HEIAP Tracer (Red) Mag";
        ammo="JCA_B_127x99_Ball_Mk300_HEIAP_Tracer_Red";
        tracersEvery=1;
        descriptionShort="Caliber: .50 HEIAP-T<br />Rounds: 10<br />Used in: M107A1";
        displaynameshort="HEIAP-T";
    };
    class JCA_10Rnd_127x99_M107_MPDT_HEIAP_Mag_Tracer_IR: JCA_10Rnd_127x99_M107_Mk300_HEIAP_Mag_Tracer_Red
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 MP-DT HEIAP Tracer (IR) Mag";
        ammo="JCA_B_127x99_Ball_MPDT_HEIAP_Tracer_IR";
        descriptionShort="Caliber: .50 HEIAP-T IR<br />Rounds: 10<br />Used in: M107A1";
        displaynameshort="HEIAP-T IR";
    };
    class JCA_10Rnd_127x99_M107_M8_API_Mag: JCA_10Rnd_127x99_M107_M33_Mag
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 M8 API Mag";
        ammo="JCA_B_127x99_Ball_M8_API";
        initSpeed=841;
        descriptionShort="Caliber: .50 API<br />Rounds: 10<br />Used in: M107A1";
        mass=25.2; // should be 32: 5Rnd_127x108_Mag mass=16 x2, JCA 22, cartridge weight 1764gr x10: 17640gr (1143g)
        displaynameshort="API";
    };
    class JCA_10Rnd_127x99_M107_M20_API_Mag_Tracer_Red: JCA_10Rnd_127x99_M107_M8_API_Mag
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 M20 API Tracer (Red) Mag";
        ammo="JCA_B_127x99_Ball_M20_API_Tracer_Red";
        tracersEvery=1;
        descriptionShort="Caliber: .50 API-T<br />Rounds: 10<br />Used in: M107A1";
        mass=24.7; // should be 32: 5Rnd_127x108_Mag mass=16 x2, JCA 22, cartridge weight 1718gr x10: 17180gr (1113g)
        displaynameshort="API-T";
    };
    class JCA_10Rnd_127x99_M107_Mk257_API_Mag_Tracer_IR: JCA_10Rnd_127x99_M107_M20_API_Mag_Tracer_Red
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 Mk257 API Tracer (IR) Mag";
        ammo="JCA_B_127x99_Ball_Mk257_API_Tracer_IR";
        descriptionShort="Caliber: .50 API-T IR<br />Rounds: 10<br />Used in: M107A1";
        displaynameshort="API-T IR";
    };
    class JCA_10Rnd_127x99_M107_M33_Sand_Mag: JCA_10Rnd_127x108_M107_Sand_Mag
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 M33 Sand Mag";
        ammo="JCA_B_127x99_Ball_M33";
        initSpeed=838;
        mass=25.2; // should be 32: 5Rnd_127x108_Mag mass=16 x2, JCA 22, cartridge weight 1762gr x10: 17620gr (1142g)
    };
    class JCA_10Rnd_127x99_M107_M33_Sand_Mag_Tracer_Red: JCA_10Rnd_127x99_M107_M33_Sand_Mag
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 M33 Tracer (Red) Sand Mag";
        ammo="JCA_B_127x99_Ball_M33_Tracer_Red";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class JCA_10Rnd_127x99_M107_M33_Sand_Mag_Tracer_IR: JCA_10Rnd_127x99_M107_M33_Sand_Mag_Tracer_Red
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 M33 Tracer (IR) Sand Mag";
        ammo="JCA_B_127x99_Ball_M33_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_10Rnd_127x99_M107_AMAX_Sand_Mag: JCA_10Rnd_127x99_M107_M33_Sand_Mag
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 AMAX Sand Mag";
        ammo="JCA_B_127x99_Ball_AMAX";
        initSpeed=826;
        mass=25.8; // should be 32: 5Rnd_127x108_Mag mass=16 x2, JCA 22, cartridge weight 1805.3gr x10: 18053gr (1170g)
        displaynameshort="AMAX";
    };
    class JCA_10Rnd_127x99_M107_M903_SLAP_Sand_Mag: JCA_10Rnd_127x99_M107_M33_Sand_Mag
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 M903 SLAP Sand Mag";
        ammo="JCA_B_127x99_Ball_M903_SLAP";
        initSpeed=1132;
        descriptionShort="Caliber: .50 SLAP<br />Rounds: 10<br />Used in: M107A1";
        mass=20.9; // should be 32: 5Rnd_127x108_Mag mass=16 x2, JCA 22, cartridge weight 1466gr x10: 14660gr (950g)
        displaynameshort="SLAP";
    };
    class JCA_10Rnd_127x99_M107_M962_SLAP_Sand_Mag_Tracer_Red: JCA_10Rnd_127x99_M107_M903_SLAP_Sand_Mag
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 M962 SLAP Tracer (Red) Sand Mag";
        ammo="JCA_B_127x99_Ball_M962_SLAP_Tracer_Red";
        tracersEvery=1;
        descriptionShort="Caliber: .50 SLAP-T<br />Rounds: 10<br />Used in: M107A1";
        displaynameshort="SLAP-T";
    };
    class JCA_10Rnd_127x99_M107_Mk211_HEIAP_Sand_Mag: JCA_10Rnd_127x99_M107_M33_Sand_Mag
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 Mk211 HEIAP Sand Mag";
        ammo="JCA_B_127x99_Ball_Mk211_HEIAP";
        initSpeed=828;
        descriptionShort="Caliber: .50 HEIAP<br />Rounds: 10<br />Used in: M107A1";
        mass=25.2; // should be 32: 5Rnd_127x108_Mag mass=16 x2, JCA 22, cartridge weight 1765gr x10: 17650gr (1144g)
        displaynameshort="HEIAP";
    };
    class JCA_10Rnd_127x99_M107_Mk300_HEIAP_Sand_Mag_Tracer_Red: JCA_10Rnd_127x99_M107_Mk211_HEIAP_Sand_Mag
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 Mk300 HEIAP Tracer (Red) Sand Mag";
        ammo="JCA_B_127x99_Ball_Mk300_HEIAP_Tracer_Red";
        tracersEvery=1;
        descriptionShort="Caliber: .50 HEIAP-T<br />Rounds: 10<br />Used in: M107A1";
        displaynameshort="HEIAP-T";
    };
    class JCA_10Rnd_127x99_M107_MPDT_HEIAP_Sand_Mag_Tracer_IR: JCA_10Rnd_127x99_M107_Mk300_HEIAP_Sand_Mag_Tracer_Red
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 MP-DT HEIAP Tracer (IR) Sand Mag";
        ammo="JCA_B_127x99_Ball_MPDT_HEIAP_Tracer_IR";
        descriptionShort="Caliber: .50 HEIAP-T IR<br />Rounds: 10<br />Used in: M107A1";
        displaynameshort="HEIAP-T IR";
    };
    class JCA_10Rnd_127x99_M107_M8_API_Sand_Mag: JCA_10Rnd_127x99_M107_M33_Sand_Mag
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 M8 API Sand Mag";
        ammo="JCA_B_127x99_Ball_M8_API";
        initSpeed=841;
        descriptionShort="Caliber: .50 API<br />Rounds: 10<br />Used in: M107A1";
        mass=25.2; // should be 32: 5Rnd_127x108_Mag mass=16 x2, JCA 22, cartridge weight 1764gr x10: 17640gr (1143g)
        displaynameshort="API";
    };
    class JCA_10Rnd_127x99_M107_M20_API_Sand_Mag_Tracer_Red: JCA_10Rnd_127x99_M107_M8_API_Sand_Mag
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 M20 API Tracer (Red) Sand Mag";
        ammo="JCA_B_127x99_Ball_M20_API_Tracer_Red";
        tracersEvery=1;
        descriptionShort="Caliber: .50 API-T<br />Rounds: 10<br />Used in: M107A1";
        mass=24.7; // should be 32: 5Rnd_127x108_Mag mass=16 x2, JCA 22, cartridge weight 1718gr x10: 17180gr (1113g)
        displaynameshort="API-T";
    };
    class JCA_10Rnd_127x99_M107_Mk257_API_Sand_Mag_Tracer_IR: JCA_10Rnd_127x99_M107_M20_API_Sand_Mag_Tracer_Red
    {
        author="Grave";
        displayName="12.7 mm 10Rnd M107A1 Mk257 API Tracer (IR) Sand Mag";
        ammo="JCA_B_127x99_Ball_Mk257_API_Tracer_IR";
        descriptionShort="Caliber: .50 API-T IR<br />Rounds: 10<br />Used in: M107A1";
        displaynameshort="API-T IR";
    };
};
class CfgMagazineWells
{
    /*class JCA_M107_127x108
    {
        JCA_Magazines[]=
        {
            "JCA_10Rnd_127x108_M107_Mag",
            "JCA_10Rnd_127x108_M107_Tracer_Red_Mag",
            "JCA_10Rnd_127x108_M107_Tracer_Green_Mag",
            "JCA_10Rnd_127x108_M107_Tracer_Yellow_Mag",
            "JCA_10Rnd_127x108_M107_Tracer_IR_Mag",
            "JCA_10Rnd_127x108_M107_Sand_Mag",
            "JCA_10Rnd_127x108_M107_Sand_Tracer_Red_Mag",
            "JCA_10Rnd_127x108_M107_Sand_Tracer_Green_Mag",
            "JCA_10Rnd_127x108_M107_Sand_Tracer_Yellow_Mag",
            "JCA_10Rnd_127x108_M107_Sand_Tracer_IR_Mag",
            "JCA_10Rnd_127x108_APDS_M107_Mag",
            "JCA_10Rnd_127x108_APDS_M107_Tracer_Red_Mag",
            "JCA_10Rnd_127x108_APDS_M107_Tracer_Green_Mag",
            "JCA_10Rnd_127x108_APDS_M107_Tracer_Yellow_Mag",
            "JCA_10Rnd_127x108_APDS_M107_Tracer_IR_Mag",
            "JCA_10Rnd_127x108_APDS_M107_Sand_Mag",
            "JCA_10Rnd_127x108_APDS_M107_Sand_Tracer_Red_Mag",
            "JCA_10Rnd_127x108_APDS_M107_Sand_Tracer_Green_Mag",
            "JCA_10Rnd_127x108_APDS_M107_Sand_Tracer_Yellow_Mag",
            "JCA_10Rnd_127x108_APDS_M107_Sand_Tracer_IR_Mag"
        };
    };*/
    class JCA_M107_127x99
    {
        JCA_Magazines[]= // Weapon initSpeed -1 M107A1 ACE_barrelLength 29" (736.6mm), 838, 826, 1132, 828, 841m/s ICAO conditions (15°C, 1013.25 hPa, 0%) according to M107A1 10Rnd_127x99 magazines initSpeed
        {
            "JCA_10Rnd_127x99_M107_M33_Mag",
            "JCA_10Rnd_127x99_M107_M33_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_M33_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_AMAX_Mag",
            "JCA_10Rnd_127x99_M107_M903_SLAP_Mag",
            "JCA_10Rnd_127x99_M107_M962_SLAP_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk211_HEIAP_Mag",
            "JCA_10Rnd_127x99_M107_Mk300_HEIAP_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_MPDT_HEIAP_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_M8_API_Mag",
            "JCA_10Rnd_127x99_M107_M20_API_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk257_API_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_M33_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M33_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_M33_Sand_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_AMAX_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M903_SLAP_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M962_SLAP_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk211_HEIAP_Sand_Mag",
            "JCA_10Rnd_127x99_M107_Mk300_HEIAP_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_MPDT_HEIAP_Sand_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_M8_API_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M20_API_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk257_API_Sand_Mag_Tracer_IR"
        };
    };
};
class Mode_SemiAuto;
class CfgWeapons
{
    class ItemCore;
    class InventoryMuzzleItem_Base_F;
    class InventoryOpticsItem_Base_F;
    class Rifle_Base_F;
    class Rifle_Long_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
    class JCA_srifle_M107_base_F: Rifle_Long_Base_F
    {
        ACE_RailHeightAboveBore=3.46095; // from ACE3 checkScopes.sqf
        ACE_barrelLength=736.6; // 29" https://barrett.net/products/firearms/m107a1/
        ACE_barrelTwist=381; // 1:15" https://barrett.net/products/firearms/m107a1/
        ace_overheating_closedBolt=1;
        maxZeroing=3000; // distance 12.7x99mm AMAX Mach 0.8 (272m/s), JCA 2500
        initSpeed=-1; // 838, 826, 1132, 828, 841m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 0
        descriptionShort="Sniper Rifle<br />Caliber: 12.7x99 mm";
        magazines[]=
        {
            "JCA_10Rnd_127x99_M107_M33_Mag",
            "JCA_10Rnd_127x99_M107_M33_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_M33_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_AMAX_Mag",
            "JCA_10Rnd_127x99_M107_M903_SLAP_Mag",
            "JCA_10Rnd_127x99_M107_M962_SLAP_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk211_HEIAP_Mag",
            "JCA_10Rnd_127x99_M107_Mk300_HEIAP_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_MPDT_HEIAP_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_M8_API_Mag",
            "JCA_10Rnd_127x99_M107_M20_API_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk257_API_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_M33_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M33_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_M33_Sand_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_AMAX_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M903_SLAP_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M962_SLAP_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk211_HEIAP_Sand_Mag",
            "JCA_10Rnd_127x99_M107_Mk300_HEIAP_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_MPDT_HEIAP_Sand_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_M8_API_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M20_API_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk257_API_Sand_Mag_Tracer_IR"
        };
        magazineWell[]=
        {
            "JCA_M107_127x99"
        };
        class Single: Mode_SemiAuto
        {
            dispersion=0.000267; // 1.63 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00022 (0.76 MOA)
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=287; // 13kg https://barrett.net/products/firearms/m107a1/, JCA 320
        };
    };
    class JCA_srifle_M107_sand_F: JCA_srifle_M107_base_F
    {
        magazines[]=
        {
            "JCA_10Rnd_127x99_M107_M33_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M33_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_M33_Sand_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_AMAX_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M903_SLAP_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M962_SLAP_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk211_HEIAP_Sand_Mag",
            "JCA_10Rnd_127x99_M107_Mk300_HEIAP_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_MPDT_HEIAP_Sand_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_M8_API_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M20_API_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk257_API_Sand_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_M33_Mag",
            "JCA_10Rnd_127x99_M107_M33_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_M33_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_AMAX_Mag",
            "JCA_10Rnd_127x99_M107_M903_SLAP_Mag",
            "JCA_10Rnd_127x99_M107_M962_SLAP_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk211_HEIAP_Mag",
            "JCA_10Rnd_127x99_M107_Mk300_HEIAP_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_MPDT_HEIAP_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_M8_API_Mag",
            "JCA_10Rnd_127x99_M107_M20_API_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk257_API_Mag_Tracer_IR"
        };
    };
    class JCA_optic_HPCS_base: ItemCore // Vortex Optics Golden Eagle 15-60x52 https://vortexoptics.com/vortex-golden-eagle-hd+reticle-ECR-1~MOA
    {
        ACE_ScopeZeroRange=100; // Always keep vanilla discreteDistance 100 same that Range Card zeroed distance, to increase eventually zeroing distance: Interaction Menu -> "Set zero adjustment" (AB enabled only)
        ACE_ScopeHeightAboveRail=3.85973; // from ACE3 checkScopes.sqf, JCA 4.2098
        ACE_ScopeAdjust_Vertical[]={0,16}; // 55 MOA
        ACE_ScopeAdjust_Horizontal[]={-6.5,6.5}; // 45 MOA
        ACE_ScopeAdjust_VerticalIncrement=0.1; // should be 1/8 MOA
        ACE_ScopeAdjust_HorizontalIncrement=0.1; // should be 1/8 MOA
        descriptionShort="High Power Combat Scope<br />Magnification: 11x-23x";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            mass=18.6; // 29.7 oz, JCA 14
            class OpticsModes
            {
                class HPCS
                {
                    opticsZoomMin=0.010992; // accurate mRad reticle calibration at magnification 22.7x, JCA 0.01 (25x)
                    opticsZoomMax=0.021963; // accurate mRad reticle calibration at magnification 11.4x, JCA 0.042 (6x)
                    opticsZoomInit=0.021963; // accurate mRad reticle calibration at magnification 11.4x, JCA 0.042 (6x)
                    discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000}; // 2000m max distance at max elevation 16mRad M903/962 SLAP (zeroing 100m, ICAO conditions)
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=100;
                    distanceZoomMax=2000;
                    discretefov[]={0.021963,0.010992}; // {11.4x, 22.7x}
                };
            };
        };
    };
    class JCA_muzzle_snds_M107_base: ItemCore // JCA muzzle_snds_570
    {
        class ItemInfo: InventoryMuzzleItem_Base_F
        {
        };
    };
    class JCA_muzzle_snds_M107_black: JCA_muzzle_snds_M107_base // muzzle_snds_93mmg
    {
        class ItemInfo: ItemInfo
        {
            mass=48.8; // Barrett QDL Suppressor 2.21kg https://barrett.net/products/accessories/suppressors/qdl-suppressor/, JCA 26
            class MagazineCoef
            {
                initSpeed=1; // ACE3, muzzle_snds_93mmg 1.1
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, muzzle_snds_93mmg 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_93mmg 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_93mmg 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_M107_sand: JCA_muzzle_snds_M107_base // muzzle_snds_93mmg
    {
        class ItemInfo: ItemInfo
        {
            mass=48.8; // Barrett QDL Suppressor 2.21kg https://barrett.net/products/accessories/suppressors/qdl-suppressor/, JCA 26
            class MagazineCoef
            {
                initSpeed=1; // ACE3, muzzle_snds_93mmg 1.1
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, muzzle_snds_93mmg 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_93mmg 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_93mmg 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_M107_olive: JCA_muzzle_snds_M107_base // muzzle_snds_93mmg
    {
        class ItemInfo: ItemInfo
        {
            mass=48.8; // Barrett QDL Suppressor 2.21kg https://barrett.net/products/accessories/suppressors/qdl-suppressor/, JCA 26
            class MagazineCoef
            {
                initSpeed=1; // ACE3, muzzle_snds_93mmg 1.1
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, muzzle_snds_93mmg 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_93mmg 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_93mmg 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
};
class ACE_ATragMX_Presets
{
    class JCA_B_127x99_Ball_M33
    {
        preset[]=
        {
            "JCA M107 M33",
            838,
            100,
            0.0837694,
            -0.00065856,
            7.32,
            0,
            2,
            10,
            120,
            0,
            0,
            42.83,
            12.31,
            38.10,
            0.62,
            1,
            "ICAO",

            {
                {-15,819},
                {0,824},
                {10,832},
                {15,838},
                {25,853},
                {30,861},
                {35,871}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class JCA_B_127x99_Ball_AMAX
    {
        preset[]=
        {
            "JCA M107 AMAX",
            826,
            100,
            0.0842535,
            -0.00039574,
            7.32,
            0,
            2,
            10,
            120,
            0,
            0,
            48.60,
            12.43,
            38.10,
            1.0362,
            1,
            "ICAO",

            {
                {-15,807},
                {0,812},
                {10,820},
                {15,826},
                {25,841},
                {30,849},
                {35,859}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class JCA_B_127x99_Ball_M903_SLAP
    {
        preset[]=
        {
            "JCA M107 SLAP",
            1132,
            100,
            0.0646443,
            -0.00051605,
            7.32,
            0,
            2,
            10,
            120,
            0,
            0,
            23.17,
            10.14,
            38.10,
            0.735,
            1,
            "ICAO",

            {
                {-15,1113},
                {0,1118},
                {10,1126},
                {15,1132},
                {25,1147},
                {30,1155},
                {35,1165}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class JCA_B_127x99_Ball_Mk211_HEIAP
    {
        preset[]=
        {
            "JCA M107 HEIAP",
            828,
            100,
            0.0847119,
            -0.00062936,
            7.32,
            0,
            2,
            10,
            120,
            0,
            0,
            43.48,
            12.37,
            38.10,
            0.651,
            1,
            "ICAO",

            {
                {-15,809},
                {0,814},
                {10,822},
                {15,828},
                {25,843},
                {30,851},
                {35,861}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class JCA_B_127x99_Ball_M8_API
    {
        preset[]=
        {
            "JCA M107 API",
            841,
            100,
            0.0835936,
            -0.00070327,
            7.32,
            0,
            2,
            10,
            120,
            0,
            0,
            40.34,
            12.02,
            38.10,
            0.58,
            1,
            "ICAO",

            {
                {-15,822},
                {0,827},
                {10,835},
                {15,841},
                {25,856},
                {30,864},
                {35,874}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
};