<p><IMG src="../img/logo-sun.jpg" border="0" width="180" height="97"></p>

<H3>The 'Example-009' Test</H3>
	
<p>
	This basic test about the use of the C++ programming language shows how exploiting several custom functions, defined and implemented on a separate C++ header and source file, respectively, in a C++ program. These custom functions exploit several capabilities, introduced by the C++11 standard. In this context, the user can choose what custom function must be executed through a basic textual shell. Broadly speaking, this test is another example of the <i>separate (modular) compiling</i> techniques for exploiting a (third-party) module in a C++ program.
</p>


<p>In particular, this test consists of the <i>'Example-009'</i> executable file, which is based on several components. These latter are distributed in a few files:
<ul>
	<li>
		the <i>'main()'</i> function is implemented in the <i>'main.cpp'</i> C++ source file (in the <i><code>'src'</code></i> folder);
	</li>
	<li>
		the custom functions of interest are defined in the <i>'myfunctions.h'</i> C++ header file (in the <i><code>'include'</code></i> folder);
	</li>
	<li>
		the custom functions of interest are implemented in the <i>'myfunctions.cpp'</i> C++ source file (in the <i><code>'src'</code></i> folder).
	</li>
</ul>
</p>

<p>Several methods for building this test are provided, and their building infrastructure is saved in the following folders:<ul>
	<li>
		the <i><code>'cmake'</code></i> folder contains the project file for the <i><A href="https://cmake.org">CMake Building Tool</A></i>;
	</li>
	<li>
		the <i><code>'vstudio'</code></i> folder contains the solution file for the <i><A href="https://www.visualstudio.com/">Microsoft Visual Studio (Community Edition 2017)</A></i>;
	</li>
	<li>
		the <i><code>'xcode'</code></i> folder contains the project file for the <i><A href="https://developer.apple.com/xcode/">Apple XCode</A></i>.
	</li>
</ul>
</p>

<p>
	<!--- C++11 Alert --->
	<table border=1 width=100%>
		<tr>
			<td>
				<p><b>VERY IMPORTANT:</b></p>
					<p>
						It is clear that this test can be built and run ONLY if your C++ compiler is a C++11-compliant compiler. The most recent versions of the compilers in the current literature are C++11-compliant.
					</p>
			</td>
		</tr>
	</table>
</p>
<p><hr></p>

<!--- Building with the CMAKE Building Tool --->
<h4>Instructions for building this test with the <i><A href="https://cmake.org">CMake Building Tool</A></i></h4>
<p>
	This test is built by using the <i>classic</i> instructions for building a program with the <i><A href="https://cmake.org">CMake Building Tool</A></i> from the <i><code>'cmake'</code></i> folder:
</p>
<pre>mkdir build
cd build
cmake ..
make
</pre>
<p>
	As mentioned above, the <i>'Example-009'</i> executable file is created. For instance, this test is executed by running:
</p>
<pre>./Example-009</pre>
<p>
	This building method is tested with the <A href="https://gcc.gnu.org/"><i>GCC</i></A> under the Ubuntu Linux 16.0.4 (LTS), as well as with the <A href="https://clang.llvm.org/"><i>CLANG</i></A> compiler under the MacOsX 10.11.* El-Capitan (and higher), and the <A href="https://www.visualstudio.com/"><i>Microsoft Visual Studio (Community Edition 2017)</i></A> under the Microsoft Windows 8.1 (and higher).
</p>
<p>
	In this latter case, <code>3</code> custom projects are automatically generated, and ready to be open in the <A href="https://www.visualstudio.com/"><i>Microsoft Visual Studio (Community Edition 2017)</i></A>. The solution file of interest is the <i>'Example-009.sln'</i> solution file, which can be open and built without being modified.
</p>
<p>
	An interested user finds more details about other possible customization options in the Official Documentation of the <i><A href="https://cmake.org">CMake Building Tool</A></i>.
</p>
<p><hr></p>

<!--- Building with the Microsoft Visual Studio --->
<h4>Instructions for building this test with the <i><A href="https://www.visualstudio.com/">Microsoft Visual Studio (Community Edition 2017)</A></i></h4>
<p>
	This test is also built by using the <A href="https://www.visualstudio.com/"><i>Microsoft Visual Studio (Community Edition 2017)</i></A> under the Microsoft Windows 8.1 (and higher). In particular, the <i><code>'vstudio'</code></i> folder contains the <i>'Example-009.sln'</i> solution file, which can be open and built without being modified. It can be built by clicking on the <i>'Build'</i> command.
</p>
<p>
	Note that this solution file is independently created from scratch, and is different from the solution file, which may be generated automatically by the <i><A href="https://cmake.org">CMake Building Tool</A></i>.
</p>
<p>
	An interested user finds more details in the Official Documentation of the <i><A href="https://www.visualstudio.com/">Microsoft Visual Studio (Community Edition 2017)</A></i>.
</p>
<p><hr></p>

<!--- Building with the Apple XCode --->
<h4>Instructions for building this test with the <i><A href="https://developer.apple.com/xcode/">Apple XCode</A></i></h4>
<p>
	This test is also built by using the <A href="https://developer.apple.com/xcode/"><i>Apple XCode</i></A> (based on the <A href="https://clang.llvm.org/"><i>CLANG</i></A> compiler) under the MacOsX 10.11.* El-Capitan (and higher). In particular, the <i><code>'xcode'</code></i> folder contains the <i>'Example-009.xcodeproj'</i> project file, which can be open and built without being modified. It can be built by clicking on the <i>'Build & Run'</i> command. The resulting <i>'Example-009'</i> executable file is stored either in the <i><code>'Build/Products/Debug/'</code></i> folder, if the debugging symbols are included, or in the <i><code>'Build/Products/Release/'</code></i> folder, otherwise.
</p>
<p>
	Note that this project file is independently created from scratch, and is different from the project file, which may be generated automatically by the <i><A href="https://cmake.org">CMake Building Tool</A></i>.
</p>
<p>
	An interested user finds more details in the Official Documentation of the <A href="https://developer.apple.com/xcode/"><i>Apple XCode</i></A>.
</p>
<p><hr></p>

<!--- Final Attention Message --->
<table border=1>
	<tr>
		<td>
			<p><b>ATTENTION:</b></p>
			<p>All third-party trademarks or registered trademarks are the property of their respective owners. I am not affiliated to or sponsored by these third-party entities.</p>
		</td>
	</tr>
</table>