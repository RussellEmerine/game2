.PHONY : all

#n.b. the '-y' sets autoexec scripts to 'on' so that driver expressions will work
#UNAME_S := $(shell uname -s)
#ifeq ($(UNAME_S),Darwin)
#	BLENDER = /Applications/Blender/blender.app/Contents/MacOS/blender -y
#else ifeq ($(UNAME_S),Linux)
#	BLENDER = ../../blender-2.93.4-linux-x64/blender -y
#else
#	BLENDER = blender
#endif

BLENDER = /Applications/Blender.app/Contents/MacOS/Blender -y

EXPORT_MESHES=export-meshes.py
EXPORT_SCENE=export-scene.py

DIST=../dist

all : \
	$(DIST)/garden.pnct \
	$(DIST)/garden.scene \


$(DIST)/garden.scene : garden.blend $(EXPORT_SCENE)
	$(BLENDER) --background --python $(EXPORT_SCENE) -- '$<':Main '$@'

$(DIST)/garden.pnct : garden.blend $(EXPORT_MESHES)
	$(BLENDER) --background --python $(EXPORT_MESHES) -- '$<':Main '$@'
