# Tokyo OS 🚀

Tokyo OS is a minimalist operating system featuring basic framebuffer rendering and powered by the Limine bootloader.

## ✨ Features (for now)

- 🖼️ Framebuffer for pixel-level graphics rendering.
- ⚡ Clean and simple foundation for further development.

## 📋 Requirements

- 🛠️ GCC (Cross-compiler recommended for x86_64)  
- 📦 Make  
- 🖥️ QEMU (for emulation)  
- 🪝 Limine bootloader (included in the project)  

## 🚀 Installation & Running

1. Clone the repository:  
   ```bash
   git clone https://github.com/lyr-ast/tokyoOS
   cd tokyo
   ```
2. Use the helper script to build and run:
   ```
   ./tools/run.sh
   ```
   
  - 🛠️ Builds the OS using make.
  - 🖥️ Launches it instantly in QEMU.

## 📄 License

Tokyo OS is released under the [MIT License](LICENSE).  
Feel free to use, modify, and distribute this project. Contributions are welcome! 🚀
