<p><IMG src="../img/logo-sun.jpg" border="0" width="180" height="97"></p>

<H3>The 'Example-201' Test</H3>

<p>This test about the use of the C++ programming language shows how declaring correctly a <i><code>'struct'</code></i>. In particular, this test exploits <i><code>3</code></i> possible declarations of a <i><code>'struct'</code></i>.</p>

<p>Usually, if all fields of the <i><code>'struct'</code></i> are known, then we can correctly declare a <i><code>'struct'</code></i> as follows:
<pre><code>struct S { int x; ... }</code></pre></p>

<p>If any of fields is recursively typed by the <i><code>'struct'</code></i> we are declaring, then we must exploit a pointer, like in the following (correct) declaration:<pre><code>struct S { S* f; ... }</code></pre></p>

<p>Instead, the following declaration is <i>not correct</i>, since the <i><code>'struct'</code></i> declaration must be finalized before being exploited:
<pre><code>struct S { S f; ... }</code></pre></p>
<table border="1">
<tr>
    <td><p><strong>VERY IMPORTANT:</strong></p>As a consequence, this test cannot be built correctly by any C++ compiler, due to the wrong declaration of <i><code>'struct'</code></i> in use. 
    </td>
</tr>
</table>
<p><hr></p>

<!--- Test Files Organization --->
<h4>Test Files Organization</h4>
<p>This test is based uniquely on the <i>'main.cpp'</i> C++ source file (in the <i><code>'src'</code></i> folder) without using other dependencies.</p>

<p>Several methods for attempting to build this test are provided, and their building infrastructure is saved in the following folders:<ul>
	<li>
		the <i><code>'cmake'</code></i> folder contains the project file for the <i><A href="https://cmake.org">CMake Building Tool</A></i>;
	</li>
	<li>
		the <i><code>'vstudio'</code></i> folder contains the solution file for the <i><A href="https://www.visualstudio.com/">Microsoft Visual Studio (Community Edition 2017)</A></i>;
	</li>
	<li>
		the <i><code>'xcode'</code></i> folder contains the project file for the <i><A href="https://developer.apple.com/xcode/">Apple Xcode</A></i>.
	</li>
</ul>
</p>
<p>In any case, no executable file is created by this test, as mentioned above.</p>
<p><hr></p>

<!--- Building with the Cmake Building Tool --->
<h4>Instructions for building this test with the <i><A href="https://cmake.org">CMake Building Tool</A></i></h4>
<p>
	This test could be built by using the <i>classic</i> instructions for building a program with the <i><A href="https://cmake.org">CMake Building Tool</A></i> from the <i><code>'cmake'</code></i> folder:
</p>
<pre>mkdir build
cd build
cmake ..
make
</pre>
<p>
	This building method is tested with the <A href="https://gcc.gnu.org/"><i>GCC</i></A> under the Ubuntu Linux 16.0.4 (LTS), as well as with the <A href="https://clang.llvm.org/"><i>CLANG</i></A> compiler under the OS X 10.11.* El-Capitan (and higher), and the <A href="https://www.visualstudio.com/"><i>Microsoft Visual Studio (Community Edition 2017)</i></A> under the Microsoft Windows 8.1 (and higher).
</p>
<p>
	In this latter case, <code>3</code> custom projects are automatically generated, and ready to be open in the <A href="https://www.visualstudio.com/"><i>Microsoft Visual Studio (Community Edition 2017)</i></A>. The solution file of interest is the <i>'Example-201.sln'</i> solution file, which can be open and built without being modified.
</p>
<p>In any case, no executable file is created by this test, as mentioned above.</p>
<p>
	An interested user finds more details about other possible customization options in the Official Documentation of the <i><A href="https://cmake.org">CMake Building Tool</A></i>.
</p>
<p><hr></p>

<!--- Building with the Microsoft Visual Studio --->
<h4>Instructions for building this test with the <i><A href="https://www.visualstudio.com/">Microsoft Visual Studio (Community Edition 2017)</A></i></h4>
<p>
	This test could also be built by using the <A href="https://www.visualstudio.com/"><i>Microsoft Visual Studio (Community Edition 2017)</i></A> under the Microsoft Windows 8.1 (and higher). In particular, the <i><code>'vstudio'</code></i> folder contains the <i>'Example-201.sln'</i> solution file, which can be open and built without being modified. It can be built by clicking on the <i>'Build'</i> command.
</p>
<p>
	Note that this solution file is independently created from scratch, and is different from the solution file, which may be generated automatically by the <i><A href="https://cmake.org">CMake Building Tool</A></i>.
</p>
<p>In any case, no executable file is created by this test, as mentioned above.</p>
<p>
	An interested user finds more details in the Official Documentation of the <i><A href="https://www.visualstudio.com/">Microsoft Visual Studio (Community Edition 2017)</A></i>.
</p>
<p><hr></p>

<!--- Building with the Apple Xcode --->
<h4>Instructions for building this test with the <i><A href="https://developer.apple.com/xcode/">Apple Xcode</A></i></h4>
<p>
	This test is also built by using the <A href="https://developer.apple.com/xcode/"><i>Apple Xcode</i></A> (based on the <A href="https://clang.llvm.org/"><i>CLANG</i></A> compiler) under the OS X 10.11.* El-Capitan (and higher). In particular, the <i><code>'xcode'</code></i> folder contains the <i>'Example-202.xcodeproj'</i> project file, which can be open and built without being modified. It can be built by clicking on the <i>'Build & Run'</i> command.
</p>
<p>
	Note that this project file is independently created from scratch, and is different from the project file, which may be generated automatically by the <i><A href="https://cmake.org">CMake Building Tool</A></i>.
</p>
<p>In any case, no executable file is created by this test, as mentioned above.</p>
<p>
	An interested user finds more details in the Official Documentation of the <A href="https://developer.apple.com/xcode/"><i>Apple Xcode</i></A>.
</p>
<p><hr></p>

<!--- Final Attention Message --->
<table border=1>
	<tr>
		<td>
			<p><b>ATTENTION:</b></p>
			<p>All third-party registered trademarks are the property of their respective owners. I am not affiliated to or sponsored by these third-party entities.</p>
		</td>
	</tr>
</table>