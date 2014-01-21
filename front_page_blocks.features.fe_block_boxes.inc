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
  $fe_block_boxes->body = '<div style="margin: 0 0 20px 0; padding: 15px; height: 237px; background: url(https://itservices.stanford.edu/sites/default/files/images/2013/11/12/phishing2.jpg) no-repeat;">
  <h2 style="font-size: 2em; margin: 0; padding: 0;"><a href="http://news.stanford.edu/news/2013/november/prevent-email-phishing-111213.html" style="display: block; border: none; margin: 0; padding: 140px 0 0 5px; color: #fff;">Don&rsquo;t get caught!</a></h2>
  <p style="font-size: 1.3em; line-height: 1.1em; margin: 0; padding: 0.5em 0 0 0;"><a href="http://news.stanford.edu/news/2013/november/prevent-email-phishing-111213.html" style="display: block; color: #fff; border: none; padding: 0 0 0 5px;">Tips on how to avoid<br />email &lsquo;phishing&rsquo; attacks</a></p>
  </div>';

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
  $fe_block_boxes->body = '<i class="icon-lock"></i><h2>Security Resources</h2><ul><li><a href="http://ucomm.stanford.edu/computersecurity">Information Security Mandates</a></li><li><a href="http://www.stanford.edu/group/security/securecomputing/endpoint_compliance.html">New Minimum Security Requirements</a></li><li><a href="security/faq">Security Requirements Questions and Answers</a></li><li><a href="https://helpsu.stanford.edu/helpsu/?pcat=iso">Report security incident</a></li><!--<li><a href="http://news.stanford.edu/news/2013/november/prevent-email-phishing-111213.html">Avoiding email phishing attacks</a></li>--></ul>';

  $export['its_security'] = $fe_block_boxes;

  return $export;
}
