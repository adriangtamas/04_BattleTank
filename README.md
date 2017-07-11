# 04_BattleTank
An open world head-to-head tank fight with simple AI, terrain and advanced control system in UE4

Part of the Tutorial on Udemy by Ben Tristem and Sam Pattuzzi

Tanks provide some interesting challenges for the student of game development, for example the following questions immediately spring to mind...

    How will the control system work?
    How do we make tracks animate properly?
    How will view control interact with tank controls?
    How do I create an open-world environment?
    How do I handle destruction and damage?


A tank game is a great stepping-stone to skeletal assets such as humanoids. We get to cover a lot of the details of subtle control, interaction with environment, 3rd person and 1st person camera work and more.

Before we start tackling these issues in the upcoming blogs, we must first define the scope of our game. It's worth writing a Game Design Document (GDD) even if you never look at it again. The whole process can take only minutes, and it really forces you to think. The structure we go for is...
Concept
Outline what the game is about in a paragraph or so. For example...

    Tank battle is an open-world head-to-head tank combat game. The terrain will be used for tactical advantage.

Rules
How do you win? How do you lose? How does scoring work? What is allowed? What isn't? For example...

    + You can move anywhere in the terrain, which is surrounded by mountains.
    + Both players start with finite health and ammo.
    ​+ Each direct hit takes away health.
    + The last player standing wins.

Requirements
What assets are needed? Think 3D art, 2D art, sound effects & music. For example...

    SFX: Gun firing, explosion, barrel moving, turret moving, engine sound.
    Static mesh: Simple tank comprising tracks, body, turret and barrel.
    Music:​ Background music to create tension.

And it can literally be as simple as that for now! So, there's really no reason not to write a really simple GDD for your next game!

Lecture List
- BT001 Intro, Notes & Assets
- BT002 Game Design Document (GDD)
- BT003 Creating & Deleting Landscapes
