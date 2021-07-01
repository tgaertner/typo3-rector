<?php

namespace Ssch\TYPO3Rector\Tests\Rector\v8\v0\RenderCharsetDefaultsToUtf8Rector\Fixture;

use TYPO3\CMS\Frontend\Controller\TypoScriptFrontendController;

class MaxWordCount
{
    /**
     * @var array
     */
    private $gp = [];

    /**
     * @var string
     */
    private $formFieldName = '';

    public function check()
    {
        $GLOBALS['TSFE']->renderCharset = 'utf-8';
    }

    private function getTsfe(): TypoScriptFrontendController
    {
        return $GLOBALS['TSFE'];
    }
}

?>
-----
<?php

namespace Ssch\TYPO3Rector\Tests\Rector\v8\v0\RenderCharsetDefaultsToUtf8Rector\Fixture;

use TYPO3\CMS\Frontend\Controller\TypoScriptFrontendController;

class MaxWordCount
{
    /**
     * @var array
     */
    private $gp = [];

    /**
     * @var string
     */
    private $formFieldName = '';

    public function check()
    {
        $GLOBALS['TSFE']->renderCharset = 'utf-8';
    }

    private function getTsfe(): TypoScriptFrontendController
    {
        return $GLOBALS['TSFE'];
    }
}

?>
