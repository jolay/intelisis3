<?php
/**
 * @file
 * Google AdWord template for page JS.
 */
?>
<!-- Google Code for Conversion Page //-->
<script type="text/javascript">
  /* <![CDATA[ */
  var google_conversion_id = <?php print $conversion_id; ?>;
  var google_conversion_language = "<?php print $conversion_language; ?>";
  var google_conversion_format = "<?php print $conversion_format; ?>";
  var google_conversion_color = "<?php print $conversion_color; ?>";
  var google_conversion_label = "<?php print $conversion_label; ?>";
  var google_conversion_value = 1.00;
  var google_conversion_currency = "MXN";
  var google_remarketing_only = false;
  /* ]]> */
</script>
<script type="text/javascript" src="<?php print $google_js; ?>"></script>
<noscript>
<img height="1" width="1" border="0" src="https://www.googleadservices.com/pagead/conversion/<?php print $conversion_id; ?>/?value=1.00&amp;currency_code=MXN&amp;label=<?php print $conversion_label; ?>&amp;guid=ON&amp;script=0"/>
</noscript>
