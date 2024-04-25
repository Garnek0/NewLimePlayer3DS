# IMPORTANT! NewLimePlayer3DS and LimePlayer3DS
NewLimePlayer3DS is a fork of the original LimePlayer3DS. My goal is to keep the pretty much abandoned LimePlayer3DS alive by implementing some missing features. I do not own all of the code from this repository, most of it belongs to the LimePlayer team.

# NewLimePlayer3DS
NewLimePlayer3DS is a GUI music player for the 3DS with metadata parsing and software MIDI support. For more info, check the [Original LimePlayer3DS Repo](https://github.com/oreo639/LimePlayer3DS)

## Note
NewLimePlayer3DS is still in early development. There are missing features and you may encounter bugs.

## Officaly Supported Formats
+ MP3 
+ Wave 
+ FLAC 
+ MIDI
+ XMI
+ MUS
+ HMI
+ HMP
+ OGG vorbis
+ Opus

## Building
### Prerequsites:
[dkp-pacman](https://devkitpro.org/wiki/devkitPro_pacman)

3ds-dev 3ds-mpg123 3ds-libvorbisidec 3ds-opusfile 3ds-flac 3ds-wildmidi 3ds-jansson 3ds-pkg-config

You may also need [makerom](https://github.com/profi200/Project_CTR) and [bannertool](https://github.com/Steveice10/bannertool/) for cia building (optional).

### Compiling:
Once you complete Prerequsites, run `make` or `make <target>`. Replace `<target>` with one of the targets listed below

### Targets:
+ 3dsx (3dsx only build)
+ cia (generate cia, 3dsx must be built first)
+ clean (clean compiled files)

If you want to build with compiler optimazitions, just add RELEASE=1 to the end (EX: `make 3dsx RELEASE=1`)

## Contributors
Check [CONTRIBUTORS.md](CONTRIBUTORS.md) for more information

## Credits
+ Deltabeard: For his work on ctrmus which was the original foundation for this application as LimePlayer3DS initally started out as a fork of ctrmus.

+ devkitPro: For providing amazing, easy to use, toolchains that without, this application would have never existed.

+ Astronautlevel & LiquidFernir (and the Anemone3DS team): For their work on Anemone3DS which helped quite a bit when it came to starting with citro2d graphics, and they were very helpful in general.

+ Flagbrew: The GUI code is heavilly based on PKSM's GUI code.

+ LimePlayer Team: Developers of the original LimePlayer3D.

+ Others: If I forgot to mention someone important (for example: your code is used without credit), please let me know.

+ Most of the icons under gfx are from the site [icons8.com](https://icons8.com) and are licensed under the [CC-BY-NC-SA](https://creativecommons.org/licenses/by-nc-sa/3.0/)

## Special Thanks
+ The Easyrpg Team: For inspiring this application.

+ smealum, fincs, WinterMute, and devkitPro contributors: For making/maintaining documentation and examples for libctru and citro2d/3d which is incredibly helpfull when working on this project.

+ Testers: For testing, providing feedback, and reporting bugs.

## Copyright
LimePlayer3DS and NewLimePlayer3DS are both licensed under the GPLv3-or-later. Additional terms 7c apply.

You should have received a copy of the GNU General Public License along with this program.  If not, see <http://www.gnu.org/licenses/>.
