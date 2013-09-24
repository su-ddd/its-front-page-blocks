<?php
/**
 * @file
 * front_page_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function front_page_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Front Page Banner Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'its_banner_block';
  $fe_block_boxes->body = '<div style="margin: 0; padding: 15px; height: 241px; background: url(https://itservices.stanford.edu/sites/default/files/images/2013/09/09/banner_graphic4.png) top left no-repeat;">
<div style="width: 320px; margin-top: 2.5em; margin-left: 1.3em;">
<h2 style="margin-top: 0;">Ready to set up two-step authentication?</h2>

<p style="font-size: 1.3em; line-height: 1.1em;">Get started at<br />
<a href="https://accounts.stanford.edu/r/tab/mf">accounts.stanford.edu</a>.</p>
</div>
</div>
';

  $export['its_banner_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Front Page: Email Communication';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'its_emailcomm';
  $fe_block_boxes->body = '<i class="icon-envelope"></i>
<h2>Received an email from IT Services?</h2>

<ul>
	<li><a href="announcements/email">Verified email from IT Services</a></li>
	<li><a href="phishing">Examples of phishing email (scams)</a></li>
</ul>
';

  $export['its_emailcomm'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Front Page: Security';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'its_security';
  $fe_block_boxes->body = '<i class="icon-lock"></i><h2>Security Resources</h2>

<ul>
	<li><a href="http://news.stanford.edu/news/2013/august/system-breach-update-082013.html">Campus leadership provides update on IT system breach, further security tips</a></li>
	<li><a href="https://helpsu.stanford.edu/helpsu/?pcat=iso">Report security incident</a></li>
</ul>
';

  $export['its_security'] = $fe_block_boxes;

  return $export;
}
