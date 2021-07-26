<?php
namespace Beakman;

use Other\Crap;
use Other\Error as OtherError;

class Foo
{
    /**
     */
    public function testValidComment()
    {
    }

    public function missingComment()
    {
    }

    // not valid
    public function invalidComment()
    {
    }

    /**
     */
    #[
        ReturnTypeWillChange
    ]
    public function testValidAttribute()
    {
    }

    /**
     */

    public function spaceAfterComment()
    {
    }

    /**
     */

    #[ReturnTypeWillChange]
    public function spaceAfterCommentAndBeforeAttribute()
    {
    }

    /**
     */
    #[ReturnTypeWillChange]

    public function spaceAfterCommentAndAttribute()
    {
    }

    /**
     */
    #[ReturnTypeWillChange]

    #[ReturnTypeWillChange2]
    public function spaceBetweenCommentAndAttribute()
    {
    }

    /**
     * Test throws
     *
     * @throws Exception An expection happened.
     * @throws CakePHP\Boom A boom went off.
     * @throws CakePHP\Error\Boom Oh, shucks, another boom.
     * @throws Other\Crap Oh boy.
     * @throws Other\Error\Issue A missing tissue for your PSR-2 issues.
     * @return void
     */
    public function test()
    {
        switch ($a) {
            case 1:
                throw new Boom();
            case 2:
                throw new Error\Boom();
            case 3:
                throw new OtherError\Issue();
            case 4:
                throw new Crap();
            default:
                throw new \Exception();
        }
    }

    /**
     * @return void
     * @throws
     */
    public function invalidThrows()
    {
        throw new \RuntimeException();
        return;
    }
}