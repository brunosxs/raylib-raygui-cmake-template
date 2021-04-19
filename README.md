# RAYLIB + RAYGUI + CMAKE Template

Heya there, if you reached this repo, it all began with me trying to make a bearable raylib workflow for a pixel art editor I was hoping to do. It will build raylib and raygui from sources and static link it to your project.
[Original post in my website] (https://www.brunosxs.com/posts/setting-up-raylib-raygui-with-cmake/)

## Building

- Be sure to have [all dependencies raylib requires to build itself with](https://github.com/raysan5/raylib/wiki/Working-on-GNU-Linux).
- At the root of the project, just do:
```shell
mkdir build && cd build && cmake .. && make
```