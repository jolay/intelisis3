<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $terms: the themed list of taxonomy term links output from theme_links().
 * - $display_submitted: whether submission information should be displayed.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
$content['add_to_cart']['#form']['qty']['#attributes']['class'] = array('qty', 'text', 'input-text');
$content['add_to_cart']['#form']['qty']['#prefix'] = '<div class="quantity"><a href="#" title="'.t('remove from cart').'" class="ac-button minus">-</a>';
$content['add_to_cart']['#form']['qty']['#suffix'] = '<a href="#" title="'.t('add to cart').'" class="ac-button plus">+</a></div>';
?>
<?php if ($node_top = render($node_top) && trim((string)$node_top) !=''): ?>
  <div class="l-region l-node-top">
    <?php print render($node_top);?>
  </div>
<?php endif; ?>

<section id="node-<?php print $node->nid; ?>" class="row <?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="s-i">
    <div class="ac-page-section-container">
      
      <!-- [Product media] --> 
      <div class="product-images media clearfix ac-col ac-one-half">
        <div class="col-inner">
          <?php print render($product_images)?>
      </div>
      </div>
      <!-- [/Product media] -->
      
      <!-- [Product description] -->
      <div class="description clearfix ac-col ac-one-half">
      <div class="col-inner">
        <div class="node-meta header">
          
          <h3 class="price meta">
            <ins class="current"><?php print strip_tags(render($content['display_price'])); ?></ins>
            <?php if($old_price = render($content['field_old_price'])): ?>
              <del class="old"><span><?php print variable_get('uc_currency_sign', '') . strip_tags($old_price); ?></span></del>
            <?php endif; ?>
          </h3>
        
          <div class="rating meta clearfix">
            <?php print render($content['field_rating']); ?>
            <span class="sep"></span>
            <span class="review_num">
              <a href="#reviews" rel="nofollow" title="<?php print t('see reviews'); ?>"><span class="count" itemprop="ratingCount"><?php print $comment_count?></span> <?php print t('review' . ($comment_count == 1 ? '' : 's')); ?></a>
            </span>
          </div>
        </div>
        
        <?php print render($content['field_excerpt']); ?>
        <div class="ac-divider ac-full ac-type-thin_solid ac-align-center ac-size- clearfix" style="height:20px"><div class="divider-inner"></div></div>
        
        <div class="buttons_added ac-margin-small">
          <?php print render($content['add_to_cart']); ?>
        </div>
    
        <div class="spacer"></div>
    
        <div class="node-meta footer">
          <div class="sku_wrapper meta">
            <strong><?php print t('SKU:')?></strong>
            <?php print render($content['model']); ?>
          </div>
          <div class="ac-divider ac-type-line ac-align-center clearfix"><div class="divider-inner"></div></div>
          <div class="product_catalog meta">
            <strong><?php print t('catalog:')?></strong>
            <?php print strip_tags(render($content['taxonomy_catalog']), '<a>'); ?>
          </div>
          <div class="ac-divider ac-type-line ac-align-center clearfix"><div class="divider-inner"></div></div>
          <div class="product_tags meta">
            <strong><?php print t('tags:')?></strong>
            <?php print strip_tags(render($content['field_product_tag']), '<a>'); ?>
          </div>
          <div class="ac-divider ac-type-line ac-align-center clearfix"><div class="divider-inner"></div></div>
          <?php print $share_links ?>
        </div>
      </div>
      </div>
      <!-- [/Product description] -->
    </div>

    <div class="product-tabs ac-tabs fancy-style no-sep-style ac-no-borders clearfix" data-init="1">
     <div class="ac-tabs-i">
      <div class="ac-tabs-panes ac-frame-on">
       <div class="ac-tab">
        <div class="ac-tab-tab">
           <?php print t('description'); ?>
        </div>
   
        <div class="ac-tab-pane">
         <div class="inner clearfix">
            <h4 class="ac-margin-small block__title"><?php print t('Product description'); ?></h4>
            <?php print render($content['body']); ?>
         </div>
        </div>
       </div>
       <!--Tab 3-->
       <div class="ac-tab">
        <div class="ac-tab-tab">
         <?php print t('additional information'); ?>
        </div>
        <div class="ac-tab-pane">
         <div class="inner clearfix">
          <h4 class="ac-margin-small block__title"><?php print t('additional information'); ?></h4>
           <?php
             unset($content['field_excerpt'], $content['field_rating'], $content['field_tags'], $content['field_category']);
             $rows = array();
             foreach($content as $key => $field){
               if(strpos($key, 'field') !== FALSE){
                 $title = $content[$key]['#title'];
                 $content[$key]['#title'] = '';
                 if (render($content[$key]) == '') {
                   continue;
                 }
                 $rows[] = array($title, render($content[$key]));
               }
             }
             $weight = render($content['weight']);
             if($weight) {
               $rows[] = array(t('Weight'), $weight);
             }
             $dimensions = render($content['dimensions']);
             if($dimensions) {
               $rows[] = array(t('Dimensions'), $dimensions);
             }
             print theme('table', array('rows' => $rows, 'attributes' => array('class' => array('table table-striped'))));
           ?>
         </div>
        </div>
       </div>
       <!--Tab 2-->
       <div class="ac-tab" data-id="reviews">
        <div class="ac-tab-tab">
         <?php print t('Reviews (' . $comment_count . ')'); ?>
        </div>
        <div class="ac-tab-pane reviews">
         <div class="inner clearfix">
           <?php print render($content['comments']); ?>
         </div>
        </div>
       </div>
       <!--Tab 3-->
      </div>
     </div>
    </div>
    <!--Tabs-->
   </div>
</section>
<?php
$node_bottom = array_filter((array)$node_bottom, 'acquia_filter_blocks');
if (count($node_bottom)): ?>
  <div class="l-region l-node-bottom">
    <?php print render($node_bottom);?>
  </div>
<?php endif; ?>

