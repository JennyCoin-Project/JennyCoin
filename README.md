JennyCoin integration/staging tree
================================
What is JennyCoin?
----------------

JennyCoin is a lite version of Bitcoin using scrypt as a proof-of-work algorithm.
•Total Coins - 867530900
•1 Minute Blocks
•Difficulty will change every block
•Block Reward 867.5309
•Blocks 1-60 1% Premine total of 8,675,309JNY and to mature the premine
•Blocks 61-100 10 coin block reward
•Blocks 101-500 50 coin block reward
•Blocks 501-1000 100 coin block reward
•Block 1001 867.5309 coin block reward

License
-------

JennyCoin is released under the terms of the MIT license. See `COPYING` for more
information or see http://opensource.org/licenses/MIT.

Development process
-------------------

Developers work in their own trees, then submit pull requests when they think
their feature or bug fix is ready.

If it is a simple/trivial/non-controversial change, then one of the JennyCoin
development team members simply pulls it.

If it is a *more complicated or potentially controversial* change, then the patch
submitter will be asked to start a discussion (if they haven't already) on the
[mailing list](http://sourceforge.net/mailarchive/forum.php?forum_name=bitcoin-development).

The patch will be accepted if there is broad consensus that it is a good thing.
Developers should expect to rework and resubmit patches if the code doesn't
match the project's coding conventions (see `doc/coding.txt`) or are
controversial.

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/bitcoin/bitcoin/tags) are created
regularly to indicate new official, stable release versions of JennyCoin.

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test. Please be patient and help out, and
remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write unit tests for new code, and to
submit new unit tests for old code.

Unit tests for the core code are in `src/test/`. To compile and run them:

    cd src; make -f makefile.unix test

Unit tests for the GUI code are in `src/qt/test/`. To compile and run them:

    qmake BITCOIN_QT_TEST=1 -o Makefile.test JennyCoin-qt.pro
    make -f Makefile.test
    ./JennyCoin-qt_test

