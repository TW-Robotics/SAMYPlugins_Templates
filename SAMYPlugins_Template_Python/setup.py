import setuptools

with open("README.md", "r") as fh:
    long_description = fh.read()

setuptools.setup(
    name="samyplugin",
    version = "0.2",
    author = "Felix Leber",
    author_email = "leber@technikum-wien.at",
    description = "Samy plugin package.",
    long_description = long_description,
    long_description_content_type="text/markdown",
    packages=setuptools.find_packages(include=['samyplugin', 'samyplugin.*']),
    url = "https://github.com/TW-Robotics/SAMYPlugins_Templates",
    classifiers=[
        "Programming Language :: Python :: 3",
        "License :: OSI Approved :: MIT License",
        "Operating System :: OS Independent",
    ],
    install_requires = [
        "pypubsub",
        "ipython",
        "pyyaml",
        "python-dateutil",
        "numpy",
        "lxml",
        "pytz",
        "cryptography",
    ]
)
