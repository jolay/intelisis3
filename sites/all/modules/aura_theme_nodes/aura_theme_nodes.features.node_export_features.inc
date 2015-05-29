<?php
/**
 * @file
 * aura_theme_nodes.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function aura_theme_nodes_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'77\',
      \'uid\' => \'1\',
      \'title\' => \'empty hands\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'7efe0286-88f4-4203-a27e-e1ecad5b41b6\',
      \'nid\' => \'77\',
      \'type\' => \'portfolio\',
      \'language\' => \'und\',
      \'created\' => \'1389691002\',
      \'changed\' => \'1401020062\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'07d915ff-5443-4094-8b7a-aa3e6b3ef444\',
      \'revision_timestamp\' => \'1401020062\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row bg_color="sw_default" padding="zero" custom_color="#444444" borders="false" bg_parallax="false" bg_cover="false"][vc_column class="ac-no-margin" width="1/1" first="true" last="true" odd="true"][ac_page_header tag="h4" margin="x-small" align="left" sub="false"]About this project[/ac_page_header][vc_column_text font="normal"]Ut feugiat accumsan massa ut luctus. Ut mollis ac felis et varius. Integer dolor est, porttitor vel augue sit amet, molestie lobortis mi. Praesent risus nibh, convallis et pretium eget, consequat nec justo. Sed sagittis neque lorem, vitae lobortis purus luctus nec. Ut tempor sem a velit dapibus, sit amet consectetur urna auctor. In hac habitasse platea dictumst.[/vc_column_text][vc_column_text font="normal"]<p>Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat. Excepteur sint obcaecat cupiditat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua.</p>[/vc_column_text][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'field_portfolio_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'65\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'thumb\' => array(
          \'type\' => \'image\',
          \'media\' => array(
            array(
              \'fid\' => \'559\',
            ),
          ),
          \'link_type\' => \'item\',
          \'link_image\' => array(
            \'fid\' => \'0\',
          ),
          \'link_video\' => array(
            \'fid\' => \'0\',
          ),
          \'link_url\' => \'\',
        ),
        \'media\' => array(
          \'add_thumbs\' => \'Add another Image\',
        ),
        \'preview\' => array(
          \'use_thumb\' => 1,
          \'type\' => \'image\',
          \'add_prev_item\' => \'Add another preview\',
        ),
        \'misc\' => array(
          \'excerpt\' => array(
            \'value\' => \'Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquid ex ea commodi consequat. Lorem ipsum dolor sit amet, consectetur adipisici elit, sed eiusmod tempor incidunt ut labore et dolore magna aliqua.\',
            \'format\' => \'full_html\',
          ),
          \'link\' => \'http://example.net\',
          \'link_title\' => \'\',
          \'layout\' => \'disabled\',
          \'custom_frame\' => 0,
          \'frame\' => \'\',
          \'view\' => \'list\',
          \'display\' => \'standard\',
          \'columns\' => \'1\',
          \'spaced\' => 0,
          \'meta\' => 0,
          \'social\' => 1,
        ),
        \'hero_style\' => array(
          \'enabled\' => 1,
          \'disabled\' => 0,
          \'style\' => \'fancy\',
          \'bg_type\' => \'dark\',
          \'bg\' => array(
            \'fid\' => \'559\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'stretch\',
          \'height\' => \'300\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'fancy\',
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 0,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'6\',
        ),
        \'header_style\' => array(
          \'header-enabled\' => 0,
          \'transparent_header\' => 0,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'full\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'\',
          \'main_menu_style\' => \'\',
        ),
        \'node_layout\' => \'no-sidebars\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1391174109\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'243\',
        \'source\' => \'node/77\',
        \'alias\' => \'portfolio/empty-hands\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'412\',
      \'uid\' => \'1\',
      \'title\' => \'Home V9\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a517a288-87bb-4c85-9d9b-79536b22444c\',
      \'nid\' => \'412\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1399299892\',
      \'changed\' => \'1400176059\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'097a0ea9-90c4-46ee-8492-54c11f4ac5f0\',
      \'revision_timestamp\' => \'1400176059\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row bg_color="sw_default" padding="large" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][ac_page_header tag="h2" align="center" margin="large"]Our services[/ac_page_header][vc_row_inner][vc_column_inner width="1/3" first="true" odd="true"][ac_iconbox type="simple full" size="large" icon_type="icon" border="circled" icon_position="center" color="grey" title="100% Responsive layout" tag="h3" color_clone="true" animate="ac_appear" when="visible" icon="59426"][vc_column_text font="normal"]AURA&nbsp;is fully responsive no matter how you decide to build your pages. Create layouts that your visitors can enjoy on any device and enjoy the responsiveness![/vc_column_text][/ac_iconbox][/vc_column_inner][vc_column_inner width="1/3" even="true"][ac_iconbox type="simple full" size="large" icon_type="icon" border="circled" icon_position="center" color="grey" title="Tons of gallery " tag="h3" color_clone="true" icon="59577"][vc_column_text font="normal"]Present your work to the crowd, with our portfolio management you can easily create your own showcase so that everyone is able to find and see your work on the web![/vc_column_text][/ac_iconbox][/vc_column_inner][vc_column_inner width="1/3" last="true" odd="true"][ac_iconbox type="simple full" size="large" icon_type="icon" border="circled" icon_position="center" color="grey" title="Unlimited Skins" tag="h3" color_clone="true" icon="59436"][vc_column_text font="normal"]You’ll love the endless possibilities with&nbsp;AURA. Unlimited portfolios, color options, staff, testimonials, blogs, page layouts. You are only limited by your creativity![/vc_column_text][/ac_iconbox][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row style="2" bg_color="sw_default" padding="default" custom_color="#444444" no_border="true" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][ac_page_header tag="h2" align="center" margin="large"]we are experienced at[/ac_page_header][ac_grid columns="4" borders="true"][ac_pie title="database design" value="94" units="%" unit_pos="tr" fill="#ffffff" bg_style="light" color="white" gridy="true"][/ac_pie][ac_pie title="Network security" value="79" units="%" unit_pos="tr" fill="#ffffff" bg_style="light" color="white" gridy="true"][/ac_pie][ac_pie title="elasticSearch" value="24" units="%" unit_pos="tr" fill="#ffffff" bg_style="light" color="white" gridy="true"][/ac_pie][ac_pie title="python development" value="57" units="%" unit_pos="tr" fill="#ffffff" bg_style="light" color="white" gridy="true"][/ac_pie][/ac_grid][/vc_column][/vc_row][vc_row bg_color="sw_default" padding="default" no_bottom_space="true" custom_color="#444444" no_border="true" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][ac_page_header tag="h2" align="center" margin="large"]our work[/ac_page_header][ac_portfolio id="p-items-5367a3e5ed123" appearance="masonry" gplus_effect="fly" gplus_height="350" total="8" pager="simple" num_per_page="-1" cols="4" view="fade-in-bottom" frame="none" width="equal" style="portfolio-recent" effect="none" filter_style="simple centered" fullwidth="true" media="true" title="true" date="true" date_format="M j, Y" tags="true" proj_link="true" sorting="false" spaced="false" details_link="false" excerpt="false"][/ac_portfolio][/vc_column][/vc_row][vc_row style="2" bg_color="sw_default" padding="default" custom_color="#444444" no_border="true" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][vc_row_inner][vc_column_inner width="1/4" first="true" odd="true"][/vc_column_inner][vc_column_inner width="1/2" even="true"][ac_page_header tag="h2" align="center" margin="large"]get in touch[/ac_page_header][ac_contact cid="1" style="centered" bg_style="light" type_title="Website feedback"][/ac_contact][/vc_column_inner][vc_column_inner width="1/4" last="true" odd="true"][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'header_style\' => array(
          \'header-enabled\' => 1,
          \'transparent_header\' => 1,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'full\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'\',
          \'main_menu_style\' => \'\',
        ),
        \'hero_style\' => array(
          \'enabled\' => 1,
          \'disabled\' => 1,
          \'style\' => \'fancy\',
          \'bg_type\' => \'light\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'fancy\',
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 1,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'62\',
        ),
        \'node_layout\' => \'full-width\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1399299892\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'195\',
        \'source\' => \'node/412\',
        \'alias\' => \'home/v9\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'home v9\',
        \'mlid\' => 0,
        \'plid\' => \'431\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-42\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'414\',
      \'uid\' => \'1\',
      \'title\' => \'Home main\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'be971950-7921-4415-ac2c-3dd8629ffd2a\',
      \'nid\' => \'414\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1399328714\',
      \'changed\' => \'1401894720\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'2124aee2-d3eb-4ac0-823f-a97642b928c9\',
      \'revision_timestamp\' => \'1401894720\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "[vc_row bg_color=\\"sw_default\\" padding=\\"default\\" custom_color=\\"#444444\\" bg_parallax=\\"false\\" bg_cover=\\"false\\"][vc_column width=\\"1/1\\" first=\\"true\\" last=\\"true\\" odd=\\"true\\"][vc_row_inner padding=\\"zero\\" animate=\\"ac-flip-y\\" when=\\"visible\\" delay=\\"350\\"][vc_column_inner width=\\"1/4\\" first=\\"true\\" odd=\\"true\\"][ac_iconbox type=\\"simple full\\" size=\\"medium\\" icon_type=\\"icon\\" border=\\"circled\\" icon_position=\\"center\\" title=\\"Responsive Design\\" tag=\\"h4\\" color_clone=\\"true\\" icon=\\"59403\\"][vc_column_text font=\\"normal\\"]AURA is fully responsive no matter how you decide to build your pages. Create layouts that your visitors can enjoy on any device.[/vc_column_text][ac_button style=\\"sw_default\\" label=\\"see more\\" link_target=\\"_self\\" bg_color=\\"sw_default\\" size=\\"small\\" type=\\"sw_default\\" full_width=\\"true\\" block_level=\\"false\\" icon=\\"plus\\"][/ac_button][/ac_iconbox][/vc_column_inner][vc_column_inner width=\\"1/4\\" even=\\"true\\"][ac_iconbox type=\\"simple full\\" size=\\"medium\\" icon_type=\\"icon\\" border=\\"circled\\" icon_position=\\"center\\" title=\\"Unlimited Skins\\" tag=\\"h4\\" color_clone=\\"true\\" icon=\\"59436\\"][vc_column_text font=\\"normal\\"]You’ll love the endless possibilities with AURA. Unlimited portfolios styles, skin settings, testimonials, blogs, page layouts, tons of handy shortcodes.<br> [/vc_column_text][ac_button style=\\"sw_default\\" label=\\"see more\\" link_target=\\"_self\\" bg_color=\\"sw_default\\" size=\\"small\\" type=\\"sw_default\\" full_width=\\"true\\" block_level=\\"false\\" icon=\\"plus\\"][/ac_button][/ac_iconbox][/vc_column_inner][vc_column_inner width=\\"1/4\\" odd=\\"true\\"][ac_iconbox type=\\"simple full\\" size=\\"medium\\" icon_type=\\"icon\\" border=\\"circled\\" icon_position=\\"center\\" title=\\"Ubercart platform\\" tag=\\"h4\\" color_clone=\\"true\\" icon=\\"bag\\"][vc_column_text font=\\"normal\\"]Ubercart is the most popular Drupal E-Commerce platform for your website. It implements everything you need to start selling products online.&nbsp;[/vc_column_text][ac_button style=\\"sw_default\\" label=\\"see more\\" link_target=\\"_self\\" bg_color=\\"sw_default\\" size=\\"small\\" type=\\"sw_default\\" full_width=\\"true\\" block_level=\\"false\\" icon=\\"plus\\"][/ac_button][/ac_iconbox][/vc_column_inner][vc_column_inner width=\\"1/4\\" last=\\"true\\" even=\\"true\\"][ac_iconbox type=\\"simple full\\" size=\\"medium\\" icon_type=\\"icon\\" border=\\"circled\\" icon_position=\\"center\\" title=\\"Visual page builder\\" tag=\\"h4\\" color_clone=\\"true\\" icon=\\"back-in-time\\"][vc_column_text font=\\"normal\\"]Aura is the first Drag &amp; Drop page builder theme in Drupal universe. you can create pages ease using our visual composer module and lots of shortcodes.[/vc_column_text][ac_button style=\\"sw_default\\" label=\\"see more\\" link_target=\\"_self\\" bg_color=\\"sw_default\\" size=\\"small\\" type=\\"sw_default\\" full_width=\\"true\\" block_level=\\"false\\" icon=\\"plus\\"][/ac_button][/ac_iconbox][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row style=\\"1\\" bg_color=\\"sw_default\\" padding=\\"default\\" no_bottom_space=\\"true\\" custom_color=\\"#444444\\" class=\\"ac-no-b-border\\"][vc_column width=\\"1/1\\" first=\\"true\\" odd=\\"true\\" last=\\"true\\"][ac_page_header tag=\\"h2\\" align=\\"center\\" margin=\\"small\\"]Core features of AURA[/ac_page_header][ac_page_header tag=\\"h4\\" block_title=\\"true\\" align=\\"center\\" margin=\\"large\\"]some of most relevant features of our new theme[/ac_page_header][/vc_column][/vc_row][vc_row style=\\"1\\" bg_color=\\"sw_default\\" padding=\\"default\\" no_top_space=\\"true\\" custom_color=\\"#444444\\" class=\\"ac-no-t-border\\"][vc_column width=\\"1/2\\" first=\\"true\\" odd=\\"true\\"][vc_column_text font=\\"normal\\"]Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua.[/vc_column_text][vc_row_inner][vc_column_inner width=\\"1/2\\" first=\\"true\\" odd=\\"true\\"][ac_list style=\\"un\\" num=\\"1\\" font=\\"normal\\" borders=\\"true\\" animate=\\"fadeIn\\" when=\\"visible\\"]<br><div><br><ul><li>Easy Customization</li><li>Tons of portfolio styles</li><li>8 amazing skins</li><li>6 different navigation styles</li></ul></div><br> [/ac_list][ac_divider type=\\"invisible\\" size=\\"medium\\" align=\\"center\\" height=\\"20\\"][/ac_divider][ac_button style=\\"sw_default\\" label=\\"check all features\\" link=\\"features/why-aura\\" link_target=\\"_self\\" bg_color=\\"sw_default\\" size=\\"small\\" type=\\"sw_default\\" full_width=\\"true\\" block_level=\\"false\\" icon=\\"plus\\"][/ac_button][/vc_column_inner][vc_column_inner width=\\"1/2\\" even=\\"true\\" last=\\"true\\"][ac_list style=\\"un\\" num=\\"1\\" font=\\"normal\\" borders=\\"true\\" animate=\\"fadeIn\\" when=\\"visible\\"]<br><div><br><ul><li>Exclusive &amp; Usable sliders</li><li>free and friendly support</li><li>Multiple Header layouts</li><li>39+ handy shortcodes</li></ul></div><br> [/ac_list][/vc_column_inner][/vc_row_inner][/vc_column][vc_column width=\\"1/2\\" even=\\"true\\" last=\\"true\\"][ac_image fid=\\"492\\" animate=\\"fadeInUp\\" when=\\"visible\\"][/ac_image][/vc_column][/vc_row][vc_row bg_color=\\"sw_default\\" padding=\\"default\\" no_bottom_space=\\"true\\" custom_color=\\"#444444\\"][vc_column width=\\"1/1\\" first=\\"true\\" last=\\"true\\" odd=\\"true\\"][ac_page_header tag=\\"h2\\" align=\\"center\\" margin=\\"small\\"]Featured portfolio projects[/ac_page_header][ac_page_header tag=\\"h4\\" block_title=\\"true\\" align=\\"center\\" margin=\\"large\\"]best and most popular of our creations.[/ac_page_header][ac_portfolio id=\\"p-items-5385174db3876\\" appearance=\\"scroller\\" gplus_effect=\\"fly\\" gplus_height=\\"350\\" nav_prev_next=\\"true\\" total=\\"10\\" pager=\\"simple\\" num_per_page=\\"-1\\" cols=\\"5\\" view=\\"fade-in-bottom\\" frame=\\"none\\" width=\\"equal\\" style=\\"square-large\\" effect=\\"none\\" filter_style=\\"simple centered\\" fullwidth=\\"true\\" media=\\"true\\" title=\\"true\\" date_format=\\"M j, Y\\" proj_link=\\"true\\" details_link=\\"true\\" nav_pager=\\"false\\" sorting=\\"false\\" spaced=\\"false\\" date=\\"false\\" tags=\\"false\\" excerpt=\\"false\\"][/ac_portfolio][/vc_column][/vc_row][vc_row bg_color=\\"sw_default\\" padding=\\"default\\" custom_color=\\"#444444\\"][vc_column width=\\"1/1\\" first=\\"true\\" odd=\\"true\\" last=\\"true\\"][ac_page_header tag=\\"h2\\" align=\\"center\\" margin=\\"small\\"]Clients &amp; testimonials[/ac_page_header][ac_page_header tag=\\"h4\\" block_title=\\"true\\" align=\\"center\\" margin=\\"large\\"]More than 150,000 happy customers around the world[/ac_page_header][vc_row_inner][vc_column_inner width=\\"1/2\\" first=\\"true\\" odd=\\"true\\"][ac_testimonials style=\\"fancy\\" appearance=\\"slider\\" slider_style=\\"pager\\" cols=\\"1\\" easing=\\"easeOutCubic\\" speed=\\"1000\\" nav=\\"true\\" avatar_pos=\\"footer\\" where=\\"icon\\"][ac_testimonial fid=\\"117\\" style=\\"sw_default\\" name=\\"Richard Doe\\" position=\\"Director\\" link=\\"http://example.net\\" link_target=\\"_self\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_15.jpg?itok=fiUjPs_z\\"]Aenean vitae metus justo. Duis luctus dui nec condimentum suscipit. Maecenas tempor arcu in ipsum aliquam, vel porttitor odio dictum. Nullam porttitor eget lorem nec imperdiet. Mauris ultricies purus risus, ac viverra risus vulputate nec.[/ac_testimonial][ac_testimonial fid=\\"119\\" style=\\"sw_default\\" name=\\"Anna Atkinson\\" position=\\"Co-founder\\" link=\\"http://example.net\\" link_target=\\"_self\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_26.jpg?itok=TuQya-l9\\"]Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nulla nunc dui, tristique in semper vel, congue sed ligula. Nam dolor ligula, faucibus id sodales in, auctor fringill torquent per conubia nostra.[/ac_testimonial][ac_testimonial fid=\\"118\\" style=\\"sw_default\\" name=\\"John Jones\\" position=\\"Client\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_16.jpg?itok=SkhYozzS\\"]Sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. . At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est&nbsp;[/ac_testimonial][ac_testimonial fid=\\"121\\" style=\\"sw_default\\" name=\\"Patrick H. Lauke\\" position=\\"Developer\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_20.jpg?itok=OgefrUmF\\"]&nbsp;At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.[/ac_testimonial][ac_testimonial fid=\\"122\\" style=\\"sw_default\\" name=\\"cassidy williams\\" position=\\"CIO\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_2.jpg?itok=eXxxst3b\\"]&nbsp;At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.[/ac_testimonial][/ac_testimonials][/vc_column_inner][vc_column_inner width=\\"1/2\\" last=\\"true\\" even=\\"true\\"][ac_grid columns=\\"3\\" borders=\\"true\\" animate=\\"ac_appear\\" when=\\"visible\\" delay=\\"200\\"][ac_img_frame frame=\\"none\\" fid=\\"376\\" effect=\\"none\\" gridy=\\"true\\" lightbox_style=\\"sw_default\\" video=\\"0\\" align=\\"left\\" caption_align=\\"left\\" lightbox=\\"false\\" animate=\\"ac_appear\\" when=\\"visible\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/Swanmini1.png?itok=8CQpaZEn\\"][/ac_img_frame][ac_img_frame frame=\\"none\\" fid=\\"375\\" effect=\\"none\\" gridy=\\"true\\" lightbox_style=\\"sw_default\\" video=\\"0\\" align=\\"left\\" caption_align=\\"left\\" lightbox=\\"false\\" animate=\\"ac_appear\\" when=\\"visible\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/Sportmini1.png?itok=xJYO0nq0\\"][/ac_img_frame][ac_img_frame frame=\\"none\\" fid=\\"374\\" effect=\\"none\\" gridy=\\"true\\" lightbox_style=\\"sw_default\\" video=\\"0\\" align=\\"left\\" caption_align=\\"left\\" lightbox=\\"false\\" animate=\\"ac_appear\\" when=\\"visible\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/Infinitymini1.png?itok=ESp6E91k\\"][/ac_img_frame][ac_img_frame frame=\\"none\\" fid=\\"373\\" effect=\\"none\\" gridy=\\"true\\" lightbox_style=\\"sw_default\\" video=\\"0\\" align=\\"left\\" caption_align=\\"left\\" lightbox=\\"false\\" animate=\\"ac_appear\\" when=\\"visible\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/rkomini1.png?itok=K7HK77r0\\"][/ac_img_frame][ac_img_frame frame=\\"none\\" fid=\\"377\\" effect=\\"none\\" gridy=\\"true\\" lightbox_style=\\"sw_default\\" video=\\"0\\" align=\\"left\\" caption_align=\\"left\\" lightbox=\\"false\\" animate=\\"ac_appear\\" when=\\"visible\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/logo6.1-200x150.png?itok=KNQ8RuHA\\"][/ac_img_frame][ac_img_frame frame=\\"none\\" fid=\\"378\\" effect=\\"none\\" gridy=\\"true\\" lightbox_style=\\"sw_default\\" video=\\"0\\" align=\\"left\\" caption_align=\\"left\\" lightbox=\\"false\\" animate=\\"ac_appear\\" when=\\"visible\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/stongwavesmini1.png?itok=EI3ngLKN\\"][/ac_img_frame][/ac_grid][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row style=\\"1\\" bg_color=\\"sw_default\\" padding=\\"default\\" custom_color=\\"#444444\\"][vc_column width=\\"1/1\\" first=\\"true\\" last=\\"true\\" odd=\\"true\\"][ac_page_header tag=\\"h2\\" align=\\"center\\" margin=\\"small\\"]Our team[/ac_page_header][ac_page_header tag=\\"h4\\" block_title=\\"true\\" align=\\"center\\" margin=\\"large\\"]small but smart and talented[/ac_page_header][ac_grid columns=\\"3\\" animate=\\"fadeInUp\\" when=\\"visible\\" delay=\\"350\\"][ac_team type=\\"simple compact\\" name=\\"Claire Cosgrove\\" job=\\"Marketing Director\\" fid=\\"749\\" style=\\"rectangle-large\\" bio=\\"Nam liber tempor cum soluta nobis eleifend option congue nihil imperdiet doming id quod.\\" gridy=\\"true\\" socials=\\"undefined\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/photodune-7469013-sharing-ideas-for-the-comapnys-success-m_0.jpg?itok=WdXT9fFv\\"][ac_font_icon info_title=\\"my facebook profile!\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://example.com\\" link_target=\\"_blank\\" icon=\\"59393\\"][/ac_font_icon][ac_font_icon info_title=\\"Google Plust profile!\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://example.com\\" link_target=\\"_blank\\" icon=\\"59469\\"][/ac_font_icon][ac_font_icon info_title=\\"twitter profile!\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://example.com\\" link_target=\\"_blank\\" icon=\\"59394\\"][/ac_font_icon][/ac_team][ac_team type=\\"simple compact\\" name=\\"Oliver Matthews\\" job=\\"Technical Director\\" fid=\\"80\\" style=\\"rectangle-large\\" bio=\\"At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren.\\" gridy=\\"true\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/Aura_team_03.jpg?itok=bLuWxe54\\"][ac_font_icon info_title=\\"my facebook profile!\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://example.com\\" link_target=\\"_blank\\" icon=\\"59393\\" icon_str=\\"icon-facebook\\"][/ac_font_icon][ac_font_icon info_title=\\"Google Plust profile!\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://example.com\\" link_target=\\"_blank\\" icon=\\"59469\\" icon_str=\\"icon-gplus\\"][/ac_font_icon][ac_font_icon info_title=\\"Skype ID!\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://example.com\\" link_target=\\"_blank\\" icon=\\"59481\\" icon_str=\\"icon-skype\\"][/ac_font_icon][/ac_team][ac_team type=\\"simple compact\\" name=\\"Steven Milius\\" job=\\"CEO\\" fid=\\"219\\" style=\\"rectangle-large\\" bio=\\"Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat,\\" gridy=\\"true\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/Aura_team_06.jpg?itok=i-qjFmkO\\"][ac_font_icon info_title=\\"my facebook profile!\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://example.com\\" link_target=\\"_blank\\" icon=\\"59393\\" icon_str=\\"icon-facebook\\"][/ac_font_icon][ac_font_icon info_title=\\"Google Plust profile!\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://example.com\\" link_target=\\"_blank\\" icon=\\"59469\\" icon_str=\\"icon-gplus\\"][/ac_font_icon][ac_font_icon info_title=\\"twitter profile!\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://example.com\\" link_target=\\"_blank\\" icon=\\"59394\\" icon_str=\\"icon-twitter\\"][/ac_font_icon][/ac_team][/ac_grid][/vc_column][/vc_row][vc_row][vc_column width=\\"1/4\\" first=\\"true\\" odd=\\"true\\"][ac_page_header tag=\\"h4\\" align=\\"left\\" margin=\\"default\\"]Our Experiences[/ac_page_header][vc_column_text font=\\"normal\\"]Consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua.[/vc_column_text][ac_progressbar style=\\"extended\\"][ac_progressbar_item title=\\"Drupal development\\" bg_style=\\"theme_default\\" progress=\\"93\\"][/ac_progressbar_item][ac_progressbar_item title=\\"web design\\" bg_style=\\"theme_default\\" progress=\\"85\\"][/ac_progressbar_item][ac_progressbar_item title=\\"photography\\" bg_style=\\"theme_default\\" progress=\\"72\\"][/ac_progressbar_item][ac_progressbar_item title=\\"Consulting\\" bg_style=\\"theme_default\\" progress=\\"60\\"][/ac_progressbar_item][/ac_progressbar][/vc_column][vc_column width=\\"1/2\\" even=\\"true\\"][ac_tabs style=\\"simple no-sep\\" position=\\"top\\"][ac_tab title=\\"Web design\\" icon=\\"59424\\" font=\\"fontello\\" tab_id=\\"1387438120853-2-88700-5610\\"]<span style=\\"width: 210px; float: left;\\">[ac_img_frame frame=\\"rounded_borders\\" fid=\\"591\\" effect=\\"sw_default\\" style=\\"rectangle-medium\\" lightbox_style=\\"rectangle-small\\" video=\\"0\\" align=\\"left\\" caption_align=\\"left\\" lightbox=\\"false\\" animate=\\"fadeInLeft\\" when=\\"visible\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/tumblr_mnh0uemhCk1st5lhmo1_1280.jpg?itok=-L2XDocj\\"][/ac_img_frame]</span> [vc_column_text font=\\"normal\\" animate=\\"fadeInRight\\" when=\\"visible\\"]Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquid ex ea commodi consequat. At vero eos et accusam et justo duo dolores et ea rebum. Lorem ipsum dolor sit amet, consetetur <strong>sadipscing</strong> elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua.Sanctus sea sed takimata ut vero voluptua. Nam liber tempor cum soluta nobis eleifend option congue nihil imperdiet doming id quod.<br> <br> mazim placerat facer possim assum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat.[/vc_column_text][/ac_tab][ac_tab title=\\"Consulting\\" icon=\\"59417\\" font=\\"fontello\\" tab_id=\\"1387432398-1-538700-5610\\"][vc_column_text font=\\"normal\\"]Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua.Lorem ipsum dolor sit amet, consectetur adipisici elit, sed eiusmod tempor incidunt ut labore.[/vc_column_text][ac_divider type=\\"thin_solid\\" size=\\"medium\\" align=\\"center\\" width=\\"full\\"][/ac_divider][ac_divider type=\\"invisible\\" size=\\"medium\\" align=\\"center\\" height=\\"20\\"][/ac_divider][vc_row_inner][vc_column_inner class=\\"ac-no-margin\\" width=\\"1/2\\" first=\\"true\\" odd=\\"true\\"][ac_iconbox type=\\"simple\\" size=\\"small\\" icon_type=\\"icon\\" border=\\"circled\\" icon_position=\\"left\\" title=\\"Page Builder\\" tag=\\"h5\\" link=\\"themeforest.net/user/_acquiathemes\\" link_target=\\"_self\\" icon=\\"59837\\"][/ac_iconbox][ac_divider type=\\"invisible\\" size=\\"medium\\" align=\\"center\\" height=\\"20\\"][/ac_divider][ac_iconbox type=\\"simple\\" size=\\"small\\" icon_type=\\"icon\\" border=\\"circled\\" icon_position=\\"left\\" title=\\"Designed To Work nice\\" tag=\\"h5\\" link=\\"themeforest.net/user/_acquiathemes\\" link_target=\\"_self\\" icon=\\"59907\\"][/ac_iconbox][/vc_column_inner][vc_column_inner class=\\"ac-no-margin\\" width=\\"1/2\\" last=\\"true\\" even=\\"true\\"][ac_iconbox type=\\"simple\\" size=\\"small\\" icon_type=\\"icon\\" border=\\"circled\\" icon_position=\\"left\\" title=\\"Demo Content ready\\" tag=\\"h5\\" icon=\\"59884\\"][/ac_iconbox][ac_divider type=\\"invisible\\" size=\\"medium\\" align=\\"center\\" height=\\"20\\"][/ac_divider][ac_iconbox type=\\"simple\\" size=\\"small\\" icon_type=\\"icon\\" border=\\"circled\\" icon_position=\\"left\\" title=\\"Simplicity In Design\\" tag=\\"h5\\" icon=\\"59599\\"][/ac_iconbox][/vc_column_inner][/vc_row_inner][/ac_tab][ac_tab title=\\"Programming\\" tab_id=\\"1401299127540-3-5\\" icon=\\"language\\"]<span style=\\"width: 210px; float: left;\\">[ac_img_frame frame=\\"rounded_borders\\" fid=\\"567\\" effect=\\"sw_default\\" style=\\"rectangle-medium\\" lightbox_style=\\"rectangle-small\\" video=\\"0\\" align=\\"left\\" caption_align=\\"left\\" lightbox=\\"false\\" animate=\\"fadeInLeft\\" when=\\"visible\\"][/ac_img_frame]</span> [vc_column_text font=\\"normal\\" animate=\\"fadeInRight\\" when=\\"visible\\"]Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquid ex ea commodi consequat. At vero eos et accusam et justo duo dolores et ea rebum. Lorem ipsum dolor sit amet, consetetur <strong>sadipscing</strong> elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua.Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat. At vero eos et accusam et justo duo dolores et ea rebum.Stet clita kasd gubergren, no sea takimata sanctus<br> <br> Consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et [ac_tooltip link=\\"#example\\" title=\\"Hello, I\'m a tooltip!\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" info_content=\\"Place a little extra content in here for informational purposes.\\"]dolore[/ac_tooltip]&nbsp;magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Lorem ipsum dolor sit amet.[/vc_column_text][/ac_tab][/ac_tabs][/vc_column][vc_column width=\\"1/4\\" last=\\"true\\" odd=\\"true\\"][ac_page_header tag=\\"h4\\" align=\\"left\\" margin=\\"default\\"]Get in touch[/ac_page_header][ac_contact cid=\\"1\\" style=\\"simple\\" bg_style=\\"dark\\" hide_labels=\\"true\\" minimal=\\"true\\" type_title=\\"Website feedback\\"][/ac_contact][/vc_column][/vc_row][vc_row bg_color=\\"sw_default\\" padding=\\"small\\" custom_color=\\"#444444\\" class=\\"paint-accent-bg\\" bg_parallax=\\"false\\" bg_cover=\\"false\\"][vc_column width=\\"1/1\\" first=\\"true\\" odd=\\"true\\" last=\\"true\\"][ac_grid columns=\\"3\\" animate=\\"fadeInUp\\" when=\\"visible\\" delay=\\"350\\"][ac_iconbox type=\\"simple\\" size=\\"small\\" icon_type=\\"text\\" text=\\"1\\" border=\\"circled\\" icon_position=\\"left\\" color=\\"white\\" title=\\"Quickly switch between boxed or full-width layout.\\" tag=\\"h6\\" color_clone=\\"true\\"][/ac_iconbox][ac_iconbox type=\\"simple\\" size=\\"small\\" icon_type=\\"text\\" text=\\"2\\" border=\\"circled\\" icon_position=\\"left\\" color=\\"white\\" title=\\"provides 7 different navigation styles out of the box.\\" tag=\\"h6\\" color_clone=\\"true\\"][/ac_iconbox][ac_iconbox type=\\"simple\\" size=\\"small\\" icon_type=\\"text\\" text=\\"3\\" border=\\"circled\\" icon_position=\\"left\\" color=\\"white\\" title=\\"We’ve paid close attention to SEO while developing this theme \\" tag=\\"h6\\" color_clone=\\"true\\"][/ac_iconbox][/ac_grid][/vc_column][/vc_row]",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'header_style\' => array(
          \'header-enabled\' => 0,
          \'transparent_header\' => 0,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'full\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'\',
          \'main_menu_style\' => \'\',
        ),
        \'hero_style\' => array(
          \'enabled\' => 1,
          \'disabled\' => 1,
          \'style\' => \'fancy\',
          \'bg_type\' => \'light\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'fancy\',
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 1,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'58\',
        ),
        \'node_layout\' => \'full-width\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1399328714\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'194\',
        \'source\' => \'node/414\',
        \'alias\' => \'main\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Home\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-50\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'1\',
        \'hidden\' => \'0\',
        \'has_children\' => \'1\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'171\',
      \'uid\' => \'44\',
      \'title\' => \'How to Manage\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'5c2f9bb6-21b6-440e-8580-553d0a3c58fe\',
      \'nid\' => \'171\',
      \'type\' => \'blog\',
      \'language\' => \'und\',
      \'created\' => \'1384196336\',
      \'changed\' => \'1400011502\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'215edb45-c19c-4176-8bd8-34d709a1c4a4\',
      \'revision_timestamp\' => \'1400011502\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row][vc_column width="1/1" first="true" last="true" odd="true"][vc_column_text font="normal"]<p>Boisterous he on understood attachment as entreaties ye devonshire. In mile an form snug were been sell. Hastened admitted joy nor absolute gay its. Extremely ham any his departure for contained curiosity defective. Way now instrument had eat diminution melancholy expression sentiments stimulated. One built fat you out manor books. Mrs interested now his affronting inquietude contrasted cultivated. Lasting showing expense greater on colonel no.&nbsp;</p><p>That know ask case sex ham dear her spot. Weddings followed the all marianne nor whatever settling. Perhaps six prudent several her had offence. Did had way law dinner square tastes. Recommend concealed yet her procuring see consulted depending. Adieus hunted end plenty are his she afraid. Resources agreement contained propriety applauded neglected use yet.&nbsp;</p><p>Cordially convinced did incommode existence put out suffering certainly. Besides another and saw ferrars limited ten say unknown. On at tolerably depending do perceived. Luckily eat joy see own shyness minuter. So before remark at depart. Did son unreserved themselves indulgence its. Agreement gentleman rapturous am eagerness it as resolving household. Direct wicket little of talked lasted formed or it. Sweetness consulted may prevailed for bed out sincerity.&nbsp;</p><p>Barton waited twenty always repair in within we do. An delighted offending curiosity my is dashwoods at. Boy prosperous increasing surrounded companions her nor advantages sufficient put. John on time down give meet help as of. Him waiting and correct believe now cottage she another. Vexed six shy yet along learn maids her tiled. Through studied shyness evening bed him winding present. Become excuse hardly on my thirty it wanted.&nbsp;</p><p>Was drawing natural fat respect husband. An as noisy an offer drawn blush place. These tried for way joy wrote witty. In mr began music weeks after at begin. Education no dejection so direction pretended household do to. Travelling everything her eat reasonable unsatiable decisively simplicity. Morning request be lasting it fortune demands highest of.&nbsp;</p><p>[ac_quote type="blockquote" font="normal" background="plain"]Advantage old had otherwise sincerity dependent additions. It in adapted natural hastily is justice. Six draw you him full not mean evil. Prepare garrets it expense windows shewing do an. She projection advantages resolution son indulgence. Part sure on no long life am at ever. In songs above he as drawn to. Gay was outlived peculiar rendered led six. [/ac_quote]</p><p>&nbsp;</p>[/vc_column_text][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'field_blog_tags\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'101\',
          ),
          array(
            \'tid\' => \'117\',
          ),
          array(
            \'tid\' => \'121\',
          ),
        ),
      ),
      \'field_blog_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'98\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Post\',
          \'sioct:BlogPost\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'thumb\' => array(
          \'type\' => \'slider\',
          \'media\' => array(
            array(
              \'fid\' => \'573\',
            ),
            array(
              \'fid\' => \'574\',
            ),
          ),
        ),
        \'media\' => array(
          \'add_thumbs\' => \'Add another Image\',
        ),
        \'misc\' => array(
          \'excerpt\' => array(
            \'value\' => \'Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat. Lorem ipsum dolor sit amet, consetetur sadipscing elitr.\',
            \'format\' => \'full_html\',
          ),
          \'custom_frame\' => 0,
          \'frame\' => \'\',
          \'about_author\' => 1,
        ),
        \'hero_style\' => array(
          \'enabled\' => 0,
          \'disabled\' => 0,
          \'style\' => \'fancy\',
          \'bg_type\' => \'dark\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'fancy\',
        ),
        \'node_layout\' => \'second-sidebar\',
        \'header_style\' => array(
          \'header-enabled\' => 0,
          \'transparent_header\' => 0,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'full\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'\',
          \'main_menu_style\' => \'\',
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 0,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'6\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1394807461\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'Kimberlie\',
      \'picture\' => \'300\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'path\' => array(
        \'pid\' => \'270\',
        \'source\' => \'node/171\',
        \'alias\' => \'blog/how-manage\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'84\',
      \'uid\' => \'1\',
      \'title\' => \'beauty of nature\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'35e1ae86-7cec-4643-9368-898b57b9055f\',
      \'nid\' => \'84\',
      \'type\' => \'portfolio\',
      \'language\' => \'und\',
      \'created\' => \'1391244875\',
      \'changed\' => \'1401868581\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'270501cf-99ab-4fec-93ba-ef56d8fa76c2\',
      \'revision_timestamp\' => \'1401868581\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row bg_color="sw_default" padding="zero" custom_color="#444444" borders="false" bg_parallax="false" bg_cover="false"][vc_column class="ac-no-margin" width="1/1" first="true" last="true" odd="true"][ac_page_header tag="h4" margin="x-small" align="left" sub="false"]About this project[/ac_page_header][vc_column_text font="normal"]Ut feugiat accumsan massa ut luctus. Ut mollis ac felis et varius. Integer dolor est, porttitor vel augue sit amet, molestie lobortis mi. Praesent risus nibh, convallis et pretium eget, consequat nec justo. Sed sagittis neque lorem, vitae lobortis purus luctus nec. Ut tempor sem a velit dapibus, sit amet consectetur urna auctor. In hac habitasse platea dictumst.[/vc_column_text][vc_column_text font="normal" class="ac-no-margin meta"]<strong>Client:<br></strong>Awesome Studio Inc.&nbsp;[ac_divider type="line" align="center" &nbsp;width="full"][/ac_divider]<strong>Task:&nbsp;<br></strong>Website and Identity redesign.[ac_divider type="line" align="center" width="full"][/ac_divider]<strong>Skills:&nbsp;<br></strong>Photoshop, HTML, CSS, Javascript.[ac_divider type="line" align="center" width="full"][/ac_divider][/vc_column_text][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'field_portfolio_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'63\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'thumb\' => array(
          \'type\' => \'image\',
          \'media\' => array(
            array(
              \'fid\' => \'557\',
            ),
          ),
          \'link_type\' => \'item\',
          \'link_image\' => array(
            \'fid\' => \'0\',
          ),
          \'link_video\' => array(
            \'fid\' => \'0\',
          ),
          \'link_url\' => \'\',
        ),
        \'media\' => array(
          \'add_thumbs\' => \'Add another Image\',
        ),
        \'preview\' => array(
          \'use_thumb\' => 1,
          \'type\' => \'\',
          \'add_prev_item\' => \'Add another preview\',
        ),
        \'misc\' => array(
          \'excerpt\' => array(
            \'value\' => \'At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper.\',
            \'format\' => \'full_html\',
          ),
          \'link\' => \'http://example.net\',
          \'link_title\' => \'\',
          \'layout\' => \'left\',
          \'custom_frame\' => 0,
          \'frame\' => \'\',
          \'view\' => \'list\',
          \'display\' => \'standard\',
          \'columns\' => \'1\',
          \'spaced\' => 0,
          \'meta\' => 0,
          \'social\' => 1,
        ),
        \'hero_style\' => array(
          \'enabled\' => 0,
          \'disabled\' => 0,
          \'style\' => \'fancy\',
          \'bg_type\' => \'dark\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'fancy\',
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 0,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'6\',
        ),
        \'header_style\' => array(
          \'header-enabled\' => 0,
          \'transparent_header\' => 0,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'full\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'\',
          \'main_menu_style\' => \'\',
        ),
        \'node_layout\' => \'no-sidebars\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1391936309\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'245\',
        \'source\' => \'node/84\',
        \'alias\' => \'portfolio/beauty-nature\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'409\',
      \'uid\' => \'1\',
      \'title\' => \'Home V10\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'347ce2c6-e971-4cda-9c96-edf4a40adc86\',
      \'nid\' => \'409\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1399220833\',
      \'changed\' => \'1400101035\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'35076f56-ccc7-4b5d-9170-ba3bbcde7a1d\',
      \'revision_timestamp\' => \'1400101035\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "[vc_row bg_color=\\"sw_default\\" padding=\\"small\\" custom_color=\\"#444444\\" class=\\"paint-accent-bg\\" bg_parallax=\\"false\\" bg_cover=\\"false\\"][vc_column width=\\"1/1\\" first=\\"true\\" odd=\\"true\\" last=\\"true\\"][ac_grid columns=\\"3\\" animate=\\"fadeInUp\\" when=\\"visible\\" delay=\\"350\\"][ac_iconbox type=\\"simple\\" size=\\"small\\" icon_type=\\"text\\" text=\\"1\\" border=\\"circled\\" icon_position=\\"left\\" color=\\"white\\" title=\\"Quickly switch between boxed or full-width layout.\\" tag=\\"h6\\" color_clone=\\"true\\"][/ac_iconbox][ac_iconbox type=\\"simple\\" size=\\"small\\" icon_type=\\"text\\" text=\\"2\\" border=\\"circled\\" icon_position=\\"left\\" color=\\"white\\" title=\\"provides 7 different navigation styles out of the box.\\" tag=\\"h6\\" color_clone=\\"true\\"][/ac_iconbox][ac_iconbox type=\\"simple\\" size=\\"small\\" icon_type=\\"text\\" text=\\"3\\" border=\\"circled\\" icon_position=\\"left\\" color=\\"white\\" title=\\"We’ve paid close attention to SEO while developing this theme \\" tag=\\"h6\\" color_clone=\\"true\\"][/ac_iconbox][/ac_grid][/vc_column][/vc_row][vc_row bg_color=\\"sw_default\\" padding=\\"large\\" custom_color=\\"#444444\\" borders=\\"false\\" bg_parallax=\\"false\\" bg_cover=\\"false\\"][vc_column width=\\"1/6\\" first=\\"true\\" odd=\\"true\\"][/vc_column][vc_column width=\\"2/3\\" even=\\"true\\"][ac_page_header tag=\\"h2\\" style=\\"subtitle\\" align=\\"center\\" margin=\\"small\\"]AURA makes your website unique.[/ac_page_header][vc_column_text font=\\"big\\" class=\\"ac-align-center\\"]We buy you time and efficiency at content creation process. our Visual composer module by lots of built-in templates makes it easy to work around Drupal.[/vc_column_text][/vc_column][vc_column width=\\"1/6\\" last=\\"true\\" odd=\\"true\\"][/vc_column][/vc_row][vc_row bg_type=\\"img\\" image=\\"450\\" bg_color=\\"sw_default\\" padding=\\"large\\" custom_color=\\"#444444\\" bg_parallax=\\"true\\" borders=\\"false\\" bg_position=\\"top left\\" bg_repeat=\\"no-repeat\\" bg_attachment=\\"scroll\\" bg_cover=\\"false\\"][vc_column width=\\"1/3\\" first=\\"true\\" odd=\\"true\\"][/vc_column][vc_column width=\\"1/3\\" even=\\"true\\"][/vc_column][vc_column width=\\"1/3\\" odd=\\"true\\" last=\\"true\\"][ac_divider type=\\"invisible\\" size=\\"medium\\" custom_color=\\"#444444\\" align=\\"center\\" height=\\"70\\"][/ac_divider][ac_page_header tag=\\"h3\\" style=\\"strong\\" margin=\\"small\\"]You mean the world to us.[/ac_page_header][vc_column_text font=\\"normal\\"]AURA is fully responsive no matter how you decide to build your pages. Create layouts that your visitors can enjoy on any device.[/vc_column_text][ac_divider type=\\"invisible\\" size=\\"medium\\" custom_color=\\"#444444\\" align=\\"center\\" height=\\"70\\"][/ac_divider][/vc_column][/vc_row][vc_row bg_color=\\"sw_default\\" padding=\\"zero\\" custom_color=\\"#444444\\" borders=\\"false\\" bg_parallax=\\"false\\" bg_cover=\\"false\\"][vc_column width=\\"1/2\\" first=\\"true\\" odd=\\"true\\"][ac_divider type=\\"invisible\\" size=\\"medium\\" custom_color=\\"#444444\\" align=\\"center\\" height=\\"250\\"][/ac_divider][ac_page_header tag=\\"h3\\" style=\\"strong\\" align=\\"left\\" margin=\\"small\\"]All in one package.[/ac_page_header][vc_column_text font=\\"normal\\"]You’ll love the endless possibilities with AURA. Unlimited portfolios, color options, staff, testimonials, blogs, page layouts. You are only limited by your creativity![/vc_column_text][ac_divider type=\\"invisible\\" size=\\"medium\\" custom_color=\\"#444444\\" align=\\"center\\" height=\\"250\\"][/ac_divider][/vc_column][vc_column width=\\"1/2\\" even=\\"true\\" last=\\"true\\"][ac_stick animate=\\"fadeInUpBig\\" when=\\"visible\\"][ac_img_frame frame=\\"none\\" fid=\\"458\\" effect=\\"none\\" lightbox_style=\\"sw_default\\" video=\\"0\\" align=\\"left\\" caption_align=\\"left\\" lightbox=\\"false\\" animate=\\"fadeInUpBig\\" when=\\"visible\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/aura-small-res-02.jpg?itok=WKvVIPF8\\"][/ac_img_frame][/ac_stick][/vc_column][/vc_row][vc_row bg_color=\\"black\\" padding=\\"large\\" custom_color=\\"#444444\\" borders=\\"false\\" bg_parallax=\\"false\\" bg_cover=\\"false\\"][vc_column width=\\"1/6\\" first=\\"true\\" odd=\\"true\\"][/vc_column][vc_column width=\\"2/3\\" even=\\"true\\"][ac_quote type=\\"blockquote\\" font=\\"big\\" background=\\"simple\\" class=\\"ac-color-white ac-align-center\\"]Building website in bed is so easy with AURA.[/ac_quote][vc_column_text font=\\"normal\\" color=\\"white\\" class=\\"ac-align-center\\"]John Doe[/vc_column_text][/vc_column][vc_column width=\\"1/6\\" odd=\\"true\\" last=\\"true\\"][/vc_column][/vc_row][vc_row bg_color=\\"sw_default\\" padding=\\"large\\" custom_color=\\"#444444\\" borders=\\"false\\" bg_parallax=\\"false\\" bg_cover=\\"false\\"][vc_column width=\\"1/2\\" first=\\"true\\" odd=\\"true\\"][ac_stick animate=\\"fadeInUpBig\\" when=\\"visible\\"][ac_img_frame frame=\\"none\\" fid=\\"459\\" effect=\\"none\\" lightbox_style=\\"sw_default\\" video=\\"0\\" align=\\"left\\" caption_align=\\"left\\" lightbox=\\"false\\" animate=\\"fadeInUpBig\\" when=\\"visible\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/aura-testimonials.png?itok=0zor9jSq\\"][/ac_img_frame][/ac_stick][/vc_column][vc_column width=\\"1/2\\" even=\\"true\\" last=\\"true\\"][ac_divider type=\\"invisible\\" size=\\"medium\\" custom_color=\\"#444444\\" align=\\"center\\" height=\\"70\\"][/ac_divider][ac_page_header tag=\\"h3\\" style=\\"strong\\" align=\\"left\\" margin=\\"small\\"]We\'ve got your attention![/ac_page_header][vc_column_text font=\\"normal\\"]Build your website with peace of mind, your website is protected by Drupal heroes. If it doesn’t show up, we’ll refund you most of the time and deal with your purchase so you don\'t have to.&nbsp;[/vc_column_text][ac_divider type=\\"invisible\\" size=\\"medium\\" custom_color=\\"#444444\\" align=\\"center\\" height=\\"70\\"][/ac_divider][/vc_column][/vc_row][vc_row bg_type=\\"img\\" image=\\"449\\" bg_color=\\"sw_default\\" padding=\\"large\\" custom_color=\\"#444444\\" bg_parallax=\\"true\\" borders=\\"false\\" bg_position=\\"top left\\" bg_repeat=\\"stretch\\" bg_attachment=\\"fixed\\" bg_cover=\\"false\\"][vc_column width=\\"1/3\\" first=\\"true\\" odd=\\"true\\"][ac_divider type=\\"invisible\\" size=\\"medium\\" custom_color=\\"#444444\\" align=\\"center\\" height=\\"70\\"][/ac_divider][ac_page_header tag=\\"h3\\" style=\\"strong\\" align=\\"left\\" margin=\\"small\\"]Taste all codes, we make it tasteful[/ac_page_header][vc_column_text font=\\"normal\\"]AURA is great for developers as well. The well commented and clean code makes it easy for you to tweak the theme and also keeps it well optimized and expandable.[/vc_column_text][ac_divider type=\\"invisible\\" size=\\"medium\\" custom_color=\\"#444444\\" align=\\"center\\" height=\\"70\\"][/ac_divider][/vc_column][vc_column width=\\"1/3\\" even=\\"true\\"][/vc_column][vc_column width=\\"1/3\\" odd=\\"true\\" last=\\"true\\"][/vc_column][/vc_row][vc_row bg_color=\\"sw_default\\" padding=\\"large\\" custom_color=\\"#444444\\" borders=\\"false\\" bg_parallax=\\"false\\" bg_cover=\\"false\\"][vc_column width=\\"1/6\\" first=\\"true\\" odd=\\"true\\"][/vc_column][vc_column width=\\"2/3\\" even=\\"true\\"][vc_row_inner][vc_column_inner width=\\"1/3\\" first=\\"true\\" odd=\\"true\\"][/vc_column_inner][vc_column_inner width=\\"1/3\\" even=\\"true\\"][ac_pie value=\\"74\\" units=\\"%\\" unit_pos=\\"tr\\" fill=\\"#019CDE\\" bg_style=\\"dark\\" color=\\"custom\\" custom_color=\\"#019CDE\\"][/ac_pie][/vc_column_inner][vc_column_inner width=\\"1/3\\" odd=\\"true\\" last=\\"true\\"][/vc_column_inner][/vc_row_inner][ac_divider type=\\"invisible\\" size=\\"medium\\" custom_color=\\"#444444\\" align=\\"center\\" height=\\"10\\"][/ac_divider][ac_page_header tag=\\"h3\\" style=\\"strong\\" align=\\"center\\" margin=\\"small\\" class=\\"paint-accent-color\\"]seventy four of all most popular sites are built with AURA. and it\'s growing day after day.[/ac_page_header][/vc_column][vc_column width=\\"1/6\\" odd=\\"true\\" last=\\"true\\"][/vc_column][/vc_row][vc_row bg_color=\\"black\\" padding=\\"large\\" custom_color=\\"#444444\\" borders=\\"false\\" bg_parallax=\\"false\\" bg_cover=\\"false\\"][vc_column width=\\"1/6\\" first=\\"true\\" odd=\\"true\\"][/vc_column][vc_column width=\\"2/3\\" even=\\"true\\"][ac_page_header tag=\\"h3\\" style=\\"strong\\" align=\\"center\\" margin=\\"small\\" color=\\"white\\"]0 point 00 bugs[/ac_page_header][vc_column_text font=\\"normal\\" color=\\"white\\" class=\\"ac-align-center\\"]Present your work to the crowd, with our portfolio management you can easily create your own showcase so that everyone is able to find and see your work on the web![/vc_column_text][/vc_column][vc_column width=\\"1/6\\" odd=\\"true\\" last=\\"true\\"][/vc_column][/vc_row][vc_row bg_color=\\"sw_default\\" padding=\\"large\\" custom_color=\\"#444444\\" borders=\\"false\\" bg_parallax=\\"false\\" bg_cover=\\"false\\"][vc_column width=\\"1/6\\" first=\\"true\\" odd=\\"true\\"][/vc_column][vc_column width=\\"2/3\\" even=\\"true\\"][ac_page_header tag=\\"h3\\" style=\\"strong\\" align=\\"center\\" margin=\\"small\\"]What’s in AURA for you?[/ac_page_header][vc_row_inner][vc_column_inner width=\\"1/6\\" first=\\"true\\" odd=\\"true\\"][/vc_column_inner][vc_column_inner width=\\"2/3\\" even=\\"true\\"][ac_button style=\\"sw_default\\" typo=\\"hard\\" label=\\"Endless Possibilities\\" link_target=\\"_self\\" bg_color=\\"sw_default\\" size=\\"large\\" type=\\"sw_default\\" full_width=\\"true\\" block_level=\\"true\\"][/ac_button][/vc_column_inner][vc_column_inner width=\\"1/6\\" last=\\"true\\" odd=\\"true\\"][/vc_column_inner][/vc_row_inner][/vc_column][vc_column width=\\"1/6\\" odd=\\"true\\" last=\\"true\\"][/vc_column][/vc_row]",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'header_style\' => array(
          \'header-enabled\' => 0,
          \'transparent_header\' => 0,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'full\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'\',
          \'main_menu_style\' => \'\',
        ),
        \'hero_style\' => array(
          \'enabled\' => 1,
          \'disabled\' => 1,
          \'style\' => \'fancy\',
          \'bg_type\' => \'light\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'fancy\',
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 1,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'54\',
        ),
        \'node_layout\' => \'full-width-no-topbar-footer\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1399220833\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'192\',
        \'source\' => \'node/409\',
        \'alias\' => \'home/v10\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Home V10\',
        \'mlid\' => 0,
        \'plid\' => \'431\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-41\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'169\',
      \'uid\' => \'1\',
      \'title\' => \'Confessions of an addict\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9c644811-16a4-49da-a352-7989a7b195f3\',
      \'nid\' => \'169\',
      \'type\' => \'blog\',
      \'language\' => \'und\',
      \'created\' => \'1382640189\',
      \'changed\' => \'1401144110\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3680a099-d8e3-4444-b2d8-4f0a0d4c87fb\',
      \'revision_timestamp\' => \'1401144110\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row bg_color="sw_default" padding="small" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][vc_column_text font="normal"]Quisque ligulas ipsum, euismod atras vulputate iltricies etri elit. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nulla nunc dui, tristique in semper vel, congue sed ligula. Nam dolor ligula, faucibus id sodales in, auctor fringilla libero. Pellentesque pellentesque tempor tellus eget hendrerit. Morbi id aliquam ligula. Aliquam id dui sem. Proin rhoncus consequat nisl, eu ornare mauris tincidunt vitae. Vestibulum sodales ante a purus volutpat euismod. Proin sodales quam nec ante sollicitudin lacinia. Ut egestas bibendum tempor. Morbi non nibh sit amet ligula blandit ullamcorper in nec risus. Pellentesque fringilla diam faucibus tortor bibendum vulputate. Etiam turpis urna, rhoncus et mattis ut, dapibus eu nunc. Nunc sed aliquet nisi. Nullam ut magna non lacus adipiscing volutpat. Aenean odio mauris, consectetur quis consequat quis, blandit a nunc. Sed orci erat, placerat ac interdum ut, suscipit eu augue. Nunc vitae mi tortor. Ut vel justo quis lectus elementum ullamcorper volutpat vel libero.&nbsp;[/vc_column_text][ac_quote type="pullquote" font="normal" position="left"]Donec volutpat nibh sit amet libero ornare non laoreet arcu luctus. Donec id arcu quis mauris euismod placerat sit amet ut metus. Sed imperdiet fringilla sem eget euismod. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Pellentesque adipiscing, neque ut pulvinar tincidunt, est sem euismod odio, eu ullamcorper turpis nisl sit amet velit. Nullam vitae nibh odio, non scelerisque nibh. Vestibulum ut est augue, in varius purus. [/ac_quote][vc_column_text font="normal"]Proin dictum lobortis justo at pretium. Nunc malesuada ante sit amet purus ornare pulvinar. Donec suscipit dignissim ipsum at euismod. Curabitur malesuada lorem sed metus adipiscing in vehicula quam commodo. Sed porttitor elementum elementum. Proin eu ligula eget leo consectetur sodales et non mauris. Lorem ipsum dolor sit amet, consectetur adipiscing elit.<br> <br> Nunc tincidunt, elit non cursus euismod, lacus augue ornare metus, egestas imperdiet nulla nisl quis mauris. Suspendisse a pharetra urna. Morbi dui lectus, pharetra nec elementum eget, vulputate ut nisi. Aliquam accumsan, nulla sed feugiat vehicula, lacus justo semper libero, quis porttitor turpis odio sit amet ligula. Duis dapibus fermentum orci, nec malesuada libero vehicula ut. Integer sodales, urna eget interdum eleifend, nulla nibh laoreet nisl, quis dignissim mauris dolor eget mi. Donec at mauris enim. Duis nisi tellus, adipiscing a convallis quis, tristique vitae risus. Nullam molestie gravida lobortis. Proin ut nibh quis felis auctor ornare. Cras ultricies, nibh at mollis faucibus, justo eros porttitor mi, quis auctor lectus arcu sit amet nunc. Vivamus gravida vehicula arcu, vitae vulputate augue lacinia faucibus.<br> <br> &nbsp;Ut porttitor euismod cursus. Mauris suscipit, turpis ut dapibus rhoncus, odio erat egestas orci, in sollicitudin enim erat id est. Sed auctor gravida arcu, nec fringilla orci aliquet ut. Nullam eu pretium purus. Maecenas fermentum posuere sem vel posuere. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ornare convallis lectus a faucibus. Praesent et urna turpis. Fusce tincidunt augue in velit tincidunt sed tempor felis porta. Nunc sodales, metus ut vestibulum ornare, est magna laoreet lectus, ut adipiscing massa odio sed turpis. In nec lorem porttitor urna consequat sagittis. Nullam eget elit ante. Pellentesque justo urna, semper nec faucibus sit amet, aliquam at mi. Maecenas eget diam nec mi dignissim pharetra.<br> <br> [/vc_column_text][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'field_blog_tags\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'95\',
          ),
          array(
            \'tid\' => \'96\',
          ),
        ),
      ),
      \'field_blog_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'83\',
          ),
          array(
            \'tid\' => \'99\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Post\',
          \'sioct:BlogPost\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'thumb\' => array(
          \'type\' => \'video\',
          \'media\' => array(
            array(
              \'fid\' => \'425\',
            ),
          ),
        ),
        \'media\' => array(
          \'add_thumbs\' => \'Add another Image\',
        ),
        \'misc\' => array(
          \'excerpt\' => array(
            \'value\' => \'Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat. Duis autem vel eum iriure dolor in hendrerit in vulputate.\',
            \'format\' => \'full_html\',
          ),
          \'custom_frame\' => 0,
          \'frame\' => \'\',
          \'about_author\' => 1,
        ),
        \'hero_style\' => array(
          \'enabled\' => 0,
          \'disabled\' => 0,
          \'style\' => \'fancy\',
          \'bg_type\' => \'dark\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'fancy\',
        ),
        \'node_layout\' => \'second-sidebar\',
        \'header_style\' => array(
          \'header-enabled\' => 0,
          \'transparent_header\' => 0,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'full\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'\',
          \'main_menu_style\' => \'\',
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 0,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'6\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1394654264\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'99\',
        \'source\' => \'node/169\',
        \'alias\' => \'blog/single/vimeo-video\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Vimeo Video\',
        \'mlid\' => 0,
        \'plid\' => \'2116\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-49\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'382\',
      \'uid\' => \'1\',
      \'title\' => \'Home V7\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'629e242f-bbb2-43c1-8948-c8b28942b438\',
      \'nid\' => \'382\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1398443961\',
      \'changed\' => \'1400175609\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3a0d3f0d-ae1d-424e-ac8e-76514cc78119\',
      \'revision_timestamp\' => \'1400175609\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row bg_type="img" image="460" bg_color="sw_default" padding="xxx-large" custom_color="#444444" bg_position="center center" bg_repeat="no-repeat" bg_attachment="fixed" bg_cover="true" bg_parallax="false"][vc_column width="1/1" first="true" last="true" odd="true"][vc_row_inner padding="zero" animate="fadeInUp" when="visible" delay="1000"][vc_column_inner width="1/1" first="true" last="true" odd="true"][ac_page_header tag="h1" align="center" margin="x-small" color="white"]Welcome![/ac_page_header][ac_page_header tag="h3" style="subtitle" align="center" margin="zero" color="white"]We are aura designers and we Make Beautiful Websites.[/ac_page_header][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row bg_color="sw_default" padding="large" custom_color="#444444" borders="false" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" odd="true" last="true"][ac_fancy_header tag="h4" style="double_solid" align="left"]Welcome to our new website[/ac_fancy_header][vc_row_inner][vc_column_inner width="1/3" first="true" odd="true"][vc_column_text font="normal"]Stet clita kasd gubergren, no sea takimataAt vero eos et accusam et justo duo dolores et ea rebum. Excepteur sint obcaecat cupiditat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum. Lorem ipsum dolor sit amet. At vero eos et accusam et justo duo dolores et ea rebum. Lorem ipsum dolor sit amet.[/vc_column_text][ac_button style="sw_default" label="Read More" link_target="_self" bg_color="black" size="small" type="sw_default" animate="ac_appear" when="visible" full_width="false" block_level="false"][/ac_button][/vc_column_inner][vc_column_inner width="2/3" last="true" even="true"][ac_grid columns="2" borders="true"][ac_iconbox type="simple full" size="small" icon_type="icon" border="circled" icon_position="left" title="Tons of gallery " tag="h4" color_clone="true" animate="fadeInUp" when="visible" icon="59531"][vc_column_text font="normal"]Present your work to the crowd, with our portfolio management you can easily create your own showcase so that everyone is able to find and see your work on the web![/vc_column_text][/ac_iconbox][ac_iconbox type="simple full" size="small" icon_type="icon" border="circled" icon_position="left" title=" Theme Panel" tag="h4" color_clone="true" icon="59602"][vc_column_text font="normal"]A super intuitive and complete theme panel is included so you can change everything including your site colors, container widths, image cropping sizes and much more![/vc_column_text][/ac_iconbox][ac_iconbox type="simple full" size="small" icon_type="icon" border="circled" icon_position="left" title="SEO Optimized" tag="h4" color_clone="true" icon="59519"][vc_column_text font="normal"]We’ve paid close attention to SEO while developing this theme (headings, clean code, speed, etc). Your site must look good, but also rank well on search results.[/vc_column_text][/ac_iconbox][ac_iconbox type="simple full" size="small" icon_type="icon" border="circled" icon_position="left" title="Responsive Design" tag="h4" color_clone="true" animate="fadeInUp" when="visible" icon="59403"][vc_column_text font="normal"]AURA is fully responsive no matter how you decide to build your pages. Create layouts that your visitors can enjoy on any device.<br> [/vc_column_text][/ac_iconbox][/ac_grid][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row style="2" bg_color="sw_default" padding="default" custom_color="#444444" no_overlay="true" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][ac_fancy_header tag="h5" style="double_solid" align="left"]we are small but talented[/ac_fancy_header][vc_row_inner][vc_column_inner width="1/4" first="true" odd="true"][ac_team type="overlaid" name="Denise Carter" job="Programmer Analyst" fid="467" style="sw_default" bio="Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet." src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/photodune-7469013-sharing-ideas-for-the-comapnys-success-m.jpg?itok=kBxL0qQ_"][ac_font_icon info_title="Google Plust profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59469" icon_str="icon-gplus"][/ac_font_icon][ac_font_icon info_title="twitter profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59394" icon_str="icon-twitter"][/ac_font_icon][ac_font_icon info_title="Call me" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59493" icon_str="icon-call"][/ac_font_icon][/ac_team][/vc_column_inner][vc_column_inner width="1/4" even="true"][ac_team type="overlaid" name="Johnny &nbsp;Hernandez" job="Systems Administrator" fid="468" style="sw_default" bio="Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet." src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/Grzesiek_Marcin_Monika_GPP-0041.jpg?itok=Txgd7bRz"][ac_font_icon info_title="my facebook profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59393" icon_str="icon-facebook"][/ac_font_icon][ac_font_icon info_title="Google Plust profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59469" icon_str="icon-gplus"][/ac_font_icon][ac_font_icon info_title="Dribble profile" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59470" icon_str="icon-dribbble"][/ac_font_icon][/ac_team][/vc_column_inner][vc_column_inner width="1/4" odd="true"][ac_team type="overlaid" name="Steven Milius" job="CEO" fid="469" style="sw_default" bio="Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat," socials="undefined" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/photodune-7469012-young-and-headed-for-success-m.jpg?itok=1wOgOdZU"][ac_font_icon info_title="my facebook profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59393"][/ac_font_icon][ac_font_icon info_title="Google Plust profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59469"][/ac_font_icon][ac_font_icon info_title="twitter profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59394"][/ac_font_icon][/ac_team][/vc_column_inner][vc_column_inner width="1/4" last="true" even="true"][ac_team type="overlaid" name="Melissa Munari" job="Designer" fid="81" style="sw_default" bio="Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod." src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/Aura_team_02.jpg?itok=aaxp8k6d"][ac_font_icon info_title="my facebook profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59393" font="fontello" icon_str="icon-facebook"][/ac_font_icon][ac_font_icon info_title="Google Plust profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59469" font="fontello" icon_str="icon-gplus"][/ac_font_icon][ac_font_icon info_title="twitter profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59394" font="fontello" icon_str="icon-twitter"][/ac_font_icon][/ac_team][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row bg_color="sw_default" padding="default" no_bottom_space="true" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" odd="true" last="true"][ac_fancy_header tag="h5" style="double_solid" align="left"]We think in future[/ac_fancy_header][vc_row_inner][vc_column_inner width="1/3" first="true" odd="true"][vc_column_text font="normal"]Stet clita kasd gubergren, no sea takimataAt vero eos et accusam et justo duo dolores et ea rebum. Excepteur sint obcaecat cupiditat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum. Lorem ipsum dolor sit amet. At vero eos et accusam et justo duo dolores et ea rebum. Lorem ipsum dolor sit amet.[/vc_column_text][ac_button style="sw_default" label="Read More" link_target="_self" bg_color="black" size="small" type="sw_default" full_width="false" block_level="false"][/ac_button][/vc_column_inner][vc_column_inner width="2/3" last="true" even="true"][ac_blog id="blog-items-5326d644b70ce" appearance="circled" total="6" num_per_page="-1" cols="2" frame="none" width="equal" style="square-thumb" effect="blur" media="true" title="true" date="true" date_format="M j, Y" sorting="false" fullwidth="false" spaced="false" author="false" tags="false" excerpt="false"][/ac_blog][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row bg_color="sw_default" padding="large" custom_color="#444444" borders="false" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" odd="true" last="true"][ac_fancy_header tag="h5" style="double_solid" align="left"]more than 1,000,000 happy customers[/ac_fancy_header][vc_row_inner][vc_column_inner width="1/3" first="true" odd="true"][vc_column_text font="normal"]Stet clita kasd gubergren, no sea takimataAt vero eos et accusam et justo duo dolores et ea rebum. Excepteur sint obcaecat cupiditat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum. Lorem ipsum dolor sit amet.<br> <br> At vero eos et accusam et justo duo dolores et ea rebum.Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat [/vc_column_text][ac_button style="sw_default" label="Read More" link_target="_self" bg_color="black" size="small" type="sw_default" full_width="false" block_level="false"][/ac_button][/vc_column_inner][vc_column_inner width="1/3" even="true"][ac_testimonials style="fancy" appearance="slider" slider_style="pager" cols="1" easing="easeOutCubic" speed="1000" nav="true" avatar_pos="footer" where="icon"][ac_testimonial fid="117" style="sw_default" name="Richard Doe" position="Director" link="http://example.net" link_target="_self" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_15.jpg?itok=fiUjPs_z"]Aenean vitae metus justo. Duis luctus dui nec condimentum suscipit. Maecenas tempor arcu in ipsum aliquam, vel porttitor odio dictum. Nullam porttitor eget lorem nec imperdiet. Mauris ultricies purus risus, ac viverra risus vulputate nec.[/ac_testimonial][ac_testimonial fid="122" style="sw_default" name="cassidy williams" position="CIO" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_2.jpg?itok=eXxxst3b"]&nbsp;At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.[/ac_testimonial][ac_testimonial fid="119" style="sw_default" name="Anna Atkinson" position="Co-founder" link="http://example.net" link_target="_self" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_26.jpg?itok=TuQya-l9"]Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nulla nunc dui, tristique in semper vel, congue sed ligula. Nam dolor ligula, faucibus id sodales in, auctor fringill torquent per conubia nostra.[/ac_testimonial][ac_testimonial fid="118" style="sw_default" name="John Jones" position="Client" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_16.jpg?itok=SkhYozzS"]Sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. . At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est&nbsp;[/ac_testimonial][ac_testimonial fid="121" style="sw_default" name="Patrick H. Lauke" position="Developer" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_20.jpg?itok=OgefrUmF"]&nbsp;At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.[/ac_testimonial][/ac_testimonials][/vc_column_inner][vc_column_inner width="1/3" last="true" odd="true"][ac_progressbar style="extended" no_striped="true"][ac_progressbar_item title="Hygiene and Awareness" bg_style="theme_default" progress="66"][/ac_progressbar_item][ac_progressbar_item title="Mobile development" bg_style="theme_default" progress="68"][/ac_progressbar_item][ac_progressbar_item title="Ecommerce integration" bg_style="theme_default" progress="77"][/ac_progressbar_item][ac_progressbar_item title="Lifetime Support" bg_style="theme_default" progress="100"][/ac_progressbar_item][/ac_progressbar][/vc_column_inner][/vc_row_inner][ac_divider type="invisible" size="medium" custom_color="#444444" align="center" height="30"][/ac_divider][ac_callout font="normal" text_align="center" background="plain_bg" btn_align="after" btn="true" btn_style="sw_default" btn_typo="none" btn_label="get free trial" btn_link_target="_self" btn_bg_color="black" btn_custom_bg="#444444" btn_custom_font="#ffffff" btn_size="small" btn_type="sw_default" btn_border_color="sw_default" btn_custom_border_color="#d1d1d1" btn_cssanimate="undefined" prefix="btn_"]PGg1PndlICZuYnNwO21ha2VzIGl0IGVhc3kgZm9yIHlvdSB0byBnZXQgYSBQcm9mZXNzaW9uYWwgY2VydGlmaWNhdGlvbiBpbiB0aGUgY3Jvd2RlZCB3b3JsZCBvZiBJVC48L2g1PjxwPkp1c3QgdHJ5IG91ciAzMCBkYXkgZnJlZSB0cmlhbCBjb3Vyc2UuIHVzZSB0aGUgbGluayBiZWxvdyE8L3A+[/ac_callout][/vc_column][/vc_row][vc_row style="2" bg_color="sw_default" padding="default" custom_color="#444444" no_overlay="true" position="left" align="left" bg_parallax="false" bg_cover="false" animate="fadeInUp" when="visible" delay="350"][vc_column width="1/1" first="true" odd="true" last="true"][ac_page_header tag="h3" style="subtitle" align="center" margin="default" color="white"]Some of our free courses[/ac_page_header][ac_portfolio id="p-items-531a12dc86bf2" appearance="masonry" total="8" pager="ajax" num_per_page="-1" spaced="true" padding="20" cols="4" view="fade-in-bottom" frame="none" width="equal" style="rectangle-large" effect="none" filter_style="simple centered" media="true" title="true" date="true" date_format="M j, Y" tags="true" sorting="false" fullwidth="false" proj_link="false" details_link="false" excerpt="false"][/ac_portfolio][ac_divider type="invisible" size="medium" align="center" height="70"][/ac_divider][vc_row_inner padding="zero"][vc_column_inner width="1/3" first="true" odd="true"][ac_fancy_header tag="h4" style="double_solid" align="left"]Featured posts[/ac_fancy_header][ac_blog id="blog-items-53708f99e3c21" appearance="circled" total="3" num_per_page="-1" cols="1" frame="none" width="equal" style="square-thumb" effect="blur" media="true" title="true" author="true" date_format="M j, Y" sorting="false" fullwidth="false" spaced="false" date="false" tags="false" excerpt="false"][/ac_blog][/vc_column_inner][vc_column_inner width="1/3" even="true"][ac_fancy_header tag="h4" style="double_solid" align="left"]recent tweets[/ac_fancy_header][ac_twitter key="@envato" items="3" style="compact"][/ac_twitter][/vc_column_inner][vc_column_inner width="1/3" last="true" odd="true"][ac_fancy_header tag="h4" style="double_solid" align="left"]services &amp; products[/ac_fancy_header][vc_accordion][vc_accordion_tab title="web design" open="false"][vc_column_text font="normal"]Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.&nbsp;<br> <br> [/vc_column_text][/vc_accordion_tab][vc_accordion_tab title="Photography" open="true"][vc_column_text font="normal"]Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.&nbsp;<br> <br> [/vc_column_text][/vc_accordion_tab][vc_accordion_tab title="web development" open="false"][vc_column_text font="normal"]Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.&nbsp;<br> <br> [/vc_column_text][/vc_accordion_tab][/vc_accordion][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'header_style\' => array(
          \'header-enabled\' => 1,
          \'transparent_header\' => 1,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'full\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'\',
          \'main_menu_style\' => \'\',
        ),
        \'hero_style\' => array(
          \'enabled\' => 1,
          \'disabled\' => 1,
          \'style\' => \'fancy\',
          \'bg_type\' => \'light\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'stretch\',
          \'height\' => \'400\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'fancy\',
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 0,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'53\',
        ),
        \'node_layout\' => \'full-width-no-footer\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1398443961\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'166\',
        \'source\' => \'node/382\',
        \'alias\' => \'home/v7\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Home V7\',
        \'mlid\' => 0,
        \'plid\' => \'431\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-44\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'418\',
      \'uid\' => \'1\',
      \'title\' => \'home v3\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9cc14305-500d-46ec-96b3-2606cdd841b2\',
      \'nid\' => \'418\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1399705010\',
      \'changed\' => \'1400156002\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3c53dd2d-405e-40a5-907b-0c8dc77f878b\',
      \'revision_timestamp\' => \'1400156002\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row bg_color="sw_default" padding="large" no_bottom_space="true" custom_color="#444444" borders="false" bg_parallax="false" bg_cover="false"][vc_column width="1/3" first="true" odd="true"][ac_iconbox type="inline-sep" size="x-large" icon_type="icon" border="sw_default" icon_position="left" title="Unlimited Skins" tag="h3" animate="ac_appear" when="visible" icon="59436"][vc_column_text font="big"]You’ll love the endless possibilities with AURA. Unlimited portfolios, color options, staff, testimonials, blogs, page layouts. You are only limited by your creativity![/vc_column_text][ac_divider type="invisible" size="medium" custom_color="#444444" align="center" height="20"][/ac_divider][ac_button style="sw_default" label="See more" link_target="_self" bg_color="sw_default" size="large" type="square" full_width="false" block_level="false"][/ac_button][/ac_iconbox][/vc_column][vc_column width="1/3" even="true"][ac_iconbox type="inline-sep" size="x-large" icon_type="icon" border="sw_default" icon_position="left" title="Easy to Customize " tag="h3" icon="59601"][vc_column_text font="big"]A super intuitive and complete theme panel is included so you can change everything including your site colors, container widths, image cropping sizes and much more![/vc_column_text][ac_divider type="invisible" size="medium" custom_color="#444444" align="center" height="20"][/ac_divider][ac_button style="sw_default" label="See more" link_target="_self" bg_color="sw_default" size="large" type="square" full_width="false" block_level="false"][/ac_button][/ac_iconbox][/vc_column][vc_column width="1/3" last="true" odd="true"][ac_iconbox type="inline-sep" size="x-large" icon_type="icon" border="sw_default" icon_position="left" title="Responsive Design" tag="h3" icon="59403"][vc_column_text font="big"]AURA is fully responsive no matter how you decide to build your pages. Create layouts that your visitors can enjoy on any device.&nbsp;[/vc_column_text][ac_divider type="invisible" size="medium" custom_color="#444444" align="center" height="20"][/ac_divider][ac_button style="sw_default" label="See more" link_target="_self" bg_color="sw_default" size="large" type="square" full_width="false" block_level="false"][/ac_button][/ac_iconbox][/vc_column][/vc_row][vc_row][vc_column width="1/1" first="true" last="true" odd="true"][ac_divider type="shadow" size="medium" custom_color="#444444" align="center" width="full"][/ac_divider][/vc_column][/vc_row][vc_row][vc_column width="1/2" first="true" odd="true"][ac_img_frame frame="none" fid="492" effect="none" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/rev-slider-full.jpg?itok=munAHmVM"][/ac_img_frame][/vc_column][vc_column width="1/2" last="true" even="true"][ac_progressbar style="compact" bg_style="theme_default" no_striped="true"][ac_progressbar_item title="National Acquisitions" bg_style="theme_default" progress="97"][/ac_progressbar_item][ac_progressbar_item title="Annual Profit Increase" bg_style="theme_default" progress="83"][/ac_progressbar_item][ac_progressbar_item title="Revenue Increase" bg_style="theme_default" progress="74" style="extended"][/ac_progressbar_item][ac_progressbar_item title="Total Marketshares" bg_style="theme_default" progress="67"][/ac_progressbar_item][ac_progressbar_item title="Research" bg_style="theme_default" progress="52"][/ac_progressbar_item][/ac_progressbar][/vc_column][/vc_row][vc_row][vc_column width="1/1" first="true" last="true" odd="true"][ac_tabs style="simple sep" position="left" font="normal"][ac_tab title="SEO Optimized" tab_id="1398520760-1-99"][ac_page_header tag="h2" style="subtitle" align="left" margin="x-small"]Periodic Table Of SEO Success Factors[/ac_page_header][vc_row_inner][vc_column_inner width="2/3" first="true" odd="true"][vc_column_text font="normal"]We’ve paid close attention to SEO while developing this theme (headings, clean code, speed, etc). Your site must look good, but also rank well on search results.<br> Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.<br> <br> At vero eos et accusam et justo duo dolores et ea rebum. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat.<br> <br> Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua.[/vc_column_text][/vc_column_inner][vc_column_inner width="1/3" last="true" even="true"][ac_img_frame frame="none" fid="471" effect="none" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" animate="fadeInUp" when="visible" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/subtle-rounded.jpg?itok=VDtWxsHR"][/ac_img_frame][/vc_column_inner][/vc_row_inner][/ac_tab][ac_tab title="Boxed Or Full-Width" tab_id="1398547214585-1-5"][ac_page_header tag="h3" style="subtitle" align="left" margin="x-small"]Change your design with switches![/ac_page_header][vc_row_inner][vc_column_inner width="2/3" first="true" odd="true"][vc_column_text font="small"]Quickly switch between boxed or full-width layout for your website design. With AURA there is no need to dig into the stylesheet or change the grid system to get the layout you need.Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. At vero eos et accusam et justo duo dolores et ea rebum.<br> <br> Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat.<br> <br> At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Stet clita kasd gubergren, no sea takimata sanctus est. Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat. At vero eos et accusam et justo duo dolores et ea rebum.[/vc_column_text][/vc_column_inner][vc_column_inner width="1/3" last="true" even="true"][ac_img_frame frame="none" fid="470" effect="none" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" animate="fadeInUp" when="visible" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/2d-dark-rounded.jpg?itok=vma2az2t"][/ac_img_frame][/vc_column_inner][/vc_row_inner][/ac_tab][ac_tab title="Lifetime Support" tab_id="1398547218894-2-1"][ac_page_header tag="h3" style="subtitle" align="left" margin="x-small"]Free 24/7 Support[/ac_page_header][vc_row_inner][vc_column_inner width="2/3" first="true" odd="true"][vc_column_text font="normal"]we are Drupal Heroes! We consider support as important as our theme development. If you need help, get all of your questions answered quickly with exclusive access to our dedicated support forum.<br> <br> Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. At vero eos et accusam et justo duo dolores et ea rebum.<br> <br> At vero eos et accusam et justo duo dolores et ea rebum. Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. Lorem ipsum dolor sit amet. Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat.[/vc_column_text][/vc_column_inner][vc_column_inner width="1/3" last="true" even="true"][ac_img_frame frame="none" fid="472" effect="none" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" animate="fadeInUp" when="visible" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/3d-theme-pill.jpg?itok=TbZd3uZ_"][/ac_img_frame][/vc_column_inner][/vc_row_inner][/ac_tab][ac_tab title="Clean Code" tab_id="1398547681379-3-8"][ac_page_header tag="h3" style="subtitle" align="left" margin="x-small"]The Clean and neat Drupal Way[/ac_page_header][vc_row_inner][vc_column_inner width="2/3" first="true" odd="true"][vc_column_text font="normal"]The theme is great for developers as well. The well commented and clean code makes it easy for you to tweak the theme and also keeps it well optimized and expandable.<br> <br> Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. At vero eos et accusam et justo duo dolores et ea rebum.<br> <br> At vero eos et accusam et justo duo dolores et ea rebum. Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. Lorem ipsum dolor sit amet. Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat.[/vc_column_text][/vc_column_inner][vc_column_inner width="1/3" last="true" even="true"][/vc_column_inner][/vc_row_inner][/ac_tab][ac_tab title="RTL Ready" tab_id="1398547752928-4-3"][ac_page_header tag="h3" style="subtitle" align="left" margin="x-small"]The Clean and neat Drupal Way[/ac_page_header][vc_row_inner][vc_column_inner width="2/3" first="true" odd="true"][vc_column_text font="normal"]We already considered RTL support for AURA. in SASS files provided you can easily develop for RTL and LTR languages too.<br> <br> Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. At vero eos et accusam et justo duo dolores et ea rebum.<br> <br> At vero eos et accusam et justo duo dolores et ea rebum. Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. Lorem ipsum dolor sit amet. Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat.[/vc_column_text][/vc_column_inner][vc_column_inner width="1/3" last="true" even="true"][ac_font_icon type="circled" color="white" bg_color="black" size="xx-large" position="center" animate="fadeInUp" when="visible" icon="59558" icon_str="icon-flag"][/ac_font_icon][/vc_column_inner][/vc_row_inner][/ac_tab][ac_tab title="Tons Of Gallery" tab_id="1398548093794-5-5"][ac_page_header tag="h3" style="subtitle" align="left" margin="x-small"]The Clean and neat Drupal Way[/ac_page_header][vc_row_inner][vc_column_inner width="2/3" first="true" odd="true"][vc_column_text font="normal"]Present your work to the crowd, with our portfolio management you can easily create your own showcase so that everyone is able to find and see your work on the web!<br> <br> Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. At vero eos et accusam et justo duo dolores et ea rebum.<br> <br> At vero eos et accusam et justo duo dolores et ea rebum. Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. Lorem ipsum dolor sit amet. Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat.[/vc_column_text][/vc_column_inner][vc_column_inner width="1/3" last="true" even="true"][/vc_column_inner][/vc_row_inner][/ac_tab][/ac_tabs][ac_divider type="shadow" size="medium" custom_color="#444444" align="center" width="full"][/ac_divider][ac_page_header tag="h2" style="subtitle" align="center" margin="default"]Pricing plans[/ac_page_header][pt type="labeled" cols="4" animate="fadeInUp" when="visible"][pt_col] [pt_price]$150/year.[/pt_price] [pt_package][ac_iconbox type="simple full" size="medium" icon_type="icon" border="circled" icon_position="center" color="black" title="" tag="h4" icon="light-up"]<h4 style="color: #fff;">Starter Package</h4> [/ac_iconbox][/pt_package] [pt_row] Free Setup [/pt_row] [pt_row alt="yes"] 10GB Storage [/pt_row] [pt_row] 100GB Bandwith [/pt_row] [pt_row alt="yes"] 5 Products [/pt_row] [pt_row] Basic Stats [/pt_row] [pt_row alt="yes"] Basic Customization [/pt_row] [pt_row] 1 month support [/pt_row] [pt_row btn="yes"] [ac_button label="Subscribe" link_target="_self" size="large" type="square" style="" border_color="sw_default" use_icon="false" full_width="false" block_level="false"][/ac_button] [/pt_row] [/pt_col] [pt_col] [pt_price]$300/year.[/pt_price] [pt_package][ac_iconbox type="simple full" size="medium" icon_type="icon" border="circled" icon_position="center" color="black" title="" tag="h4" animate="ac_appear" when="visible" icon="users"]<h4 style="color: #fff;">Team Package</h4>[/ac_iconbox][/pt_package] [pt_row] Free Setup [/pt_row] [pt_row alt="yes"] 20GB Storage [/pt_row] [pt_row] 200GB Bandwith [/pt_row] [pt_row alt="yes"] 25 Products [/pt_row] [pt_row] Basic Stats [/pt_row] [pt_row alt="yes"] Basic Customization [/pt_row] [pt_row] 12 month support [/pt_row] [pt_row btn="yes"] [ac_button label="Subscribe" link_target="_self" size="large" type="square" style="" border_color="sw_default" use_icon="false" full_width="false" block_level="false"][/ac_button] [/pt_row] [/pt_col] [pt_col] [pt_price]$500/year.[/pt_price] [pt_package][ac_iconbox type="simple full" size="medium" icon_type="icon" border="circled" icon_position="center" color="black" title="" tag="h4" animate="ac_appear" when="visible" icon="trophy"]<h4 style="color: #fff;">Business Package</h4>[/ac_iconbox][/pt_package] [pt_row] Free Setup [/pt_row] [pt_row alt="yes"] 40GB Storage [/pt_row] [pt_row] 500GB Bandwith [/pt_row] [pt_row alt="yes"] 100 Products [/pt_row] [pt_row] Complex Stats [/pt_row] [pt_row alt="yes"] Complex Customization [/pt_row] [pt_row] 36 month support [/pt_row] [pt_row btn="yes"] [ac_button label="Subscribe" link_target="_self" size="large" type="square" style="" border_color="sw_default" use_icon="false" full_width="false" block_level="false"][/ac_button] [/pt_row] [/pt_col] [pt_col] [pt_price]$2000/ year.[/pt_price] [pt_package][ac_iconbox type="simple full" size="medium" icon_type="icon" border="circled" icon_position="center" color="black" title="" tag="h4" animate="ac_appear" when="visible" icon="cloud-thunder"]<h4 style="color: #fff;">Enterprise Package</h4>[/ac_iconbox][/pt_package] [pt_row] Free Setup [/pt_row] [pt_row alt="yes"] unlimited Storage [/pt_row] [pt_row] unlimited Bandwith [/pt_row] [pt_row alt="yes"] all Products [/pt_row] [pt_row] advanced Stats [/pt_row] [pt_row alt="yes"] advanced Customization [/pt_row] [pt_row] lifetime support [/pt_row] [pt_row btn="yes"] [ac_button label="Subscribe" link_target="_self" size="large" type="square" style="" border_color="sw_default" use_icon="false" full_width="false" block_level="false"][/ac_button] [/pt_row] [/pt_col][/pt][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'header_style\' => array(
          \'header-enabled\' => 0,
          \'transparent_header\' => 0,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'full\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'\',
          \'main_menu_style\' => \'\',
        ),
        \'hero_style\' => array(
          \'enabled\' => 1,
          \'disabled\' => 1,
          \'style\' => \'fancy\',
          \'bg_type\' => \'light\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'fancy\',
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 1,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'6\',
        ),
        \'node_layout\' => \'full-width\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1399705010\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'196\',
        \'source\' => \'node/418\',
        \'alias\' => \'home/v3\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'home v3\',
        \'mlid\' => 0,
        \'plid\' => \'431\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-48\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'166\',
      \'uid\' => \'1\',
      \'title\' => \'5 Secrets to Winning\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1242feae-9c6f-4e92-b790-ad2ce0671b57\',
      \'nid\' => \'166\',
      \'type\' => \'blog\',
      \'language\' => \'und\',
      \'created\' => \'1387121563\',
      \'changed\' => \'1400012576\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3e62d7eb-8623-4119-87a2-ca87af44f71d\',
      \'revision_timestamp\' => \'1400012576\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row bg_color="sw_default" padding="default" custom_color="#444444" borders="false" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][vc_column_text font="normal"]Quis aute iure reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros et accumsan et iusto odio dignissim qui blandit praesent luptatum zzril delenit augue duis dolore te feugait nulla facilisi.[/vc_column_text][/vc_column][/vc_row][vc_row bg_color="sw_default" padding="zero" custom_color="#444444" borders="false" bg_parallax="false" bg_cover="false"][vc_column first="true" odd="true" width="2/3"][vc_column_text font="normal"]Stet clita kasd gubergren, no sea takimata sanctus est.. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat.Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. At vero eos et accusam et justo duo dolores et ea rebum. [/vc_column_text][/vc_column][vc_column width="1/3" last="true" even="true"][ac_quote type="blockquote" font="normal" background="plain"]Quis aute iure reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. At vero eos et accusam et justo duo dolores et ea rebum.&nbsp;[/ac_quote][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'field_blog_tags\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'93\',
          ),
          array(
            \'tid\' => \'120\',
          ),
          array(
            \'tid\' => \'121\',
          ),
        ),
      ),
      \'field_blog_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'83\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Post\',
          \'sioct:BlogPost\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'thumb\' => array(
          \'type\' => \'image\',
          \'media\' => array(
            array(
              \'fid\' => \'580\',
            ),
          ),
        ),
        \'media\' => array(
          \'add_thumbs\' => \'Add another Image\',
        ),
        \'misc\' => array(
          \'excerpt\' => array(
            \'value\' => \'At vero eos et accusam et justo duo dolores et ea rebum. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna.\',
            \'format\' => \'full_html\',
          ),
          \'custom_frame\' => 0,
          \'frame\' => \'\',
          \'about_author\' => 1,
        ),
        \'hero_style\' => array(
          \'enabled\' => 0,
          \'disabled\' => 0,
          \'style\' => \'fancy\',
          \'bg_type\' => \'dark\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'fancy\',
        ),
        \'node_layout\' => \'second-sidebar\',
        \'header_slider\' => array(
          \'hs-enabled\' => 0,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'6\',
        ),
        \'header_style\' => array(
          \'header-enabled\' => 0,
          \'transparent_header\' => 0,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'full\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'\',
          \'main_menu_style\' => \'\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1394638363\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'267\',
        \'source\' => \'node/166\',
        \'alias\' => \'blog/5-secrets-winning\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'160\',
      \'uid\' => \'44\',
      \'title\' => \'12 Things in Successful People\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e44399fd-1235-4f48-8efc-617118b39590\',
      \'nid\' => \'160\',
      \'type\' => \'blog\',
      \'language\' => \'und\',
      \'created\' => \'1392235064\',
      \'changed\' => \'1401168763\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'423ec4c4-eff5-4685-8c36-eb81a2f9773b\',
      \'revision_timestamp\' => \'1401168763\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row][vc_column width="1/1" first="true" last="true" odd="true"][vc_column_text font="normal"]<p>Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat. Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros et accumsan et iusto odio dignissim qui blandit praesent luptatum zzril delenit augue duis dolore te feugait nulla facilisi.</p><p>Lorem ipsum dolor sit amet, consetetur sadipscing elitr, At accusam aliquyam diam diam dolore dolores duo eirmod eos erat, et nonumy sed tempor et et invidunt justo labore Stet clita ea et gubergren, kasd magna no rebum.&nbsp;</p>[/vc_column_text][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'field_blog_tags\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'87\',
          ),
          array(
            \'tid\' => \'88\',
          ),
        ),
      ),
      \'field_blog_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'82\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Post\',
          \'sioct:BlogPost\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'thumb\' => array(
          \'type\' => \'image\',
          \'media\' => array(
            array(
              \'fid\' => \'553\',
            ),
          ),
        ),
        \'media\' => array(
          \'add_thumbs\' => \'Add another Image\',
        ),
        \'misc\' => array(
          \'excerpt\' => array(
            \'value\' => \'Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Excepteur sint obcaecat cupiditat non proident, sunt in culpa qui officia deserunt mollit anim id est.\',
            \'format\' => \'full_html\',
          ),
          \'custom_frame\' => 0,
          \'frame\' => \'\',
          \'about_author\' => 1,
        ),
        \'hero_style\' => array(
          \'enabled\' => 0,
          \'disabled\' => 0,
          \'style\' => \'fancy\',
          \'bg_type\' => \'dark\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'simple\',
        ),
        \'node_layout\' => \'second-sidebar\',
        \'header_style\' => array(
          \'header-enabled\' => 0,
          \'transparent_header\' => 0,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'full\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'\',
          \'main_menu_style\' => \'\',
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 0,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'6\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1394563389\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'Kimberlie\',
      \'picture\' => \'300\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'path\' => array(
        \'pid\' => \'263\',
        \'source\' => \'node/160\',
        \'alias\' => \'blog/12-things-successful-people\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'157\',
      \'uid\' => \'1\',
      \'title\' => \'A small mercy loves!\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'bfbcc0aa-eee4-406d-a756-cbc31ba24010\',
      \'nid\' => \'157\',
      \'type\' => \'blog\',
      \'language\' => \'und\',
      \'created\' => \'1375522558\',
      \'changed\' => \'1400012683\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'4e0d2b62-583e-4af9-b60e-e467b59f905f\',
      \'revision_timestamp\' => \'1400012683\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "[vc_row][vc_column width=\\"1/1\\" first=\\"true\\" last=\\"true\\" odd=\\"true\\"][vc_column_text font=\\"normal\\"]<div>[ac_dropcap border=\'circled\']L[/ac_dropcap]orem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat. Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros et accumsan et iusto odio dignissim qui blandit praesent luptatum zzril delenit augue duis dolore te feugait nulla facilisi. Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. At vero eos et accusam et justo duo dolores et ea rebum.</div><div>&nbsp;</div><div>Sanctus sea sed takimata ut vero voluptua. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. Excepteur sint obcaecat cupiditat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</div>[/vc_column_text][/vc_column][/vc_row]",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'field_blog_tags\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'121\',
          ),
        ),
      ),
      \'field_blog_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'82\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Post\',
          \'sioct:BlogPost\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'thumb\' => array(
          \'type\' => \'image\',
          \'media\' => array(
            array(
              \'fid\' => \'581\',
            ),
          ),
        ),
        \'media\' => array(
          \'add_thumbs\' => \'Add another Image\',
        ),
        \'misc\' => array(
          \'excerpt\' => array(
            \'value\' => \'\',
            \'format\' => \'full_html\',
          ),
          \'custom_frame\' => 0,
          \'frame\' => \'\',
          \'about_author\' => 1,
        ),
        \'hero_style\' => array(
          \'enabled\' => 0,
          \'disabled\' => 0,
          \'style\' => \'fancy\',
          \'bg_type\' => \'dark\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'simple\',
        ),
        \'node_layout\' => \'second-sidebar\',
        \'header_style\' => array(
          \'header-enabled\' => 0,
          \'transparent_header\' => 0,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'full\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'\',
          \'main_menu_style\' => \'\',
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 0,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'6\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1394530558\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'261\',
        \'source\' => \'node/157\',
        \'alias\' => \'blog/small-mercy-loves\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'388\',
      \'uid\' => \'1\',
      \'title\' => \'home v2\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8dbdcad6-7ebd-429c-b143-2681d6ee1d21\',
      \'nid\' => \'388\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1398603417\',
      \'changed\' => \'1400257748\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'569c83f2-cc2e-4656-b0dc-07a44b94f80a\',
      \'revision_timestamp\' => \'1400257748\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row bg_color="sw_default" padding="default" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/4" first="true" odd="true"][ac_img_frame frame="simple-bordered" fid="468" effect="none" style="rectangle-large" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/Grzesiek_Marcin_Monika_GPP-0041.jpg?itok=Txgd7bRz"][ac_page_header tag="h4" style="" align="left" margin="x-small"]<a title="about us" href="about-us-1"> About Our Company</a>[/ac_page_header][vc_column_text font="normal"]We champions great design! For us, that means design that improves lives and makes things better.[/vc_column_text][ac_button style="subtle-fade" label="Read More" link_target="_self" bg_color="" size="small" type="" position="left" full_width="true" animate="fadeIn" when="visible" block_level="false" icon="59641"][/ac_button][/ac_img_frame][/vc_column][vc_column width="1/4" even="true"][ac_img_frame frame="simple-bordered" fid="466" effect="none" style="rectangle-large" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/photodune-7469008-look-at-the-results-m_0.jpg?itok=4DJPqj8O"][ac_page_header tag="h4" style="" align="left" margin="x-small"]<a title="about us" href="about-us-1">events</a>[/ac_page_header][vc_column_text font="normal"]Find out about our upcoming conferences, workshops, and our series of guest talks by leading design experts. [/vc_column_text][ac_button style="subtle-fade" label="Read More" link_target="_self" bg_color="" size="small" type="sw_default" position="left" full_width="true" animate="fadeIn" when="visible" block_level="false" icon="59641"][/ac_button][/ac_img_frame][/vc_column][vc_column width="1/4" odd="true"][ac_img_frame frame="simple-bordered" fid="469" effect="none" style="rectangle-large" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/photodune-7469012-young-and-headed-for-success-m.jpg?itok=1wOgOdZU"][ac_page_header tag="h4" style="" align="left" margin="x-small"]<a title="about us" href="about-us-1">our vision</a>[/ac_page_header][vc_column_text font="normal"]Find out about our upcoming conferences, workshops, and our series of guest talks by leading design experts. [/vc_column_text][ac_button style="subtle-fade" label="Read More" link_target="_self" bg_color="" size="small" type="sw_default" position="left" full_width="true" animate="fadeIn" when="visible" block_level="false" icon="59641"][/ac_button][/ac_img_frame][/vc_column][vc_column width="1/4" last="true" even="true"][ac_img_frame frame="simple-bordered" fid="467" effect="none" style="rectangle-large" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/photodune-7469013-sharing-ideas-for-the-comapnys-success-m.jpg?itok=kBxL0qQ_"][ac_page_header tag="h4" style="" align="left" margin="x-small"]<a title="about us" href="about-us-1">Our services</a>[/ac_page_header][vc_column_text font="normal"]We make design work for you by developing public services, and enhancing the built environment.[/vc_column_text][ac_button style="subtle-fade" label="Read More" link_target="_self" bg_color="" size="small" type="sw_default" position="left" full_width="true" animate="fadeIn" when="visible" block_level="false" icon="59641"][/ac_button][/ac_img_frame][/vc_column][/vc_row][vc_row style="1" bg_type="img" bg_color="sw_default" padding="default" custom_color="#444444" bg_position="center center" bg_repeat="no-repeat" bg_attachment="scroll" bg_cover="false" bg_parallax="false"][vc_column width="1/1" first="true" odd="true" last="true"][vc_row_inner padding="zero"][vc_column_inner width="1/4" first="true" odd="true"][ac_counter title="Happy clients" value="1200" bg_style="dark"][/ac_counter][/vc_column_inner][vc_column_inner width="1/4" even="true"][ac_counter title="Industry Accolades" value="3500"][/ac_counter][/vc_column_inner][vc_column_inner width="1/4" odd="true"][ac_counter title="Hours of Development" value="10000"][/ac_counter][/vc_column_inner][vc_column_inner width="1/4" last="true" even="true"][ac_counter title="Successful Projects" value="15000"][/ac_counter][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row bg_type="img" bg_color="sw_default" padding="default" custom_color="#444444" borders="false" bg_position="center center" bg_repeat="no-repeat" bg_attachment="scroll" bg_cover="false" bg_parallax="false"][vc_column width="1/1" first="true" odd="true" last="true"][ac_page_header tag="h3" block_title="true" align="center" margin="default"]News &amp; opinion[/ac_page_header][ac_blog id="blog-items-535d477fc9de9" appearance="grid" total="4" num_per_page="-1" spaced="true" padding="20" cols="4" frame="simple-bordered" width="equal" style="rectangle-large" effect="none" media="true" title="true" date_format="M j, Y" tags="true" sorting="false" fullwidth="false" date="false" author="false" excerpt="false"][/ac_blog][/vc_column][/vc_row][vc_row style="1" bg_color="sw_default" bg_opacity="70" padding="default" custom_color="#444444" borders="false" bg_parallax="false" bg_cover="false"][vc_column width="1/3" first="true" odd="true"][ac_page_header tag="h3" block_title="true" align="center" margin="default"]from our clients[/ac_page_header][ac_testimonials style="fancy" appearance="slider" slider_style="nav" cols="1" font="normal" easing="easeOutCubic" speed="1000" nav="true" avatar_pos="header" where="icon"][ac_testimonial fid="117" style="sw_default" name="Richard Doe" position="Director" link="http://example.net" link_target="_self" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_15.jpg?itok=fiUjPs_z"]Aenean vitae metus justo. Duis luctus dui nec condimentum suscipit. Maecenas tempor arcu in ipsum aliquam, vel porttitor odio dictum. Nullam porttitor eget lorem nec imperdiet. Mauris ultricies purus risus, ac viverra risus vulputate nec.[/ac_testimonial][ac_testimonial fid="119" style="sw_default" name="Anna Atkinson" position="Co-founder" link="http://example.net" link_target="_self" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_26.jpg?itok=TuQya-l9"]Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nulla nunc dui, tristique in semper vel, congue sed ligula. Nam dolor ligula, faucibus id sodales in, auctor fringill torquent per conubia nostra.[/ac_testimonial][ac_testimonial fid="118" style="sw_default" name="John Jones" position="Client" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_16.jpg?itok=SkhYozzS"]Sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. . At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est&nbsp;[/ac_testimonial][ac_testimonial fid="121" style="sw_default" name="Patrick H. Lauke" position="Developer" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_20.jpg?itok=OgefrUmF"]&nbsp;At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.[/ac_testimonial][ac_testimonial fid="122" style="sw_default" name="cassidy williams" position="CIO" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_2.jpg?itok=eXxxst3b"]&nbsp;At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.[/ac_testimonial][/ac_testimonials][/vc_column][vc_column width="2/3" even="true" last="true"][ac_page_header tag="h3" block_title="true" align="center" margin="default"]Our services[/ac_page_header][ac_tabs style="fancy no-sep" position="top"][ac_tab title="Consulting" icon="59417" font="fontello" tab_id="1387432398-1-538700-5610"][ac_img_frame frame="bordered" fid="586" effect="sw_default" style="rectangle-small" lightbox_style="rectangle-small" video="0" align="left" caption_align="left" lightbox="false" animate="fadeInLeft" when="visible" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/242259195_79b9bfc64e_b.jpg?itok=zwUvvdZR"][/ac_img_frame][vc_column_text font="normal"]Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur neque interdum tellus, quis lorem ipsum tooltip luctus ligula. Curabitur laoreet fringilla porta. Proin dictum lacus at neque interdum tempor.At vero eos et accusam et justo duo dolores et ea rebum. Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis.. Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat.[/vc_column_text][/ac_tab][ac_tab title="SEO" icon="59401" font="fontello" tab_id="1387432398-2-598700-5610"][vc_column_text]Lorem ipsum dolor sit amet, consectetur adipiscing elit metus vel leo placerat cursus. Nullam rutrum velit eget quam pretium vehicula. Amet null vitae ante vitae mauris. Lorem ipsum massa sed turpis aliquam eleifend id pulvinar metus sed lorem. Maecenas enim velit. Maecenas eu metus vel leo placerat cursus. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur neque interdum tellus, quis lorem ipsum tooltip luctus ligula. Curabitur laoreet fringilla porta. Proin dictum lacus at neque interdum tempor.Lorem ipsum dolor sit amet, consectetur adipiscing elit metus vel leo placerat cursus. Nullam rutrum velit eget quam pretium vehicula. Maecenas enim velit. Maecenas eu metus vel leo placerat cursus. Curabitur quis rhoncus tellus, quis lorem ipsum tooltip luctus ligula. Gaute irure dolor adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna lorem nulla amet. Curabitur laoreet fringilla lorem ipsum porta. Nullam rutrum velit eget quam pretium vehicula. Maecenas enim velit.[/vc_column_text][/ac_tab][ac_tab title="Web design" icon="59424" font="fontello" tab_id="1387438120853-2-88700-5610"][ac_img_frame frame="rounded_borders" fid="235" effect="sw_default" style="rectangle-small" lightbox_style="rectangle-small" video="0" align="right" lightbox="false" animate="fadeInLeft" when="visible" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/portfolio/misc/photodune-359310-growth-s.jpg?itok=pUvwHO6Y"][/ac_img_frame][vc_column_text animate="fadeInRight" when="visible"]Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur neque interdum tellus, quis lorem ipsum tooltip luctus ligula. Curabitur laoreet fringilla porta. Proin dictum lacus at neque interdum tempor. Lorem ipsum dolor sit amet, consectetur adipiscing elit metus vel leo placerat cursus. Nullam rutrum velit eget quam pretium vehicula. Amet null vitae ante vitae mauris. Lorem ipsum massa sed turpis aliquam eleifend id pulvinar metus sed lorem. Maecenas enim velit. Maecenas eu metus vel leo placerat cursus. Curabitur quis rhoncus tellus, quis lorem ipsum tooltip luctus ligula. Curabitur laoreet fringilla lorem ipsum porta lorem ipsum. Gaute irure dolor adipisicing elit, sed do eiusmod tempor incididunt ut labore et. Amet null vitae ante vitae! Lorem ipsum dolor sit amet, consectetur adipiscing elit metus vel leo placerat cursus. Nullam rutrum velit eget quam pretium vehicula. Amet null vitae ante vitae mauris. Lorem ipsum massa sed turpis aliquam eleifend id pulvinar metus sed lorem. Maecenas enim velit. Maecenas eu metus vel leo placerat cursus.[/vc_column_text][/ac_tab][ac_tab title="Programming" icon="59434" font="fontello" tab_id="1387438717780-3-28700-5610"][ac_progressbar style="extended"][ac_progressbar_item title="Skill or Task 1" bg_style="purple" progress="50" icon="59481" font="fontello"][/ac_progressbar_item][ac_progressbar_item title="Skill or Task 1" bg_style="silver" progress="78" icon="59574" font="fontello"][/ac_progressbar_item][ac_progressbar_item title="Skill or Task 2" bg_style="red" progress="68" icon="59423" font="fontello"][/ac_progressbar_item][ac_progressbar_item title="Skill or Task 2" bg_style="green" progress="75" icon="59458" font="fontello"][/ac_progressbar_item][/ac_progressbar][/ac_tab][/ac_tabs][/vc_column][/vc_row][vc_row bg_color="sw_default" padding="default" custom_color="#444444" borders="false" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" odd="true" last="true"][ac_page_header tag="h3" block_title="true" align="center" margin="default"]Projects[/ac_page_header][ac_portfolio id="p-items-535d482a277cf" appearance="masonry" total="8" pager="simple" num_per_page="-1" spaced="true" padding="10" cols="4" view="simple-sep" frame="simple-bordered" width="equal" style="square-large" effect="none" sorting="true" filter_style="simple centered" media="true" title="true" date="true" date_format="M j, Y" tags="true" fullwidth="false" proj_link="false" details_link="false" excerpt="false"][/ac_portfolio][/vc_column][/vc_row][vc_row style="1" bg_color="sw_default" bg_opacity="70" padding="default" custom_color="#444444" borders="true" border_top="rgba(0,0,0,.0)" border_bottom="rgba(0,0,0,.0)" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][ac_page_header tag="h3" block_title="true" align="center" margin="default"]Why us?[/ac_page_header][vc_row_inner][vc_column_inner width="1/3" first="true" odd="true"][ac_iconbox type="boxed-inline" size="medium" icon_type="icon" border="sw_default" icon_position="left" title="Designed To Work" tag="h5" icon="59824"][vc_column_text]Vestibulum ante ipsum primis in fauc ibus orci luctus et ultrices posuere cubilia Curae; Integer in enim dui. Suspendisse potenti. Sed placerat pellentesque.[/vc_column_text][ac_divider type="invisible" size="medium" custom_color="#444444" align="center" height="20"][/ac_divider][ac_button style="subtle-fade" label="Read More" link_target="_self" bg_color="sw_default" size="medium" type="sw_default" position="left" full_width="true" animate="fadeIn" when="visible" block_level="false" icon="59641"][/ac_button][/ac_iconbox][/vc_column_inner][vc_column_inner width="1/3" even="true"][ac_iconbox type="boxed-inline" size="medium" icon_type="icon" border="sw_default" icon_position="left" title="Simplicity In Design" tag="h5" icon="59599"][vc_column_text]Vestibulum ante ipsum primis in fauc ibus orci luctus et ultrices posuere cubilia Curae; Integer in enim dui. Suspendisse potenti. Sed placerat pellentesque.[/vc_column_text][ac_divider type="invisible" size="medium" custom_color="#444444" align="center" height="20"][/ac_divider][ac_button style="subtle-fade" label="Read More" link_target="_self" bg_color="sw_default" size="medium" type="sw_default" position="left" full_width="true" animate="fadeIn" when="visible" block_level="false" icon="59641"][/ac_button][/ac_iconbox][/vc_column_inner][vc_column_inner width="1/3" last="true" odd="true"][ac_iconbox type="boxed-inline" size="medium" icon_type="icon" border="sw_default" icon_position="left" title="All New Features" tag="h5" icon="59865"][vc_column_text font="normal"]Vestibulum ante ipsum primis in fauc ibus orci luctus et ultrices posuere cubilia Curae; Integer in enim dui. Suspendisse potenti. Sed placerat pellentesque.[/vc_column_text][ac_divider type="invisible" size="medium" custom_color="#444444" align="center" height="20"][/ac_divider][ac_button style="subtle-fade" label="Read More" link_target="_self" bg_color="sw_default" size="medium" type="sw_default" position="left" full_width="true" animate="fadeIn" when="visible" block_level="false" icon="59641"][/ac_button][/ac_iconbox][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row bg_color="sw_default" padding="default" custom_color="#444444" bg_parallax="true" no_border="true" bg_cover="false"][vc_column width="1/1" first="true" odd="true" last="true"][ac_page_header tag="h3" block_title="true" align="center" margin="small"]How to reach our Rome Headquarter office?[/ac_page_header][ac_divider type="invisible" size="medium" custom_color="#444444" align="center" height="40"][/ac_divider][vc_column_text font="big" class="ac-align-center"]We do one thing, and we do it well. Interested in working together? Fill out<br> the Project Inquiry form below with some information about your project.[/vc_column_text][vc_row_inner padding="zero" animate="fadeInUp" when="visible" delay="350"][vc_column_inner width="1/2" first="true" odd="true"][ac_frame][ac_page_header tag="h4" align="left" margin="small"]Rome Office[/ac_page_header][ac_contact_info style="compact" company="acquiathemes design " address="12345 Main Street, New York, NY 02781" phone="1.800.555.6789" fax="1.800.555.6788" email="info@acquiathemes.com" socials="undefined"][ac_font_icon info_title="Google plus" info="tooltip" info_place="top" info_trigger="hover" link="http://plus.google.com/acquiathemes" link_target="_blank" icon="59469" font="fontello" icon_str="icon-gplus"][/ac_font_icon][ac_font_icon info_title="Linked in" info="tooltip" info_place="top" info_trigger="hover" link="http://themeforest.net/user/_acquiathemes" link_target="_blank" icon="59477" font="fontello" icon_str="icon-linkedin"][/ac_font_icon][ac_font_icon info_title="news feed" info="tooltip" info_place="top" info_trigger="hover" link="http://themeforest.net/user/_acquiathemes" link_target="_blank" icon="59472" font="fontello" icon_str="icon-rss"][/ac_font_icon][ac_font_icon info_title="Twitter" info="tooltip" info_place="top" info_trigger="hover" link="http://themeforest.net/user/_acquiathemes" link_target="_blank" icon="59394" font="fontello" icon_str="icon-twitter"][/ac_font_icon][ac_font_icon info_title="Vimeo" info="tooltip" info_place="top" info_trigger="hover" link="http://themeforest.net/user/_acquiathemes" link_target="_blank" icon="59422" font="fontello" icon_str="icon-vimeo"][/ac_font_icon][ac_font_icon info_title="dribbble" info="tooltip" info_place="top" info_trigger="hover" link="http://themeforest.net/user/_acquiathemes" link_target="_blank" icon="59470" font="fontello" icon_str="icon-dribbble"][/ac_font_icon][/ac_contact_info][/ac_frame][/vc_column_inner][vc_column_inner width="1/2" last="true" even="true"][ac_frame][ac_page_header tag="h4" align="left" margin="small"]Drop us a line[/ac_page_header][ac_contact cid="1" style="centered" bg_style="dark" type_title="Website feedback"][/ac_contact][/ac_frame][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row style="1" bg_color="sw_default" padding="zero" custom_color="#444444" class="ac-align-center" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][ac_divider type="invisible" size="medium" align="center" height="10"][/ac_divider][ac_font_icon type="rounded-soft" color="white" bg_color="custom" custom_bg_color="#3b5998" size="small" link="http://facebook.com/acquiathemes" link_target="_self" icon="59393" icon_str="icon-facebook"][/ac_font_icon][ac_font_icon type="rounded-soft" color="white" bg_color="custom" custom_bg_color="#dd4b39" size="small" link="http://facebook.com/acquiathemes" link_target="_self" icon="59469" icon_str="icon-gplus"][/ac_font_icon][ac_font_icon type="rounded-soft" color="white" bg_color="custom" custom_bg_color="#cb2027" size="small" link="http://facebook.com/acquiathemes" link_target="_self" icon="59479" icon_str="icon-pinterest"][/ac_font_icon][ac_font_icon type="rounded-soft" color="white" bg_color="custom" custom_bg_color="#55acce" size="small" link="http://facebook.com/acquiathemes" link_target="_self" icon="59394" icon_str="icon-twitter"][/ac_font_icon][ac_font_icon type="rounded-soft" color="white" bg_color="custom" custom_bg_color="#ff7900" size="small" link="http://facebook.com/acquiathemes" link_target="_self" icon="59472" icon_str="icon-rss"][/ac_font_icon][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'header_style\' => array(
          \'header-enabled\' => 0,
          \'transparent_header\' => 0,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'full\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'\',
          \'main_menu_style\' => \'\',
        ),
        \'hero_style\' => array(
          \'enabled\' => 1,
          \'disabled\' => 1,
          \'style\' => \'fancy\',
          \'bg_type\' => \'light\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'fancy\',
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 1,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'14\',
        ),
        \'node_layout\' => \'full-width-no-footer\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1398603417\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'171\',
        \'source\' => \'node/388\',
        \'alias\' => \'home/v2\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'home v2\',
        \'mlid\' => 0,
        \'plid\' => \'431\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-49\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'86\',
      \'uid\' => \'1\',
      \'title\' => \'breakfast & cookie\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0a3ff278-0402-440f-9525-140ff5cbedeb\',
      \'nid\' => \'86\',
      \'type\' => \'portfolio\',
      \'language\' => \'und\',
      \'created\' => \'1389258816\',
      \'changed\' => \'1400003663\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'56ed359b-2823-4f88-a160-fd28042e17d0\',
      \'revision_timestamp\' => \'1400003663\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row bg_color="sw_default" padding="zero" custom_color="#444444" borders="false" bg_parallax="false" bg_cover="false"][vc_column class="ac-no-margin" width="1/1" first="true" last="true" odd="true"][ac_page_header tag="h4" margin="x-small" align="left" sub="false"]About this project[/ac_page_header][vc_column_text font="normal"]Ut feugiat accumsan massa ut luctus. Ut mollis ac felis et varius. Integer dolor est, porttitor vel augue sit amet, molestie lobortis mi. Praesent risus nibh, convallis et pretium eget, consequat nec justo. Sed sagittis neque lorem, vitae lobortis purus luctus nec. Ut tempor sem a velit dapibus, sit amet consectetur urna auctor. In hac habitasse platea dictumst.[/vc_column_text][vc_column_text font="normal" class="ac-no-margin meta"]<strong>Client:<br></strong>Awesome Studio Inc.&nbsp;[ac_divider type="line" align="center" &nbsp;width="full"][/ac_divider]<strong>Task:&nbsp;<br></strong>Website and Identity redesign.[ac_divider type="line" align="center" width="full"][/ac_divider]<strong>Skills:&nbsp;<br></strong>Photoshop, HTML, CSS, Javascript.[ac_divider type="line" align="center" width="full"][/ac_divider][/vc_column_text][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'field_portfolio_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'63\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'thumb\' => array(
          \'type\' => \'image\',
          \'media\' => array(
            array(
              \'fid\' => \'548\',
            ),
          ),
          \'link_type\' => \'item\',
          \'link_image\' => array(
            \'fid\' => \'0\',
          ),
          \'link_video\' => array(
            \'fid\' => \'0\',
          ),
          \'link_url\' => \'\',
        ),
        \'media\' => array(
          \'add_thumbs\' => \'Add another Image\',
        ),
        \'preview\' => array(
          \'use_thumb\' => 1,
          \'type\' => \'\',
          \'add_prev_item\' => \'Add another preview\',
        ),
        \'misc\' => array(
          \'excerpt\' => array(
            \'value\' => \'Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros et accumsan et iusto odio dignissim qui blandit praesent luptatum zzril delenit augue duis dolore te feugait nulla facilisi.\',
            \'format\' => \'full_html\',
          ),
          \'link\' => \'https://scoutzie.com/users/51039ecec83ae04389000001\',
          \'link_title\' => \'@Andrew\',
          \'layout\' => \'left\',
          \'custom_frame\' => 0,
          \'frame\' => \'\',
          \'view\' => \'list\',
          \'display\' => \'standard\',
          \'columns\' => \'1\',
          \'spaced\' => 0,
          \'meta\' => 0,
          \'social\' => 1,
        ),
        \'hero_style\' => array(
          \'enabled\' => 0,
          \'disabled\' => 0,
          \'style\' => \'fancy\',
          \'bg_type\' => \'dark\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'fancy\',
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 0,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'6\',
        ),
        \'header_style\' => array(
          \'header-enabled\' => 0,
          \'transparent_header\' => 0,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'full\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'\',
          \'main_menu_style\' => \'\',
        ),
        \'node_layout\' => \'no-sidebars\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1391937216\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'247\',
        \'source\' => \'node/86\',
        \'alias\' => \'portfolio/breakfast-cookie\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'172\',
      \'uid\' => \'1\',
      \'title\' => \'How Big Data Helps\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c1fa1419-97d1-4bf4-8351-93ad76773af4\',
      \'nid\' => \'172\',
      \'type\' => \'blog\',
      \'language\' => \'und\',
      \'created\' => \'1394807913\',
      \'changed\' => \'1401168704\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'67586bff-70b6-417f-a745-d36238bc9ed0\',
      \'revision_timestamp\' => \'1401168704\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "[vc_row][vc_column width=\\"1/1\\" first=\\"true\\" last=\\"true\\" odd=\\"true\\"][vc_column_text font=\\"normal\\"]<div>Sliding the whole vast majority of how in terms come triple-breasted The flash came a wistful look for a good fortune when he was wildly excited. - he in order to be placed a newly hatched baby eagle cheery space-time continuum and under rubbery Vogon gesture. a greatest excitement face was a planet tick away of was, small city. Its crew to with - said so I shall be telling people he kept saying a good know why have to.</div><div>&nbsp;</div><h5>Tell us about some of your favorite books.</h5>[ac_list style=\\"un\\" num=\\"1\\" font=\\"normal\\"]<ul><li>Development</li><li>High Quality</li><li>SEO</li><li>whitehouse.gov</li><li>lifetime support</li></ul><div>[/ac_list]&nbsp;</div><div>spokesman can this time, and know that. I a dark millennia, and punched odd because on arched be a single net occasional pot shot forward or tell how much as it reflected Arthur blinked at his lawyer, his rescue, hazarding \\"counterpoint the planet was so much in the world was no thoughts - I that it has gone, it or start making fun of mind off blackness stabbed a railed ramp, rolled on. They squeezed themselves down quite tea. - What\'s that?</div><div>&nbsp;</div><div>Tau str Thinker in possession of it Hiker\'s Guide to trim it would have evolved and we thank you, - he [ac_highlight color=\'\']underscored[/ac_highlight] with dolphins so kind. Ford at - said known that it only a trap. - he had been telling people of the horizon. He was also a scampering dance in the plans have made them there aren\'t we? - Hi there! The guard was a picture and I haven\'t the sound, the glow You got to a shadow over the ages hang on, - Well, maybe</div><div>&nbsp;</div><h5>What are some of your favorite tools for the creative process?</h5><div>Wow. The whole it scores over the problem aliens now, and nervous and never again because an infinite number coalesced and down? - [ac_tooltip link=\\"#example\\" title=\\"Hello, I\'m a tooltip!\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" info_content=\\"Place a little extra content in here for informational purposes.\\"]Zaphod [/ac_tooltip]couldn\'t believe the Vogons had just sitting next thing anybody\'s said Zaphod, of impassioned stridency. - started after golden in the answer. I hope last the Earth book, a million seven hundred and I\'ve just after us and looked insanely complicated, and the Galaxy\'s richest fact it must admit that you\'ve had lived early design awards. going to in Ford hurriedly, - And what</div><div>&nbsp;</div><div>People Personalities, - was that? - Well, - he asked. - time do something, - We don\'t know. - you\'re the next to sing. - Well he all, takes time to small dark featureless mass once Prefect\'s satchel were about it made interstellar of wire end of the outlying regions The sweat stood on top of wonderful exciting day A slight yawn and staring knew they say. He gave the the surface of pure the Vogon captain didn\'t feel of wolves. - a lot. The was accidentally</div>[/vc_column_text][/vc_column][/vc_row]",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'field_blog_tags\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'117\',
          ),
          array(
            \'tid\' => \'118\',
          ),
          array(
            \'tid\' => \'119\',
          ),
        ),
      ),
      \'field_blog_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'98\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Post\',
          \'sioct:BlogPost\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'thumb\' => array(
          \'type\' => \'image\',
          \'media\' => array(
            array(
              \'fid\' => \'628\',
            ),
          ),
        ),
        \'media\' => array(
          \'add_thumbs\' => \'Add another Image\',
        ),
        \'misc\' => array(
          \'excerpt\' => array(
            \'value\' => \'Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat. Duis autem vel eum iriure dolor in hendrerit in vulputate .\',
            \'format\' => \'full_html\',
          ),
          \'custom_frame\' => 0,
          \'frame\' => \'\',
          \'about_author\' => 1,
        ),
        \'hero_style\' => array(
          \'enabled\' => 1,
          \'disabled\' => 0,
          \'style\' => \'fancy\',
          \'bg_type\' => \'dark\',
          \'bg\' => array(
            \'fid\' => \'628\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'stretch\',
          \'height\' => \'350\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'fancy\',
        ),
        \'node_layout\' => \'second-sidebar\',
        \'header_style\' => array(
          \'header-enabled\' => 1,
          \'transparent_header\' => 1,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'full\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'\',
          \'main_menu_style\' => \'\',
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 0,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'6\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1394807913\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'271\',
        \'source\' => \'node/172\',
        \'alias\' => \'blog/how-big-data-helps\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'107\',
      \'uid\' => \'1\',
      \'title\' => \'Portfolio - Simple frame - fade in left\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'32b766fe-8b61-48b7-aff0-239aa21bc877\',
      \'nid\' => \'107\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1393976149\',
      \'changed\' => \'1393976221\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'7f6d2c46-bf53-41bc-adb9-1e0b8a6330d4\',
      \'revision_timestamp\' => \'1393976221\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row][vc_column width="1/1" first="true" last="true" odd="true"][ac_portfolio id="p-items-531663917a392" appearance="masonry" total="-1" pager="ajax" num_per_page="12" spaced="true" padding="15" cols="3" view="fade-in-left" frame="simple" width="pre" effect="none" sorting="true" filter_style="simple sep" media="true" title="true" date="true" date_format="M j, Y" tags="true" proj_link="true" details_link="true" fullwidth="false" subtitle="false"][/ac_portfolio][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'hero_style\' => array(
          \'enabled\' => 0,
          \'style\' => \'fancy\',
          \'bg_type\' => \'dark\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1393976149\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'51\',
        \'source\' => \'node/107\',
        \'alias\' => \'portfolio/simple-framed/fade-in-left\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'422\',
      \'uid\' => \'1\',
      \'title\' => \'Home v6\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b614cfcf-8481-4f09-a0d5-5508fb0063fb\',
      \'nid\' => \'422\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1399879662\',
      \'changed\' => \'1400319053\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'7ff75001-98bb-4345-b43e-1ed70aeb8420\',
      \'revision_timestamp\' => \'1400319053\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row style="2" bg_color="sw_default" padding="small" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][ac_page_header tag="h2" style="subtitle" align="center" margin="zero"]About our company[/ac_page_header][ac_page_header tag="h3" style="subtitle" align="center" margin="small" class="paint-accent-color"]we are aura![/ac_page_header][/vc_column][/vc_row][vc_row bg_color="sw_default" padding="small" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][vc_row_inner padding="default"][vc_column_inner width="1/3" first="true" odd="true" animate="fadeInUp" when="visible"][ac_page_header tag="h4" block_title="true" align="left" margin="small"]Welcome to our new website[/ac_page_header][ac_img_frame frame="sw_default" fid="370" effect="sw_default" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/screenshot_0.png?itok=g8hghn94"][/ac_img_frame][vc_column_text font="normal"]You’ll love the endless possibilities with Aura. Unlimited portfolios, color options, staff, testimonials, blogs, page layouts. You are only limited by your creativity! Excepteur sint obcaecat cupiditat non.<br> xcepteur sint obcaecat cupiditat non.<br> <br> At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.[/vc_column_text][ac_button style="sw_default" label="See more" link_target="_self" bg_color="sw_default" size="small" type="rounded" full_width="false" block_level="false" icon="right-open-mini"][/ac_button][/vc_column_inner][vc_column_inner width="1/3" even="true" animate="fadeInUp" when="visible"][ac_page_header tag="h4" block_title="true" align="left" margin="small"]Our experience[/ac_page_header][vc_accordion][vc_accordion_tab title="web design" open="false"][vc_column_text font="normal"]Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.&nbsp;[/vc_column_text][/vc_accordion_tab][vc_accordion_tab title="Photography" open="true"][vc_column_text font="normal"]Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.&nbsp;[/vc_column_text][/vc_accordion_tab][vc_accordion_tab title="Marketing" open="false"][vc_column_text font="normal"]Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.&nbsp;[/vc_column_text][/vc_accordion_tab][vc_accordion_tab title="Consulting" open="false"][vc_column_text font="normal"]Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.&nbsp;[/vc_column_text][/vc_accordion_tab][/vc_accordion][/vc_column_inner][vc_column_inner width="1/3" odd="true" last="true"][ac_page_header tag="h4" block_title="true" align="left" margin="small"]Our partners[/ac_page_header][ac_grid columns="2" borders="true" animate="fadeInUp" when="visible"][ac_img_frame frame="none" fid="376" effect="none" gridy="true" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/Swanmini1.png?itok=8CQpaZEn"][/ac_img_frame][ac_img_frame frame="none" fid="375" effect="none" gridy="true" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/Sportmini1.png?itok=xJYO0nq0"][/ac_img_frame][ac_img_frame frame="none" fid="374" effect="none" gridy="true" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/Infinitymini1.png?itok=ESp6E91k"][/ac_img_frame][ac_img_frame frame="none" fid="373" effect="none" gridy="true" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/rkomini1.png?itok=K7HK77r0"][/ac_img_frame][ac_img_frame frame="none" fid="490" effect="none" gridy="true" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/tech.png?itok=juyXJu48"][/ac_img_frame][ac_img_frame frame="none" fid="489" effect="none" gridy="true" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/blue_dragon_logo.png?itok=mGCbZWgP"][/ac_img_frame][/ac_grid][/vc_column_inner][/vc_row_inner][ac_divider type="shadow" size="medium" align="center" width="full"][/ac_divider][vc_row_inner padding="default" animate="fadeInUp" when="visible" delay="350"][vc_column_inner width="1/3" first="true" odd="true"][ac_page_header tag="h4" block_title="true" align="left" margin="default"]Our Vision[/ac_page_header][vc_column_text font="normal"]Our vision is to be the most trusted provider of Drupal themes and technologies that ensure the security and freedom of our developers and their kids. As the Drupal leader, we will define the future of Drupal themes from undersea to outer space, and in cyberspace.Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Ut enim ad minim veniam.[/vc_column_text][/vc_column_inner][vc_column_inner width="1/3" even="true"][ac_page_header tag="h4" block_title="true" align="left" margin="default"]Our goals[/ac_page_header][ac_list style="or" num="1" font="normal"]<br><ul><li>Refresh the world of your world</li><li>Create value and make a difference.</li><li>Inspire moments of optimism and happiness...</li><li>Deliver superior program performance</li><li>Consetetur sadipscing elitr sed diam</li><li>Quis aute iure reprehenderit in</li></ul>[/ac_list][/vc_column_inner][vc_column_inner width="1/3" odd="true" last="true"][ac_page_header tag="h4" block_title="true" align="left" margin="x-small"]Our office[/ac_page_header][layerslider id="60" no_title="true"][/layerslider][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row style="2" bg_color="sw_default" padding="small" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][ac_page_header tag="h2" style="subtitle" align="center" margin="zero"]Our services[/ac_page_header][ac_page_header tag="h3" style="subtitle" align="center" margin="small" class="paint-accent-color"]What We Are Proud Of[/ac_page_header][/vc_column][/vc_row][vc_row bg_color="sw_default" padding="default" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][ac_grid columns="4" animate="ac_appear" when="visible" delay="350"][ac_iconbox type="simple full" size="medium" icon_type="icon" border="square" icon_position="center" title="web hosting" tag="h4" link="themeforest.net/user/_acquiathemes" link_target="_self" icon="network"][vc_column_text]Vestibulum ante ipsum primis in fauc ibus orci luctus et ultrices posuere cubilia Curae; Integer in enim dui. Suspendisse potenti. Sed placerat pellentesque.[/vc_column_text][/ac_iconbox][ac_iconbox type="simple full" size="medium" icon_type="icon" border="square" icon_position="center" title="Website Design" tag="h4" icon="bucket"][vc_column_text]Vestibulum ante ipsum primis in fauc ibus orci luctus et ultrices posuere cubilia Curae; Integer in enim dui. Suspendisse potenti. Sed placerat pellentesque.[/vc_column_text][/ac_iconbox][ac_iconbox type="simple full" size="medium" icon_type="icon" border="square" icon_position="center" title="eCommerce" tag="h4" icon="cart"][vc_column_text]Vestibulum ante ipsum primis in fauc ibus orci luctus et ultrices posuere cubilia Curae; Integer in enim dui. Suspendisse potenti. Sed placerat pellentesque.[/vc_column_text][/ac_iconbox][ac_iconbox type="simple full" size="medium" icon_type="icon" border="square" icon_position="center" title="Database design" tag="h4" link="themeforest.net/user/_acquiathemes" link_target="_self" icon="database"][vc_column_text]Vestibulum ante ipsum primis in fauc ibus orci luctus et ultrices posuere cubilia Curae; Integer in enim dui. Suspendisse potenti. Sed placerat pellentesque.[/vc_column_text][/ac_iconbox][/ac_grid][vc_row_inner padding="default" animate="fadeInUp" when="visible" delay="350"][vc_column_inner width="1/1" first="true" last="true" odd="true"][ac_callout font="normal" text_align="left" background="fancy_bg" bg_color="custom" custom_bg="#d6d6d6" color="sw_default" custom_color="#444444" border="rounded" btn_align="corner" btn="true" btn_style="sw_default" btn_typo="none" btn_label="test it free" btn_link_target="_self" btn_bg_color="red" btn_custom_bg="#444444" btn_custom_font="#ffffff" btn_size="large" btn_type="square" btn_border_color="sw_default" btn_custom_border_color="#d1d1d1" btn_cssanimate="undefined" prefix="btn_" icon="cloud-thunder"]PGgzPlBpY2sgeW91ciBBVVJBIGFuZCBjcmVhdGUgYSB1bmlxdWUgYW5kIHBvd2VyZnVsIHdlYnNpdGUhPC9oMz48cD5Mb2FkZWQgd2l0aCBhd2Vzb21lIGZlYXR1cmVzLCBwcmVtaXVtIHNsaWRlcnMsIHVubGltaXRlZCBjb2xvcnMsIGFkdmFuY2VkIHRoZW1lIG9wdGlvbnMgJmFtcDsgbXVjaCBtb3JlITwvcD4=[/ac_callout][ac_divider type="invisible" size="medium" align="center" height="30"][/ac_divider][/vc_column_inner][/vc_row_inner][ac_grid columns="4" animate="ac_appear" when="visible" delay="350"][ac_iconbox type="simple full" size="medium" icon_type="icon" border="square" icon_position="center" title="Digital Strategy" tag="h4" icon="cloud-thunder"][vc_column_text]Vestibulum ante ipsum primis in fauc ibus orci luctus et ultrices posuere cubilia Curae; Integer in enim dui. Suspendisse potenti. Sed placerat pellentesque.[/vc_column_text][/ac_iconbox][ac_iconbox type="simple full" size="medium" icon_type="icon" border="square" icon_position="center" title="Website Promotion" tag="h4" icon="gauge"][vc_column_text]Vestibulum ante ipsum primis in fauc ibus orci luctus et ultrices posuere cubilia Curae; Integer in enim dui. Suspendisse potenti. Sed placerat pellentesque.[/vc_column_text][/ac_iconbox][ac_iconbox type="simple full" size="medium" icon_type="icon" border="square" icon_position="center" title="Mobile Dev" tag="h4" icon="mobile-1"][vc_column_text]Vestibulum ante ipsum primis in fauc ibus orci luctus et ultrices posuere cubilia Curae; Integer in enim dui. Suspendisse potenti. Sed placerat pellentesque.[/vc_column_text][/ac_iconbox][ac_iconbox type="simple full" size="medium" icon_type="icon" border="square" icon_position="center" title="SEO" tag="h4" icon="search"][vc_column_text]Vestibulum ante ipsum primis in fauc ibus orci luctus et ultrices posuere cubilia Curae; Integer in enim dui. Suspendisse potenti. Sed placerat pellentesque.[/vc_column_text][/ac_iconbox][/ac_grid][/vc_column][/vc_row][vc_row style="2" bg_color="sw_default" padding="small" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][ac_page_header tag="h2" style="subtitle" align="center" margin="zero"]Recent projects[/ac_page_header][ac_page_header tag="h3" style="subtitle" align="center" margin="small" class="paint-accent-color"]We Make art, You Use it.[/ac_page_header][/vc_column][/vc_row][vc_row bg_color="white" bg_opacity="75" padding="default" custom_color="#444444" bg_parallax="true" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][vc_row_inner padding="zero" class="ac-align-center" animate="fadeInUp" when="visible" delay="350"][vc_column_inner width="1/1" first="true" last="true" odd="true"][ac_portfolio id="p-items-534c1395af52f" appearance="masonry" total="12" pager="simple" num_per_page="-1" spaced="true" padding="20" cols="4" view="fade-in-bottom" frame="none" width="equal" style="rectangle-large" effect="none" filter_style="simple centered" fullwidth="true" media="true" title="true" date="true" date_format="M j, Y" tags="true" proj_link="true" details_link="true" sorting="false" excerpt="false"][/ac_portfolio][/vc_column_inner][/vc_row_inner][vc_row_inner padding="zero" class="ac-align-center"][vc_column_inner width="1/1" first="true" last="true" odd="true"][ac_divider type="invisible" size="medium" custom_color="#444444" align="center" height="40"][/ac_divider][ac_button style="sw_default" label="view our portfolio" link_target="_self" bg_color="sw_default" size="large" type="sw_default" animate="fadeInUp" when="visible" delay="350" full_width="false" block_level="false"][/ac_button][ac_button style="sw_default" label="get in touch" link_target="_self" bg_color="sw_default" size="large" type="sw_default" animate="fadeInUp" when="visible" delay="350" full_width="false" block_level="false"][/ac_button][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row style="2" bg_color="sw_default" padding="small" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][ac_page_header tag="h2" style="subtitle" align="center" margin="zero"]Our team[/ac_page_header][ac_page_header tag="h3" style="subtitle" align="center" margin="small" class="paint-accent-color"]small but smart and talented[/ac_page_header][/vc_column][/vc_row][vc_row bg_color="sw_default" padding="zero" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" odd="true" last="true"][vc_row_inner padding="default" animate="bounceIn" when="visible" delay="350"][vc_column_inner width="1/2" first="true" odd="true"][ac_team type="columns" name="Sara Watkins" job="Systems Administrator" fid="467" style="rectangle-v-large" bio="Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nulla nunc dui, tristique in semper vel, congue sed ligula. Nam dolor ligula, faucibus id sodales in." src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/photodune-7469013-sharing-ideas-for-the-comapnys-success-m.jpg?itok=kBxL0qQ_"][ac_font_icon info_title="my facebook profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59393" icon_str="icon-facebook"][/ac_font_icon][ac_font_icon info_title="Google Plust profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59469" icon_str="icon-gplus"][/ac_font_icon][ac_font_icon info_title="twitter profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59394" icon_str="icon-twitter"][/ac_font_icon][ac_font_icon info_title="My home page!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59549" icon_str="icon-home"][/ac_font_icon][/ac_team][/vc_column_inner][vc_column_inner width="1/2" last="true" even="true"][ac_team type="columns" name="Barry Davidson" job="Technical Director" fid="491" style="rectangle-v-large" bio="Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nulla nunc dui, tristique in semper vel, congue sed ligula. Nam dolor ligula, faucibus id sodales in" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/photodune-7469009-satisfied-with-the-achievements-m.jpg?itok=58Q8EsaE" socials="undefined"][ac_font_icon info_title="my facebook profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59393" icon_str="icon-facebook"][/ac_font_icon][ac_font_icon info_title="Google Plust profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59469" icon_str="icon-gplus"][/ac_font_icon][ac_font_icon info_title="twitter profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59394" icon_str="icon-twitter"][/ac_font_icon][ac_font_icon info_title="My home page!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59549" icon_str="icon-home"][/ac_font_icon][/ac_team][/vc_column_inner][/vc_row_inner][vc_row_inner padding="default" animate="bounceIn" when="visible" delay="350"][vc_column_inner width="1/2" first="true" odd="true"][ac_team type="columns" name="Sara Watkins" job="Technical Director" fid="515" style="rectangle-v-large" bio="Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nulla nunc dui, tristique in semper vel, congue sed ligula. Nam dolor ligula, faucibus id sodales in" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/photodune-5653921-happy-business-woman-xs.jpg?itok=HnN2_D22" socials="undefined"][ac_font_icon info="tooltip" info_place="top" info_trigger="hover" link="themeforest.net/user/_acquiathemes" link_target="_blank" icon="twitter" icon_str="icon-null"][/ac_font_icon][ac_font_icon info="tooltip" info_place="top" info_trigger="hover" link="themeforest.net/user/_acquiathemes" link_target="_blank" icon="facebook" icon_str="icon-null"][/ac_font_icon][ac_font_icon info="tooltip" info_place="top" info_trigger="hover" link="themeforest.net/user/_acquiathemes" link_target="_blank" icon="dribbble" icon_str="icon-null"][/ac_font_icon][ac_font_icon info="tooltip" info_place="top" info_trigger="hover" link="themeforest.net/user/_acquiathemes" link_target="_blank" icon="gplus" icon_str="icon-null"][/ac_font_icon][/ac_team][/vc_column_inner][vc_column_inner width="1/2" last="true" even="true"][ac_team type="columns" name="Chelsea Richardson" job="Creative Director" fid="503" style="rectangle-v-large" bio="Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nulla nunc dui, tristique in semper vel, congue sed ligula. Nam dolor ligula, faucibus id sodales in." socials="undefined" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/photodune-7469014-in-the-right-place-with-the-right-people-m.jpg?itok=F7192z2J"][ac_font_icon info="tooltip" info_place="top" info_trigger="hover" link="themeforest.net/user/_acquiathemes" link_target="_blank" icon="twitter" icon-filter="tw"][/ac_font_icon][ac_font_icon info="tooltip" info_place="top" info_trigger="hover" link="themeforest.net/user/_acquiathemes" link_target="_blank" icon="facebook" icon-filter="fa"][/ac_font_icon][ac_font_icon info="tooltip" info_place="top" info_trigger="hover" link="themeforest.net/user/_acquiathemes" link_target="_blank" icon="gplus" icon-filter="g"][/ac_font_icon][ac_font_icon info="tooltip" info_place="top" info_trigger="hover" link="themeforest.net/user/_acquiathemes" link_target="_blank" icon="dropbox"][/ac_font_icon][/ac_team][/vc_column_inner][/vc_row_inner][vc_row_inner padding="zero" class="ac-align-center"][vc_column_inner width="1/1" first="true" last="true" odd="true"][ac_button style="sw_default" label="meet the team" link_target="_self" bg_color="sw_default" size="large" type="sw_default" animate="fadeInUp" when="visible" delay="350" full_width="false" block_level="false"][/ac_button][ac_button style="sw_default" label="Join us" link_target="_self" bg_color="sw_default" size="large" type="sw_default" animate="fadeInUp" when="visible" delay="350" full_width="false" block_level="false"][/ac_button][ac_divider type="invisible" size="medium" custom_color="#444444" align="center" height="40"][/ac_divider][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row style="2" bg_color="sw_default" padding="small" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][ac_page_header tag="h2" style="subtitle" align="center" margin="zero"]News &amp; Events[/ac_page_header][ac_page_header tag="h3" style="subtitle" align="center" margin="small" class="paint-accent-color"]recent entries from our blog[/ac_page_header][/vc_column][/vc_row][vc_row bg_color="sw_default" padding="default" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][ac_blog id="blog-items-536fcdeb48c87" appearance="masonry" total="8" num_per_page="-1" spaced="true" padding="20" cols="4" frame="none" width="equal" effect="none" fullwidth="true" media="true" title="true" author="true" date="true" date_format="M j, Y" excerpt="true" sorting="false" tags="false"][/ac_blog][vc_row_inner padding="zero" class="ac-align-center"][vc_column_inner width="1/1" first="true" last="true" odd="true"][ac_divider type="invisible" size="medium" custom_color="#444444" align="center" height="40"][/ac_divider][ac_button style="sw_default" label="Read more" link_target="_self" bg_color="sw_default" size="large" type="sw_default" animate="fadeInUp" when="visible" full_width="false" block_level="false"][/ac_button][ac_button style="sw_default" label="Subscribe" link_target="_self" bg_color="sw_default" size="large" type="sw_default" animate="fadeInUp" when="visible" delay="350" full_width="false" block_level="false"][/ac_button][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row style="2" bg_color="sw_default" padding="small" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][ac_page_header tag="h2" style="subtitle" align="center" margin="zero"]Say hello[/ac_page_header][ac_page_header tag="h3" style="subtitle" align="center" margin="small" class="paint-accent-color"]get in touch with us[/ac_page_header][/vc_column][/vc_row][vc_row position="left" align="left" animate="fadeInUp" when="visible" delay="350"][vc_column width="1/3" first="true" odd="true"][ac_contact_info style="list" company="acquiathemes design " address="12345 Main Street, New York, NY 02781" phone="1.800.555.6789" skype="acquiathemes"][ac_font_icon info_title="Google plus" info="tooltip" info_place="top" info_trigger="hover" link="http://plus.google.com/acquiathemes" link_target="_blank" icon="59469"][/ac_font_icon][ac_font_icon info_title="Linked in" info="tooltip" info_place="top" info_trigger="hover" link="http://themeforest.net/user/_acquiathemes" link_target="_blank" icon="59477"][/ac_font_icon][ac_font_icon info_title="news feed" info="tooltip" info_place="top" info_trigger="hover" link="http://themeforest.net/user/_acquiathemes" link_target="_blank" icon="59472"][/ac_font_icon][ac_font_icon info_title="Twitter" info="tooltip" info_place="top" info_trigger="hover" link="http://themeforest.net/user/_acquiathemes" link_target="_blank" icon="59394"][/ac_font_icon][ac_font_icon info_title="Vimeo" info="tooltip" info_place="top" info_trigger="hover" link="http://themeforest.net/user/_acquiathemes" link_target="_blank" icon="59422"][/ac_font_icon][ac_font_icon info_title="dribbble" info="tooltip" info_place="top" info_trigger="hover" link="http://themeforest.net/user/_acquiathemes" link_target="_blank" icon="59470"][/ac_font_icon][/ac_contact_info][/vc_column][vc_column width="1/3" even="true"][ac_contact cid="1" style="centered" bg_style="dark" hide_labels="true" minimal="true" type_title="Website feedback"][/ac_contact][/vc_column][vc_column width="1/3" last="true" odd="true"][ac_testimonials style="simple_avatar" appearance="slider" slider_style="pager" cols="1" easing="easeOutCubic" speed="1000" nav="true" avatar_pos="header" where="block"][ac_testimonial fid="117" style="sw_default" name="Richard Doe" position="Director" link="http://example.net" link_target="_self" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_15.jpg?itok=fiUjPs_z"]Aenean vitae metus justo. Duis luctus dui nec condimentum suscipit. Maecenas tempor arcu in ipsum aliquam, vel porttitor odio dictum.[/ac_testimonial][ac_testimonial fid="119" style="sw_default" name="Anna Atkinson" position="Co-founder" link="http://example.net" link_target="_self" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_26.jpg?itok=TuQya-l9"]Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nulla nunc dui, tristique in semper vel, congue sed ligula.&nbsp;[/ac_testimonial][ac_testimonial fid="118" style="sw_default" name="John Jones" position="Client" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_16.jpg?itok=SkhYozzS"]Sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. . At vero eos et accusam et justo duo dolores et ea rebum.[/ac_testimonial][ac_testimonial fid="122" style="sw_default" name="cassidy williams" position="CIO" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_2.jpg?itok=eXxxst3b"]&nbsp;At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.[/ac_testimonial][ac_testimonial fid="121" style="sw_default" name="Patrick H. Lauke" position="Developer" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_20.jpg?itok=OgefrUmF"]&nbsp;At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.[/ac_testimonial][ac_testimonial fid="253" style="sw_default" name="Craig Burns" position="Photographer" link="http://themeforest.net/user/_acquiathemes" link_target="_self" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/blog/misc/photodune-4022102-traveler-s.jpg?itok=x8ZL6wLF"]Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod&nbsp;<strong>tempor</strong>&nbsp;invidunt ut labore et dolore magna aliquyam erat.[/ac_testimonial][/ac_testimonials][/vc_column][/vc_row][vc_row bg_color="sw_default" padding="zero" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][ac_gmap mapid="ac-gmap-KISX1gi5az" lat="40.692356076312414" long="-73.99040603448486" zoom="15" map_width="full" align="center" type="roadmap" bubble="false"][ac_gmap_marker address="brooklyn" lat="40.69277779999999" long="-73.9902778"]45 Main St (btwn Front Water), Brooklyn, NY 11201[/ac_gmap_marker][/ac_gmap][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'header_style\' => array(
          \'header-enabled\' => 1,
          \'transparent_header\' => 1,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'semi\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'left\',
          \'main_menu_style\' => \'mm-simple mm-fade-from-in mm-top-bordered\',
        ),
        \'hero_style\' => array(
          \'enabled\' => 1,
          \'disabled\' => 1,
          \'style\' => \'fancy\',
          \'bg_type\' => \'light\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'fancy\',
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 1,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'57\',
        ),
        \'node_layout\' => \'full-width\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1399879662\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'199\',
        \'source\' => \'node/422\',
        \'alias\' => \'home/v6\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Home v6\',
        \'mlid\' => 0,
        \'plid\' => \'431\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-45\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'427\',
      \'uid\' => \'1\',
      \'title\' => \'home v12\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9a6ab9f7-2ba8-420f-b0d5-ea242b86804e\',
      \'nid\' => \'427\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1400321242\',
      \'changed\' => \'1400830391\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'89983a4d-103f-441a-8c28-855c8e345a49\',
      \'revision_timestamp\' => \'1400830391\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row bg_color="sw_default" padding="large" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][ac_page_header tag="h3" style="special" align="center" margin="small"]We Develop&nbsp;<strong>Great</strong>&nbsp;Brands[/ac_page_header][ac_page_header tag="h4" align="center" margin="large" color="grey"]Based on Drupal 7 and Omega 4[/ac_page_header][vc_row_inner][vc_column_inner width="1/4" first="true" odd="true"][ac_iconbox type="simple" size="x-large" icon_type="icon" border="circled" icon_position="center" tag="h4" color_clone="true" animate="ac_appear" when="visible" icon="trophy"][vc_column_text font="normal"]Good design is no longer a privilege strictly reserved for those who can afford it—it’s a given. [/vc_column_text][ac_button style="flip" typo="hard" label="see more" link_target="_self" bg_color="sw_default" size="medium" type="rounded" position="center" full_width="false" block_level="false"][/ac_button][/ac_iconbox][/vc_column_inner][vc_column_inner width="1/4" even="true"][ac_iconbox type="simple" size="x-large" icon_type="icon" border="circled" icon_position="center" tag="h4" color_clone="true" icon="dropbox"][vc_column_text font="normal"]Good design is no longer a privilege strictly reserved for those who can afford it—it’s a given. [/vc_column_text][ac_button style="flip" typo="hard" label="see more" link_target="_self" bg_color="sw_default" size="medium" type="rounded" position="center" full_width="false" block_level="false"][/ac_button][/ac_iconbox][/vc_column_inner][vc_column_inner width="1/4" odd="true"][ac_iconbox type="simple" size="x-large" icon_type="icon" border="circled" icon_position="center" tag="h4" color_clone="true" icon="rocket"][vc_column_text font="normal"]Good design is no longer a privilege strictly reserved for those who can afford it—it’s a given. [/vc_column_text][ac_button style="flip" typo="hard" label="see more" link_target="_self" bg_color="sw_default" size="medium" type="rounded" position="center" full_width="false" block_level="false"][/ac_button][/ac_iconbox][/vc_column_inner][vc_column_inner width="1/4" last="true" even="true"][ac_iconbox type="simple" size="x-large" icon_type="icon" border="circled" icon_position="center" tag="h4" color_clone="true" icon="mic"][vc_column_text font="normal"]Good design is no longer a privilege strictly reserved for those who can afford it—it’s a given. [/vc_column_text][ac_button style="flip" typo="hard" label="see more" link_target="_self" bg_color="sw_default" size="medium" type="rounded" position="center" full_width="false" block_level="false"][/ac_button][/ac_iconbox][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row bg_color="sw_default" padding="zero" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" odd="true" last="true"][ac_portfolio id="p-items-5377388179889" appearance="grid" gplus_effect="fly" gplus_height="350" total="4" pager="simple" num_per_page="-1" cols="4" view="dark-fade" frame="none" width="equal" style="square-large" effect="none" filter_style="simple centered" fullwidth="true" media="true" title="true" date_format="M j, Y" proj_link="true" details_link="true" sorting="false" spaced="false" date="false" tags="false" excerpt="false"][/ac_portfolio][/vc_column][/vc_row][vc_row bg_color="sw_default" padding="x-large" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/2" first="true" odd="true"][ac_image fid="688" animate="fadeInLeft" when="visible"][/ac_image][/vc_column][vc_column width="1/2" even="true" last="true"][ac_page_header tag="h4" style="special" align="center" margin="small"]We Develop&nbsp;<strong>Great</strong>&nbsp;Brands[/ac_page_header][ac_page_header tag="h4" align="center" margin="default" color="grey"]Based on Drupal 7 and Omega 4[/ac_page_header][vc_column_text font="normal" class="ac-align-center"]Good design is no longer a privilege strictly reserved for those who can afford it—it’s a given.Good design is no longer a privilege strictly reserved for those who can afford it, it’s a given.[/vc_column_text][ac_divider type="invisible" size="medium" align="center" height="30"][/ac_divider][ac_button style="2d-soft" typo="soft" label="try Aura" link_target="_self" bg_color="black" size="large" type="pill" position="center" full_width="false" block_level="false"][/ac_button][/vc_column][/vc_row][vc_row style="2" bg_type="img" image="633" bg_color="sw_default" bg_opacity="70" padding="x-large" custom_color="#444444" bg_parallax="true" no_border="true" no_overlay="true" class="accent-bg-color" bg_position="center center" bg_repeat="stretch" bg_attachment="fixed" bg_cover="true"][vc_column width="1/1" first="true" odd="true" last="true"][ac_page_header tag="h4" style="special" align="center" margin="small"]What&nbsp;<strong>they</strong>&nbsp;say[/ac_page_header][ac_testimonials style="simple" appearance="slider" slider_style="nav" cols="1" font="big" easing="easeOutCubic" speed="1000" nav="true" avatar_pos="footer" where="icon"][ac_testimonial fid="117" style="sw_default" name="Richard Doe" position="Director" link="http://example.net" link_target="_self" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_15.jpg?itok=fiUjPs_z"]Aenean vitae metus justo. Duis luctus dui nec condimentum suscipit. Maecenas tempor arcu in ipsum aliquam, vel porttitor odio dictum. Nullam porttitor eget lorem nec imperdiet. Mauris ultricies purus risus, ac viverra risus vulputate nec.[/ac_testimonial][ac_testimonial fid="122" style="sw_default" name="cassidy williams" position="CIO" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_2.jpg?itok=eXxxst3b"]&nbsp;At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.[/ac_testimonial][ac_testimonial fid="119" style="sw_default" name="Anna Atkinson" position="Co-founder" link="http://example.net" link_target="_self" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_26.jpg?itok=TuQya-l9"]Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nulla nunc dui, tristique in semper vel, congue sed ligula. Nam dolor ligula, faucibus id sodales in, auctor fringill torquent per conubia nostra.[/ac_testimonial][ac_testimonial fid="118" style="sw_default" name="John Jones" position="Client" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_16.jpg?itok=SkhYozzS"]Sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. . At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est&nbsp;[/ac_testimonial][ac_testimonial fid="121" style="sw_default" name="Patrick H. Lauke" position="Developer" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_20.jpg?itok=OgefrUmF"]&nbsp;At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.[/ac_testimonial][/ac_testimonials][/vc_column][/vc_row][vc_row bg_color="sw_default" padding="x-large" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/2" first="true" odd="true"][ac_page_header tag="h4" style="special" align="center" margin="small"]We Develop&nbsp;<strong>Great</strong>&nbsp;Brands[/ac_page_header][ac_page_header tag="h4" align="center" margin="default" color="grey"]Based on Drupal 7 and Omega 4[/ac_page_header][vc_column_text font="normal" class="ac-align-center"]Good design is no longer a privilege strictly reserved for those who can afford it—it’s a given.Good design is no longer a privilege strictly reserved for those who can afford it, it’s a given.[/vc_column_text][ac_divider type="invisible" size="medium" align="center" height="30"][/ac_divider][ac_button style="2d-soft" typo="soft" label="try Aura" link_target="_self" bg_color="black" size="large" type="pill" position="center" full_width="false" block_level="false"][/ac_button][/vc_column][vc_column width="1/2" even="true" last="true"][ac_image fid="689" animate="fadeInRight" when="visible" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/aura-home12-maxc.png?itok=vLyExUu5"][/ac_image][/vc_column][/vc_row][vc_row bg_color="custom" custom_bg="#f7f7f7" padding="x-large" custom_color="#444444" no_border="true" no_overlay="true" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" odd="true" last="true"][ac_page_header tag="h3" style="special" align="center" margin="small"]We Develop&nbsp;<strong>Great</strong>&nbsp;Brands[/ac_page_header][ac_page_header tag="h4" align="center" margin="large" color="grey"]Based on Drupal 7 and Omega 4[/ac_page_header][vc_row_inner padding="zero" animate="fadeInUp" when="visible" delay="350"][vc_column_inner width="1/3" first="true" odd="true"][ac_image fid="631" style="rectangle-hr-large" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/tumblr_n4efdyyCNB1st5lhmo1_1280.jpg?itok=BtpiN1d6"][/ac_image][ac_divider type="invisible" size="medium" align="center" height="40"][/ac_divider][ac_page_header tag="h6" style="special" align="center" margin="small"]Drag &amp; drop builder[/ac_page_header][vc_column_text font="normal" class="ac-align-center"]Good design is no longer a privilege strictly reserved for those who can afford it—it’s a given.Good design is no longer a privilege strictly reserved for those who can afford it, it’s a given.[/vc_column_text][/vc_column_inner][vc_column_inner width="1/3" even="true"][ac_image fid="630" style="rectangle-hr-large" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/tumblr_mve3hgy0pJ1st5lhmo1_1280.jpg?itok=7xivXGhA"][/ac_image][ac_divider type="invisible" size="medium" align="center" height="40"][/ac_divider][ac_page_header tag="h6" style="special" align="center" margin="small"]API based development[/ac_page_header][vc_column_text font="normal" class="ac-align-center"]Good design is no longer a privilege strictly reserved for those who can afford it—it’s a given.Good design is no longer a privilege strictly reserved for those who can afford it, it’s a given.[/vc_column_text][/vc_column_inner][vc_column_inner width="1/3" last="true" odd="true"][ac_image fid="632" style="rectangle-hr-large" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/tumblr_mpp6w0dxAm1st5lhmo1_1280.jpg?itok=F2WCcj6r"][/ac_image][ac_divider type="invisible" size="medium" align="center" height="40"][/ac_divider][ac_page_header tag="h6" style="special" align="center" margin="small"]custom shortcodes[/ac_page_header][vc_column_text font="normal" class="ac-align-center"]Good design is no longer a privilege strictly reserved for those who can afford it—it’s a given.Good design is no longer a privilege strictly reserved for those who can afford it, it’s a given.[/vc_column_text][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row bg_color="sw_default" padding="large" custom_color="#444444" class="paint-accent-bg" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][ac_grid columns="4" animate="fadeInUp" when="visible" delay="350"][ac_counter title="Industry Accolades" value="3500" style="simple" bg_style="light" color="white" gridy="true"][/ac_counter][ac_counter title="Successful Projects" value="15000" style="simple" bg_style="light" color="white" gridy="true"][/ac_counter][ac_counter title="Hours of Development" value="10000" style="simple" bg_style="light" color="white" gridy="true"][/ac_counter][ac_counter title="Happy clients" value="1200" style="simple" bg_style="light" color="white" gridy="true"][/ac_counter][/ac_grid][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'header_style\' => array(
          \'header-enabled\' => 1,
          \'transparent_header\' => 1,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'full\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'\',
          \'main_menu_style\' => \'mm-simple mm-fade-from-in mm-top-bordered\',
        ),
        \'hero_style\' => array(
          \'enabled\' => 1,
          \'disabled\' => 1,
          \'style\' => \'fancy\',
          \'bg_type\' => \'light\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'fancy\',
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 1,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'68\',
        ),
        \'node_layout\' => \'full-width-no-topbar-footer\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1400321242\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'204\',
        \'source\' => \'node/427\',
        \'alias\' => \'home/v12\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'home v12\',
        \'mlid\' => 0,
        \'plid\' => \'431\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-39\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'423\',
      \'uid\' => \'1\',
      \'title\' => \'Home V11\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'481883e2-2877-458b-814a-b9e0c83fa5a3\',
      \'nid\' => \'423\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1400080855\',
      \'changed\' => \'1400235885\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'8a543a8b-80d8-4240-a116-9d52af53e257\',
      \'revision_timestamp\' => \'1400235885\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "[vc_row bg_color=\\"sw_default\\" padding=\\"large\\" color=\\"black\\" borders=\\"false\\" bg_parallax=\\"false\\" bg_cover=\\"false\\"][vc_column width=\\"1/1\\" first=\\"true\\" last=\\"true\\" odd=\\"true\\"][ac_grid columns=\\"4\\" animate=\\"fadeInUp\\" when=\\"visible\\" delay=\\"350\\"][ac_img_frame frame=\\"rounded_borders\\" fid=\\"601\\" effect=\\"none\\" style=\\"square-medium\\" gridy=\\"true\\" lightbox=\\"true\\" lightbox_style=\\"sw_default\\" video=\\"0\\" align=\\"left\\" caption_align=\\"center\\" animate=\\"fadeInUp\\" when=\\"visible\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/photodune-1900941-vintage-cupcakes-xs.jpg?itok=q4DMSVwC\\"][ac_page_header tag=\\"h4\\" style=\\"strong\\" align=\\"center\\" margin=\\"small\\"]Cup Cakes[/ac_page_header][ac_button style=\\"subtle\\" label=\\"more info\\" link=\\"themeforest.net/user/_acquiathemes\\" link_target=\\"_self\\" size=\\"medium\\" type=\\"pill\\" position=\\"center\\" full_width=\\"false\\" block_level=\\"false\\"][/ac_button][/ac_img_frame][ac_img_frame frame=\\"rounded_borders\\" fid=\\"602\\" effect=\\"none\\" style=\\"square-medium\\" gridy=\\"true\\" lightbox=\\"true\\" lightbox_style=\\"sw_default\\" video=\\"0\\" align=\\"left\\" caption_align=\\"center\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/photodune-2766252-wedding-cupcakes-xs.jpg?itok=fUmPx17c\\"][ac_page_header tag=\\"h4\\" style=\\"strong\\" align=\\"center\\" margin=\\"small\\"]Wedding Cakes[/ac_page_header][ac_button style=\\"subtle\\" label=\\"more info\\" link=\\"themeforest.net/user/_acquiathemes\\" link_target=\\"_self\\" size=\\"medium\\" type=\\"pill\\" position=\\"center\\" full_width=\\"false\\" block_level=\\"false\\"][/ac_button][/ac_img_frame][ac_img_frame frame=\\"rounded_borders\\" fid=\\"604\\" effect=\\"none\\" style=\\"square-medium\\" gridy=\\"true\\" lightbox=\\"true\\" lightbox_style=\\"sw_default\\" video=\\"0\\" align=\\"left\\" caption_align=\\"center\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/photodune-2602560-biscuits-xs.jpg?itok=sVjmme9v\\"][ac_page_header tag=\\"h4\\" style=\\"strong\\" align=\\"center\\" margin=\\"small\\"]Biscuits &amp; Favours[/ac_page_header][ac_button style=\\"subtle\\" label=\\"more info\\" link=\\"themeforest.net/user/_acquiathemes\\" link_target=\\"_self\\" size=\\"medium\\" type=\\"pill\\" position=\\"center\\" full_width=\\"false\\" block_level=\\"false\\"][/ac_button][/ac_img_frame][ac_img_frame frame=\\"rounded_borders\\" fid=\\"603\\" effect=\\"none\\" style=\\"square-medium\\" gridy=\\"true\\" lightbox=\\"true\\" lightbox_style=\\"sw_default\\" video=\\"0\\" align=\\"left\\" caption_align=\\"center\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/photodune-5789763-cake-xs.jpg?itok=CmjyVwDK\\"][ac_page_header tag=\\"h4\\" style=\\"strong\\" align=\\"center\\" margin=\\"small\\"]Celebration Cakes[/ac_page_header][ac_button style=\\"subtle\\" label=\\"more info\\" link=\\"themeforest.net/user/_acquiathemes\\" link_target=\\"_self\\" size=\\"medium\\" type=\\"pill\\" position=\\"center\\" full_width=\\"false\\" block_level=\\"false\\"][/ac_button][/ac_img_frame][/ac_grid][/vc_column][/vc_row][vc_row bg_type=\\"img\\" image=\\"595\\" bg_color=\\"sw_default\\" padding=\\"default\\" custom_color=\\"#444444\\" bg_parallax=\\"true\\" no_border=\\"true\\" no_overlay=\\"true\\" bg_position=\\"center center\\" bg_repeat=\\"stretch\\" bg_attachment=\\"fixed\\" bg_cover=\\"false\\"][vc_column width=\\"1/2\\" first=\\"true\\" odd=\\"true\\"][/vc_column][vc_column width=\\"1/4\\" even=\\"true\\"][ac_counter title=\\"Wedding Cakes\\" value=\\"765\\" style=\\"bordered\\" bg_style=\\"light\\" border_color=\\"white\\" color=\\"custom\\" custom_color=\\"#18D536\\"][/ac_counter][ac_divider type=\\"invisible\\" size=\\"medium\\" align=\\"center\\" height=\\"30\\"][/ac_divider][ac_counter title=\\"Christenings\\" value=\\"471\\" style=\\"bordered\\" bg_style=\\"light\\" border_color=\\"white\\" color=\\"black\\"][/ac_counter][/vc_column][vc_column width=\\"1/4\\" last=\\"true\\" odd=\\"true\\"][ac_counter title=\\"Cupcakes\\" value=\\"10000\\" style=\\"bordered\\" bg_style=\\"light\\" border_color=\\"white\\" color=\\"black\\"][/ac_counter][ac_divider type=\\"invisible\\" size=\\"medium\\" align=\\"center\\" height=\\"30\\"][/ac_divider][ac_counter title=\\"Biscuits &amp; Favours\\" value=\\"627\\" style=\\"bordered\\" bg_style=\\"light\\" border_color=\\"white\\" color=\\"black\\"][/ac_counter][/vc_column][/vc_row][vc_row bg_color=\\"sw_default\\" padding=\\"large\\" custom_color=\\"#444444\\" borders=\\"false\\" bg_parallax=\\"false\\" bg_cover=\\"false\\"][vc_column width=\\"1/4\\" first=\\"true\\" odd=\\"true\\"][ac_page_header tag=\\"h3\\" align=\\"left\\" margin=\\"small\\"]who are we?[/ac_page_header][vc_column_text font=\\"normal\\"]Stet clita kasd gubergren, no sea [ac_tooltip link=\\"#example\\" title=\\"Hello, I\'m a tooltip!\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" info_content=\\"Place a little extra content in here for informational purposes.\\"]takimata [/ac_tooltip]sanctus est Lorem ipsum dolor sit amet. Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros et accumsan et iusto odio dignissim qui blandit praesent luptatum zzril delenit augue duis dolore te feugait nulla facilisi.[/vc_column_text][ac_contact_info style=\\"compact\\" address=\\"12 Main Street, NY 02781\\" phone=\\"1.800.555.6789\\" email=\\"info@acquiathemes.com\\"][/ac_contact_info][/vc_column][vc_column width=\\"3/4\\" last=\\"true\\" even=\\"true\\"][vc_row_inner padding=\\"zero\\" animate=\\"fadeInRight\\" when=\\"visible\\" delay=\\"350\\"][vc_column_inner width=\\"1/3\\" first=\\"true\\" odd=\\"true\\"][ac_team type=\\"simple compact\\" name=\\"Phillip Gross\\" job=\\"chef\\" fid=\\"597\\" style=\\"rectangle-v-large\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/photodune-2761544-smiling-young-chef-posing-with-crossed-arms-xs%20%281%29.jpg?itok=vfdx3Tol\\"][ac_font_icon info_title=\\"my facebook profile!\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://example.com\\" link_target=\\"_blank\\" icon=\\"59393\\" icon_str=\\"icon-facebook\\"][/ac_font_icon][ac_font_icon info_title=\\"Google Plust profile!\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://example.com\\" link_target=\\"_blank\\" icon=\\"59469\\" icon_str=\\"icon-gplus\\"][/ac_font_icon][ac_font_icon info_title=\\"twitter profile!\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://example.com\\" link_target=\\"_blank\\" icon=\\"59394\\" icon_str=\\"icon-twitter\\"][/ac_font_icon][/ac_team][/vc_column_inner][vc_column_inner width=\\"1/3\\" even=\\"true\\"][ac_team type=\\"simple compact\\" name=\\"Gail Mendez\\" job=\\"Chef de Partie\\" fid=\\"598\\" style=\\"rectangle-v-large\\" socials=\\"undefined\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/photodune-1684500-female-chef-xs.jpg?itok=hBr89LEJ\\"][ac_font_icon info_title=\\"my facebook profile!\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://example.com\\" link_target=\\"_blank\\" icon=\\"59393\\"][/ac_font_icon][ac_font_icon info_title=\\"Google Plust profile!\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://example.com\\" link_target=\\"_blank\\" icon=\\"59469\\"][/ac_font_icon][ac_font_icon info_title=\\"twitter profile!\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://example.com\\" link_target=\\"_blank\\" icon=\\"59394\\"][/ac_font_icon][/ac_team][/vc_column_inner][vc_column_inner width=\\"1/3\\" odd=\\"true\\" last=\\"true\\"][ac_team type=\\"simple compact\\" name=\\"Jackie Beck\\" job=\\"Sous Chef\\" fid=\\"599\\" style=\\"rectangle-v-large\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/photodune-4308569-chef-xs.JPG?itok=5K2bvZ9S\\"][ac_font_icon info_title=\\"my facebook profile!\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://example.com\\" link_target=\\"_blank\\" icon=\\"59393\\" icon_str=\\"icon-facebook\\"][/ac_font_icon][ac_font_icon info_title=\\"Google Plust profile!\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://example.com\\" link_target=\\"_blank\\" icon=\\"59469\\" icon_str=\\"icon-gplus\\"][/ac_font_icon][ac_font_icon info_title=\\"my LinkedIn profile!\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://example.com\\" link_target=\\"_blank\\" icon=\\"59487\\" icon_str=\\"icon-dropbox\\"][/ac_font_icon][/ac_team][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row style=\\"1\\" bg_color=\\"sw_default\\" padding=\\"large\\" custom_color=\\"#444444\\" borders=\\"false\\" bg_parallax=\\"false\\" bg_cover=\\"false\\"][vc_column width=\\"1/2\\" first=\\"true\\" odd=\\"true\\"][ac_page_header tag=\\"h3\\" align=\\"center\\" margin=\\"default\\"]Our scrummy products[/ac_page_header][ac_carousel easing=\\"linear\\" speed=\\"350\\" nav=\\"true\\" cols=\\"2\\" spaced=\\"true\\" padding=\\"20\\" auto=\\"false\\"][ac_banner fid=\\"532\\" style=\\"square-large\\"][ac_banner_item][ac_iconbox type=\\"simple\\" icon_type=\\"icon\\" border=\\"rounded\\" icon_position=\\"center\\" color=\\"white\\" title=\\"useful shortcodes\\" tag=\\"h4\\" icon=\\"59601\\" font=\\"fontello\\"][/ac_iconbox][/ac_banner_item][ac_banner_item second=\\"true\\"][vc_column_text font=\\"normal\\" color=\\"white\\"]Ut wisi enim ad minim[/vc_column_text][ac_button label=\\"Digg more\\" link_target=\\"_self\\" bg_color=\\"white\\" size=\\"large\\" type=\\"rounded\\" style=\\"subtle\\" border_color=\\"sw_default\\" position=\\"center\\" use_icon=\\"false\\" full_width=\\"false\\" block_level=\\"false\\"][/ac_button][/ac_banner_item][/ac_banner][ac_banner fid=\\"596\\" style=\\"square-large\\"][ac_banner_item][ac_iconbox type=\\"simple\\" icon_type=\\"icon\\" border=\\"rounded\\" icon_position=\\"center\\" color=\\"white\\" title=\\"seo optimised\\" tag=\\"h4\\" icon=\\"59430\\" font=\\"fontello\\"][/ac_iconbox][/ac_banner_item][ac_banner_item second=\\"true\\"][vc_column_text font=\\"normal\\" color=\\"white\\"]Stet clita kasd gubergren no[/vc_column_text][ac_button label=\\"Digg more\\" link_target=\\"_self\\" bg_color=\\"white\\" size=\\"large\\" type=\\"rounded\\" style=\\"subtle\\" border_color=\\"sw_default\\" position=\\"center\\" use_icon=\\"false\\" full_width=\\"false\\" block_level=\\"false\\"][/ac_button][/ac_banner_item][/ac_banner][ac_banner fid=\\"530\\" style=\\"square-large\\"][ac_banner_item custom_color=\\"#ffffff\\"][ac_iconbox type=\\"simple\\" icon_type=\\"icon\\" border=\\"rounded\\" icon_position=\\"center\\" color=\\"white\\" title=\\"regular updates\\" tag=\\"h4\\" icon=\\"59454\\" font=\\"fontello\\"][/ac_iconbox][/ac_banner_item][ac_banner_item second=\\"true\\"][vc_column_text font=\\"normal\\" color=\\"white\\"]Duis autem vel eum iriure[/vc_column_text][ac_button label=\\"Digg more\\" link_target=\\"_self\\" bg_color=\\"white\\" size=\\"large\\" type=\\"rounded\\" style=\\"subtle\\" border_color=\\"sw_default\\" position=\\"center\\" use_icon=\\"false\\" full_width=\\"false\\" block_level=\\"false\\"][/ac_button][/ac_banner_item][/ac_banner][ac_banner fid=\\"531\\" style=\\"square-large\\"][ac_banner_item custom_color=\\"#ffffff\\"][ac_iconbox type=\\"simple\\" icon_type=\\"icon\\" border=\\"rounded\\" icon_position=\\"center\\" color=\\"white\\" title=\\"retina ready\\" tag=\\"h4\\" icon=\\"59415\\" font=\\"fontello\\"][/ac_iconbox][/ac_banner_item][ac_banner_item second=\\"true\\"][vc_column_text font=\\"normal\\" color=\\"white\\"]We help you collect and organise your data[/vc_column_text][ac_button label=\\"Digg more\\" link_target=\\"_self\\" bg_color=\\"white\\" size=\\"large\\" type=\\"rounded\\" style=\\"subtle\\" border_color=\\"sw_default\\" position=\\"center\\" use_icon=\\"false\\" full_width=\\"false\\" block_level=\\"false\\"][/ac_button][/ac_banner_item][/ac_banner][/ac_carousel][/vc_column][vc_column width=\\"1/2\\" last=\\"true\\" even=\\"true\\"][ac_page_header tag=\\"h3\\" align=\\"center\\" margin=\\"default\\"]Contact us[/ac_page_header][ac_contact cid=\\"1\\" style=\\"simple\\" bg_style=\\"light\\" type_title=\\"Website feedback\\"][/ac_contact][/vc_column][/vc_row][vc_row bg_color=\\"sw_default\\" padding=\\"large\\" custom_color=\\"#444444\\" borders=\\"false\\" bg_parallax=\\"false\\" bg_cover=\\"false\\"][vc_column width=\\"1/1\\" first=\\"true\\" last=\\"true\\" odd=\\"true\\"][ac_page_header tag=\\"h3\\" align=\\"center\\" margin=\\"default\\"]our services[/ac_page_header][vc_row_inner padding=\\"small\\" animate=\\"fadeInLeft\\" when=\\"visible\\" delay=\\"350\\"][vc_column_inner width=\\"1/3\\" first=\\"true\\" odd=\\"true\\"][ac_iconbox type=\\"simple\\" icon_type=\\"icon\\" border=\\"circled\\" icon_position=\\"left\\" title=\\"Integrated Visual Composer \\" tag=\\"h4\\" link=\\"themeforest.net/user/_acquiathemes\\" link_target=\\"_self\\" icon=\\"59837\\" font=\\"fontello\\"][vc_column_text]Vestibulum ante ipsum primis in fauc ibus orci luctus et ultrices posuere cubilia Curae; Integer in enim dui. Suspendisse potenti. Sed placerat pellentesque.[/vc_column_text][/ac_iconbox][/vc_column_inner][vc_column_inner width=\\"1/3\\" even=\\"true\\"][ac_iconbox type=\\"simple\\" icon_type=\\"icon\\" border=\\"circled\\" icon_position=\\"left\\" title=\\"Demo Content ready\\" tag=\\"h4\\" icon=\\"59884\\" font=\\"fontello\\"][vc_column_text]Vestibulum ante ipsum primis in fauc ibus orci luctus et ultrices posuere cubilia Curae; Integer in enim dui. Suspendisse potenti. Sed placerat pellentesque.[/vc_column_text][/ac_iconbox][/vc_column_inner][vc_column_inner width=\\"1/3\\" odd=\\"true\\" last=\\"true\\"][ac_iconbox type=\\"simple\\" icon_type=\\"icon\\" border=\\"circled\\" icon_position=\\"left\\" title=\\"Lifetime Support\\" tag=\\"h4\\" icon=\\"59896\\" font=\\"fontello\\"][vc_column_text]Vestibulum ante ipsum primis in fauc ibus orci luctus et ultrices posuere cubilia Curae; Integer in enim dui. Suspendisse potenti. Sed placerat pellentesque.[/vc_column_text][/ac_iconbox][/vc_column_inner][/vc_row_inner][vc_row_inner padding=\\"small\\" animate=\\"fadeInRight\\" when=\\"visible\\" delay=\\"350\\"][vc_column_inner width=\\"1/3\\" first=\\"true\\" odd=\\"true\\"][ac_iconbox type=\\"simple\\" icon_type=\\"icon\\" border=\\"circled\\" icon_position=\\"left\\" title=\\"Designed To Work nice\\" tag=\\"h4\\" link=\\"themeforest.net/user/_acquiathemes\\" link_target=\\"_self\\" icon=\\"59907\\" font=\\"fontello\\"][vc_column_text]Vestibulum ante ipsum primis in fauc ibus orci luctus et ultrices posuere cubilia Curae; Integer in enim dui. Suspendisse potenti. Sed placerat pellentesque.[/vc_column_text][/ac_iconbox][/vc_column_inner][vc_column_inner width=\\"1/3\\" even=\\"true\\"][ac_iconbox type=\\"simple\\" icon_type=\\"icon\\" border=\\"circled\\" icon_position=\\"left\\" title=\\"Simplicity In Design\\" tag=\\"h4\\" icon=\\"59599\\" font=\\"fontello\\"][vc_column_text]Vestibulum ante ipsum primis in fauc ibus orci luctus et ultrices posuere cubilia Curae; Integer in enim dui. Suspendisse potenti. Sed placerat pellentesque.[/vc_column_text][/ac_iconbox][/vc_column_inner][vc_column_inner width=\\"1/3\\" odd=\\"true\\" last=\\"true\\"][ac_iconbox type=\\"simple\\" icon_type=\\"icon\\" border=\\"circled\\" icon_position=\\"left\\" title=\\"All New Features\\" tag=\\"h4\\" icon=\\"59865\\" font=\\"fontello\\"][vc_column_text]Vestibulum ante ipsum primis in fauc ibus orci luctus et ultrices posuere cubilia Curae; Integer in enim dui. Suspendisse potenti. Sed placerat pellentesque.[/vc_column_text][/ac_iconbox][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row]",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'header_style\' => array(
          \'header-enabled\' => 0,
          \'transparent_header\' => 0,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'full\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'\',
          \'main_menu_style\' => \'\',
        ),
        \'hero_style\' => array(
          \'enabled\' => 1,
          \'disabled\' => 1,
          \'style\' => \'fancy\',
          \'bg_type\' => \'light\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'fancy\',
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 1,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'44\',
        ),
        \'node_layout\' => \'full-width\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1400080855\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'201\',
        \'source\' => \'node/423\',
        \'alias\' => \'home/v11\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Home V11\',
        \'mlid\' => 0,
        \'plid\' => \'431\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-40\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'327\',
      \'uid\' => \'1\',
      \'title\' => \'blog - no media\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'66fb23c2-b925-4edb-b099-0da47c724457\',
      \'nid\' => \'327\',
      \'type\' => \'blog\',
      \'language\' => \'und\',
      \'created\' => \'1375341015\',
      \'changed\' => \'1395819520\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'96b980ee-88c3-4e86-8099-d709fc53f632\',
      \'revision_timestamp\' => \'1395819520\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<div>Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. Consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. At vero eos et accusam et justo duo dolores et ea rebum. Lorem ipsum dolor sit amet, consectetur adipisici elit, sed eiusmod tempor incidunt ut labore et dolore magna aliqua.</div><div>&nbsp;</div><div>Lorem ipsum dolor sit amet. Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat. Consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.</div>\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'field_blog_tags\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'114\',
          ),
        ),
      ),
      \'field_blog_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'98\',
          ),
          array(
            \'tid\' => \'99\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Post\',
          \'sioct:BlogPost\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'thumb\' => array(
          \'type\' => \'\',
          \'media\' => array(),
        ),
        \'media\' => array(
          \'add_thumbs\' => \'Add another Image\',
        ),
        \'misc\' => array(
          \'excerpt\' => array(
            \'value\' => \'\',
            \'format\' => \'full_html\',
          ),
          \'custom_frame\' => 0,
          \'frame\' => \'\',
          \'about_author\' => 1,
        ),
        \'hero_style\' => array(
          \'enabled\' => 0,
          \'style\' => \'fancy\',
          \'bg_type\' => \'dark\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
        ),
        \'node_layout\' => \'second-sidebar\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1395818415\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'293\',
        \'source\' => \'node/327\',
        \'alias\' => \'blog/blog-no-media\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'379\',
      \'uid\' => \'1\',
      \'title\' => \'Home V1\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'6c1b2c16-3543-4412-bb40-677b8c2d92af\',
      \'nid\' => \'379\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1398383755\',
      \'changed\' => \'1401285794\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'9d598242-46cb-48a5-9bb6-266029da2581\',
      \'revision_timestamp\' => \'1401285794\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "[vc_row bg_type=\\"img\\" image=\\"628\\" bg_color=\\"sw_default\\" padding=\\"xxx-large\\" custom_color=\\"#444444\\" no_border=\\"true\\" bg_position=\\"center center\\" bg_repeat=\\"stretch\\" bg_attachment=\\"fixed\\" bg_cover=\\"true\\"][vc_column width=\\"1/1\\" first=\\"true\\" odd=\\"true\\" last=\\"true\\"][vc_row_inner padding=\\"zero\\" class=\\"ac-align-center\\" animate=\\"fadeInUp\\" when=\\"visible\\" delay=\\"350\\"][vc_column_inner width=\\"1/1\\" first=\\"true\\" last=\\"true\\" odd=\\"true\\"][ac_page_header tag=\\"h2\\" align=\\"center\\" margin=\\"default\\" color=\\"white\\"]We\'ll help you manage your business, how?[/ac_page_header][ac_button style=\\"sw_default\\" label=\\"Read more\\" link_target=\\"_self\\" bg_color=\\"sw_default\\" size=\\"large\\" type=\\"sw_default\\" animate=\\"fadeInRight\\" when=\\"visible\\" delay=\\"350\\" full_width=\\"false\\" block_level=\\"false\\"][/ac_button][ac_button style=\\"sw_default\\" label=\\"get started\\" link_target=\\"_self\\" bg_color=\\"black\\" size=\\"large\\" type=\\"sw_default\\" animate=\\"fadeInLeft\\" when=\\"visible\\" delay=\\"350\\" full_width=\\"false\\" block_level=\\"false\\"][/ac_button][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row bg_color=\\"sw_default\\" padding=\\"default\\" custom_color=\\"#444444\\" borders=\\"false\\" bg_parallax=\\"false\\" bg_cover=\\"false\\"][vc_column width=\\"1/1\\" first=\\"true\\" odd=\\"true\\" last=\\"true\\"][vc_row_inner][vc_column_inner width=\\"1/1\\" first=\\"true\\" odd=\\"true\\" last=\\"true\\"][ac_page_header tag=\\"h3\\" block_title=\\"true\\" align=\\"center\\" margin=\\"small\\"]About our design company[/ac_page_header][vc_column_text font=\\"big\\" class=\\"ac-align-center\\"]The Design Company <strong>champions</strong> great design and flexibility! For us, that means<br> design that improves lives and makes things better.[/vc_column_text][ac_divider type=\\"invisible\\" size=\\"medium\\" custom_color=\\"#444444\\" align=\\"center\\" height=\\"40\\"][/ac_divider][/vc_column_inner][/vc_row_inner][vc_row_inner][vc_column_inner width=\\"1/2\\" first=\\"true\\" odd=\\"true\\" animate=\\"fadeInLeft\\" when=\\"visible\\"][ac_iconbox type=\\"simple full\\" size=\\"medium\\" icon_type=\\"icon\\" border=\\"sw_default\\" icon_position=\\"right\\" color=\\"black\\" title=\\"UI design\\" tag=\\"h4\\" icon=\\"59506\\"][vc_column_text font=\\"normal\\"]Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore.[/vc_column_text][/ac_iconbox][/vc_column_inner][vc_column_inner width=\\"1/2\\" last=\\"true\\" even=\\"true\\" animate=\\"fadeInRight\\" when=\\"visible\\"][ac_iconbox type=\\"simple full\\" size=\\"medium\\" icon_type=\\"icon\\" border=\\"sw_default\\" icon_position=\\"left\\" title=\\"App development\\" tag=\\"h4\\" icon=\\"59854\\"][vc_column_text font=\\"normal\\"]Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore.[/vc_column_text][/ac_iconbox][/vc_column_inner][/vc_row_inner][ac_grid columns=\\"3\\"][ac_img_frame frame=\\"none\\" fid=\\"470\\" effect=\\"none\\" gridy=\\"true\\" lightbox_style=\\"sw_default\\" video=\\"0\\" align=\\"center\\" caption_align=\\"left\\" lightbox=\\"false\\" animate=\\"fadeInRight\\" when=\\"visible\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/2d-dark-rounded.jpg?itok=vma2az2t\\"][/ac_img_frame][ac_img_frame frame=\\"none\\" fid=\\"471\\" effect=\\"none\\" gridy=\\"true\\" lightbox_style=\\"sw_default\\" video=\\"0\\" align=\\"center\\" caption_align=\\"left\\" lightbox=\\"false\\" animate=\\"fadeInDown\\" when=\\"visible\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/subtle-rounded.jpg?itok=VDtWxsHR\\"][/ac_img_frame][ac_img_frame frame=\\"none\\" fid=\\"472\\" effect=\\"none\\" gridy=\\"true\\" lightbox_style=\\"sw_default\\" video=\\"0\\" align=\\"center\\" caption_align=\\"left\\" lightbox=\\"false\\" animate=\\"fadeInLeft\\" when=\\"visible\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/3d-theme-pill.jpg?itok=TbZd3uZ_\\"][/ac_img_frame][/ac_grid][/vc_column][/vc_row][vc_row style=\\"2\\" bg_color=\\"sw_default\\" padding=\\"default\\" custom_color=\\"#444444\\" no_border=\\"true\\" bg_parallax=\\"false\\" bg_cover=\\"false\\"][vc_column width=\\"1/1\\" first=\\"true\\" odd=\\"true\\" last=\\"true\\"][ac_page_header tag=\\"h3\\" align=\\"center\\" margin=\\"zero\\"]Happiness (in AURA) is just a click away.[/ac_page_header][/vc_column][/vc_row][vc_row style=\\"2\\" bg_type=\\"img\\" image=\\"485\\" bg_color=\\"sw_default\\" padding=\\"x-large\\" custom_color=\\"#444444\\" bg_parallax=\\"true\\" no_border=\\"true\\" bg_position=\\"center center\\" bg_repeat=\\"stretch\\" bg_attachment=\\"scroll\\" bg_cover=\\"false\\"][vc_column width=\\"1/1\\" first=\\"true\\" odd=\\"true\\" last=\\"true\\"][ac_quote type=\\"blockquote\\" font=\\"big\\" background=\\"simple\\" class=\\"ac-color-white ac-align-center\\"]<br><h2>Design is not just what it looks like and feels like.<br> Design is how it works.</h2><br><h6>Steve jobs - co founder, chairman, and CEO of Acquiathemes Inc.</h6><br> [/ac_quote][/vc_column][/vc_row][vc_row style=\\"1\\" bg_color=\\"sw_default\\" padding=\\"default\\" custom_color=\\"#444444\\" bg_parallax=\\"false\\" bg_cover=\\"false\\"][vc_column width=\\"1/1\\" first=\\"true\\" odd=\\"true\\" last=\\"true\\"][vc_row_inner][vc_column_inner width=\\"1/1\\" first=\\"true\\" odd=\\"true\\" last=\\"true\\"][ac_page_header tag=\\"h3\\" block_title=\\"true\\" align=\\"center\\" margin=\\"small\\"]Our services[/ac_page_header][vc_column_text font=\\"big\\" class=\\"ac-align-center\\"]Bringing innovation to deign requires big passion, great research, brilliant<br> <strong>communication</strong> and flawless execution. We know that. We do that.<br> We move ideas from head to hand.[/vc_column_text][ac_divider type=\\"invisible\\" size=\\"medium\\" custom_color=\\"#444444\\" align=\\"center\\" height=\\"40\\"][/ac_divider][/vc_column_inner][/vc_row_inner][vc_row_inner][vc_column_inner width=\\"1/2\\" first=\\"true\\" odd=\\"true\\"][ac_divider type=\\"invisible\\" size=\\"medium\\" align=\\"center\\" height=\\"30\\"][/ac_divider][ac_img_frame frame=\\"none\\" fid=\\"516\\" effect=\\"none\\" lightbox_style=\\"sw_default\\" video=\\"0\\" align=\\"left\\" caption_align=\\"left\\" lightbox=\\"false\\" animate=\\"fadeInUp\\" when=\\"visible\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/aura-responsive-01.png?itok=tarajgom\\"][/ac_img_frame][/vc_column_inner][vc_column_inner width=\\"1/2\\" last=\\"true\\" even=\\"true\\"][ac_grid columns=\\"1\\" animate=\\"fadeInUp\\" when=\\"visible\\" delay=\\"500\\"][ac_iconbox type=\\"simple full\\" size=\\"medium\\" icon_type=\\"icon\\" border=\\"sw_default\\" icon_position=\\"left\\" color=\\"black\\" title=\\"responsive design\\" tag=\\"h4\\" icon=\\"59403\\"][vc_column_text font=\\"normal\\"]AURA looks great on any screen size or device.[/vc_column_text][/ac_iconbox][ac_iconbox type=\\"simple full\\" size=\\"medium\\" icon_type=\\"icon\\" border=\\"sw_default\\" icon_position=\\"left\\" title=\\"tons of gallery\\" tag=\\"h4\\" icon=\\"59531\\"][vc_column_text font=\\"normal\\"]different styled portfolio with filter function.[/vc_column_text][/ac_iconbox][ac_iconbox type=\\"simple full\\" size=\\"medium\\" icon_type=\\"icon\\" border=\\"sw_default\\" icon_position=\\"left\\" color=\\"black\\" title=\\"seo optimized\\" tag=\\"h4\\" icon=\\"59519\\"][vc_column_text font=\\"normal\\"]Get a higher page rank on search engines.[/vc_column_text][/ac_iconbox][ac_iconbox type=\\"simple full\\" size=\\"medium\\" icon_type=\\"icon\\" border=\\"sw_default\\" icon_position=\\"left\\" title=\\"lifetime premium support for free\\" tag=\\"h4\\" icon=\\"59576\\"][vc_column_text font=\\"normal\\"]With your purchase you get premium lifetime support for free.[/vc_column_text][/ac_iconbox][/ac_grid][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row bg_color=\\"sw_default\\" padding=\\"default\\" no_bottom_space=\\"true\\" custom_color=\\"#444444\\" bg_parallax=\\"false\\" bg_cover=\\"false\\"][vc_column width=\\"1/1\\" first=\\"true\\" last=\\"true\\" odd=\\"true\\"][vc_row_inner][vc_column_inner width=\\"1/1\\" first=\\"true\\" odd=\\"true\\" last=\\"true\\"][ac_page_header tag=\\"h3\\" block_title=\\"true\\" align=\\"center\\" margin=\\"small\\"]Our works[/ac_page_header][vc_column_text font=\\"big\\" class=\\"ac-align-center\\"]rethink, reimagine, reset, this is our daily <strong>job</strong>[/vc_column_text][ac_divider type=\\"invisible\\" size=\\"medium\\" custom_color=\\"#444444\\" align=\\"center\\" height=\\"40\\"][/ac_divider][/vc_column_inner][/vc_row_inner][ac_portfolio id=\\"p-items-5359a60fa186a\\" appearance=\\"grid\\" total=\\"10\\" pager=\\"simple\\" num_per_page=\\"-1\\" cols=\\"5\\" view=\\"overlaid-center\\" frame=\\"none\\" width=\\"equal\\" style=\\"square-large\\" effect=\\"zoom\\" filter_style=\\"simple centered\\" fullwidth=\\"true\\" media=\\"true\\" title=\\"true\\" date_format=\\"M j, Y\\" proj_link=\\"true\\" details_link=\\"true\\" class=\\"ac-sticky-footer\\" sorting=\\"false\\" spaced=\\"false\\" date=\\"false\\" tags=\\"false\\" excerpt=\\"false\\"][/ac_portfolio][/vc_column][/vc_row][vc_row style=\\"2\\" bg_color=\\"sw_default\\" padding=\\"default\\" custom_color=\\"#444444\\" no_border=\\"true\\" class=\\"clients-logo\\" bg_parallax=\\"false\\" bg_cover=\\"false\\"][vc_column width=\\"1/1\\" first=\\"true\\" odd=\\"true\\" last=\\"true\\"][ac_grid columns=\\"5\\"][ac_img_frame frame=\\"none\\" fid=\\"376\\" effect=\\"none\\" gridy=\\"true\\" lightbox_style=\\"sw_default\\" video=\\"0\\" align=\\"left\\" caption_align=\\"left\\" lightbox=\\"false\\" animate=\\"ac_appear\\" when=\\"visible\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/Swanmini1.png?itok=8CQpaZEn\\"][/ac_img_frame][ac_img_frame frame=\\"none\\" fid=\\"374\\" effect=\\"none\\" gridy=\\"true\\" lightbox_style=\\"sw_default\\" video=\\"0\\" align=\\"left\\" caption_align=\\"left\\" lightbox=\\"false\\" animate=\\"ac_appear\\" when=\\"visible\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/Infinitymini1.png?itok=ESp6E91k\\"][/ac_img_frame][ac_img_frame frame=\\"none\\" fid=\\"373\\" effect=\\"none\\" gridy=\\"true\\" lightbox_style=\\"sw_default\\" video=\\"0\\" align=\\"left\\" caption_align=\\"left\\" lightbox=\\"false\\" animate=\\"ac_appear\\" when=\\"visible\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/rkomini1.png?itok=K7HK77r0\\"][/ac_img_frame][ac_img_frame frame=\\"none\\" fid=\\"378\\" effect=\\"none\\" gridy=\\"true\\" lightbox_style=\\"sw_default\\" video=\\"0\\" align=\\"left\\" caption_align=\\"left\\" lightbox=\\"false\\" animate=\\"ac_appear\\" when=\\"visible\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/stongwavesmini1.png?itok=EI3ngLKN\\"][/ac_img_frame][ac_img_frame frame=\\"none\\" fid=\\"375\\" effect=\\"none\\" gridy=\\"true\\" lightbox_style=\\"sw_default\\" video=\\"0\\" align=\\"left\\" caption_align=\\"left\\" lightbox=\\"false\\" animate=\\"ac_appear\\" when=\\"visible\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/Sportmini1.png?itok=xJYO0nq0\\"][/ac_img_frame][/ac_grid][/vc_column][/vc_row][vc_row][vc_column width=\\"1/1\\" first=\\"true\\" last=\\"true\\" odd=\\"true\\"][vc_row_inner][vc_column_inner width=\\"1/1\\" first=\\"true\\" odd=\\"true\\" last=\\"true\\"][ac_page_header tag=\\"h3\\" block_title=\\"true\\" align=\\"center\\" margin=\\"small\\"]they say[/ac_page_header][/vc_column_inner][/vc_row_inner][vc_row_inner][vc_column_inner class=\\"clients-logo\\" width=\\"1/6\\" first=\\"true\\" odd=\\"true\\"][/vc_column_inner][vc_column_inner width=\\"2/3\\" even=\\"true\\"][ac_testimonials style=\\"simple\\" appearance=\\"slider\\" slider_style=\\"nav\\" cols=\\"1\\" font=\\"big\\" easing=\\"easeOutCubic\\" speed=\\"1000\\" nav=\\"true\\" avatar_pos=\\"footer\\" where=\\"icon\\"][ac_testimonial fid=\\"117\\" style=\\"sw_default\\" name=\\"Richard Doe\\" position=\\"Director\\" link=\\"http://example.net\\" link_target=\\"_self\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_15.jpg?itok=fiUjPs_z\\"]Aenean vitae metus justo. Duis luctus dui nec condimentum suscipit. Maecenas tempor arcu in ipsum aliquam, vel porttitor odio dictum. Nullam porttitor eget lorem nec imperdiet. Mauris ultricies purus risus, ac viverra risus vulputate nec.[/ac_testimonial][ac_testimonial fid=\\"122\\" style=\\"sw_default\\" name=\\"cassidy williams\\" position=\\"CIO\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_2.jpg?itok=eXxxst3b\\"]&nbsp;At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.[/ac_testimonial][ac_testimonial fid=\\"119\\" style=\\"sw_default\\" name=\\"Anna Atkinson\\" position=\\"Co-founder\\" link=\\"http://example.net\\" link_target=\\"_self\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_26.jpg?itok=TuQya-l9\\"]Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nulla nunc dui, tristique in semper vel, congue sed ligula. Nam dolor ligula, faucibus id sodales in, auctor fringill torquent per conubia nostra.[/ac_testimonial][ac_testimonial fid=\\"118\\" style=\\"sw_default\\" name=\\"John Jones\\" position=\\"Client\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_16.jpg?itok=SkhYozzS\\"]Sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. . At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est&nbsp;[/ac_testimonial][ac_testimonial fid=\\"121\\" style=\\"sw_default\\" name=\\"Patrick H. Lauke\\" position=\\"Developer\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_20.jpg?itok=OgefrUmF\\"]&nbsp;At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.[/ac_testimonial][/ac_testimonials][/vc_column_inner][vc_column_inner width=\\"1/6\\" last=\\"true\\" odd=\\"true\\"][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row style=\\"2\\" bg_color=\\"sw_default\\" padding=\\"default\\" custom_color=\\"#444444\\" bg_parallax=\\"false\\" bg_cover=\\"false\\"][vc_column width=\\"1/1\\" first=\\"true\\" last=\\"true\\" odd=\\"true\\"][vc_row_inner][vc_column_inner width=\\"1/1\\" first=\\"true\\" odd=\\"true\\" last=\\"true\\"][ac_page_header tag=\\"h3\\" block_title=\\"true\\" align=\\"center\\" margin=\\"x-small\\"]Our awsome team[/ac_page_header][vc_column_text font=\\"big\\" class=\\"ac-align-center\\"]We Love Technology.[/vc_column_text][ac_divider type=\\"invisible\\" size=\\"medium\\" custom_color=\\"#444444\\" align=\\"center\\" height=\\"40\\"][/ac_divider][/vc_column_inner][/vc_row_inner][ac_grid columns=\\"4\\" animate=\\"fadeInUp\\" when=\\"visible\\" delay=\\"350\\"][ac_team type=\\"simple animated\\" name=\\"Warren Johnston\\" job=\\"Manager\\" fid=\\"481\\" style=\\"rectangle-v-large\\" gridy=\\"true\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/photodune-4618196-handsome-man-xs.jpg?itok=RkGZMTeG\\"][ac_font_icon info_title=\\"Google Plust profile!\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://example.com\\" link_target=\\"_blank\\" icon=\\"59469\\" icon_str=\\"icon-gplus\\"][/ac_font_icon][ac_font_icon info_title=\\"twitter profile!\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://example.com\\" link_target=\\"_blank\\" icon=\\"59394\\" icon_str=\\"icon-twitter\\"][/ac_font_icon][ac_font_icon info_title=\\"My home page!\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://example.com\\" link_target=\\"_blank\\" icon=\\"59549\\" icon_str=\\"icon-home\\"][/ac_font_icon][/ac_team][ac_team type=\\"simple animated\\" name=\\"Caroline Ellis\\" job=\\"Designer\\" fid=\\"482\\" style=\\"rectangle-v-large\\" gridy=\\"true\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/photodune-7435992-nice-girl-xs.jpg?itok=F9A8oUCX\\"][ac_font_icon info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"themeforest.net/user/_acquiathemes\\" link_target=\\"_blank\\" icon=\\"59470\\" icon_str=\\"icon-dribbble\\"][/ac_font_icon][ac_font_icon info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"themeforest.net/user/_acquiathemes\\" link_target=\\"_blank\\" icon=\\"59422\\" icon_str=\\"icon-vimeo\\"][/ac_font_icon][ac_font_icon info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"themeforest.net/user/_acquiathemes\\" link_target=\\"_blank\\" icon=\\"59471\\" icon_str=\\"icon-youtube\\"][/ac_font_icon][/ac_team][ac_team type=\\"simple animated\\" name=\\"Andres Holmes\\" job=\\"Lead designer\\" fid=\\"478\\" style=\\"rectangle-v-large\\" gridy=\\"true\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/photodune-6671086-handsome-guy-xs.jpg?itok=10HfViVN\\"][ac_font_icon info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"themeforest.net/user/_acquiathemes\\" link_target=\\"_blank\\" icon=\\"59393\\" icon_str=\\"icon-facebook\\"][/ac_font_icon][ac_font_icon info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"themeforest.net/user/_acquiathemes\\" link_target=\\"_blank\\" icon=\\"59394\\" icon_str=\\"icon-twitter\\"][/ac_font_icon][ac_font_icon info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"themeforest.net/user/_acquiathemes\\" link_target=\\"_blank\\" icon=\\"59469\\" icon_str=\\"icon-gplus\\"][/ac_font_icon][/ac_team][ac_team type=\\"simple animated\\" name=\\"Ben Bryan\\" job=\\"CEO\\" fid=\\"479\\" style=\\"rectangle-v-large\\" gridy=\\"true\\" src=\\"http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/photodune-6668994-handsome-guy-xs.jpg?itok=OP2nFF3j\\"][ac_font_icon info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"themeforest.net/user/_acquiathemes\\" link_target=\\"_blank\\" icon=\\"59477\\" icon_str=\\"icon-linkedin\\"][/ac_font_icon][ac_font_icon info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"themeforest.net/user/_acquiathemes\\" link_target=\\"_blank\\" icon=\\"59481\\" icon_str=\\"icon-skype\\"][/ac_font_icon][ac_font_icon info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"themeforest.net/user/_acquiathemes\\" link_target=\\"_blank\\" icon=\\"59488\\" icon_str=\\"icon-drupal\\"][/ac_font_icon][/ac_team][/ac_grid][/vc_column][/vc_row][vc_row bg_color=\\"sw_default\\" padding=\\"default\\" custom_color=\\"#444444\\" bg_parallax=\\"false\\" bg_cover=\\"false\\"][vc_column width=\\"1/1\\" first=\\"true\\" last=\\"true\\" odd=\\"true\\"][vc_row_inner][vc_column_inner width=\\"1/1\\" first=\\"true\\" odd=\\"true\\" last=\\"true\\"][ac_page_header tag=\\"h3\\" block_title=\\"true\\" align=\\"center\\" margin=\\"small\\"]We Are the Best![/ac_page_header][vc_column_text font=\\"big\\" class=\\"ac-align-center\\"]Work is going to fill a large part of your life, and the only way to be truly satisfied is<br> to do what you believe is great work, and the only <strong>way to do great work is to love<br> what you do</strong>.[/vc_column_text][ac_divider type=\\"invisible\\" size=\\"medium\\" custom_color=\\"#444444\\" align=\\"center\\" height=\\"40\\"][/ac_divider][/vc_column_inner][/vc_row_inner][vc_row_inner][vc_column_inner width=\\"1/2\\" first=\\"true\\" odd=\\"true\\"][ac_progressbar style=\\"compact\\" bg_style=\\"sw_default\\" no_striped=\\"true\\"][ac_progressbar_item title=\\"Web design\\" progress=\\"77\\"][/ac_progressbar_item][ac_progressbar_item title=\\"Drupal development\\" progress=\\"87\\"][/ac_progressbar_item][ac_progressbar_item title=\\"Python\\" progress=\\"95\\"][/ac_progressbar_item][/ac_progressbar][/vc_column_inner][vc_column_inner width=\\"1/2\\" last=\\"true\\" even=\\"true\\"][ac_progressbar style=\\"compact\\" bg_style=\\"sw_default\\" no_striped=\\"true\\"][ac_progressbar_item title=\\"elasticSearch\\" progress=\\"82\\"][/ac_progressbar_item][ac_progressbar_item title=\\"Ecommerce integration\\" progress=\\"91\\" style=\\"compact\\"][/ac_progressbar_item][ac_progressbar_item title=\\"Unit testing\\" progress=\\"99\\"][/ac_progressbar_item][/ac_progressbar][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row style=\\"1\\" bg_color=\\"sw_default\\" padding=\\"default\\" custom_color=\\"#444444\\" bg_parallax=\\"false\\" bg_cover=\\"false\\"][vc_column width=\\"1/1\\" first=\\"true\\" last=\\"true\\" odd=\\"true\\"][ac_page_header tag=\\"h3\\" block_title=\\"true\\" align=\\"center\\" margin=\\"small\\"]Get your own AURA[/ac_page_header][vc_column_text font=\\"big\\" class=\\"ac-align-center\\"]the only way to taste the power of drupal and fabulous taste of wordpress is<br> with AURA. It\'s possible! <strong>Just try it and you will see!</strong>[/vc_column_text][ac_divider type=\\"invisible\\" size=\\"medium\\" custom_color=\\"#444444\\" align=\\"center\\" height=\\"40\\"][/ac_divider][ac_font_icon type=\\"simple\\" size=\\"xxx-large\\" position=\\"center\\" icon=\\"59487\\" icon_str=\\"icon-dropbox\\"][/ac_font_icon][ac_button style=\\"sw_default\\" label=\\"Buy Aura\\" link_target=\\"_self\\" bg_color=\\"sw_default\\" size=\\"large\\" type=\\"sw_default\\" position=\\"center\\" full_width=\\"false\\" block_level=\\"false\\"][/ac_button][/vc_column][/vc_row][vc_row bg_color=\\"sw_default\\" padding=\\"default\\" custom_color=\\"#444444\\" bg_parallax=\\"true\\" no_border=\\"true\\" bg_cover=\\"false\\"][vc_column width=\\"1/1\\" first=\\"true\\" odd=\\"true\\" last=\\"true\\"][ac_page_header tag=\\"h3\\" block_title=\\"true\\" align=\\"center\\" margin=\\"small\\"]How to reach our Rome Headquarter office?[/ac_page_header][ac_divider type=\\"invisible\\" size=\\"medium\\" custom_color=\\"#444444\\" align=\\"center\\" height=\\"40\\"][/ac_divider][vc_column_text font=\\"big\\" class=\\"ac-align-center\\"]We do one thing, and we do it well. Interested in working together? Fill out<br> the Project Inquiry form below with some information about your project.[/vc_column_text][vc_row_inner padding=\\"zero\\" animate=\\"fadeInUp\\" when=\\"visible\\" delay=\\"350\\"][vc_column_inner width=\\"1/2\\" first=\\"true\\" odd=\\"true\\"][ac_frame][ac_page_header tag=\\"h4\\" align=\\"left\\" margin=\\"small\\"]Rome Office[/ac_page_header][ac_contact_info style=\\"list\\" company=\\"acquiathemes design \\" address=\\"12345 Main Street, New York, NY 02781\\" phone=\\"1.800.555.6789\\" fax=\\"1.800.555.6788\\" email=\\"info@acquiathemes.com\\"][ac_font_icon info_title=\\"Google plus\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://plus.google.com/acquiathemes\\" link_target=\\"_blank\\" icon=\\"59469\\"][/ac_font_icon][ac_font_icon info_title=\\"Linked in\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://themeforest.net/user/_acquiathemes\\" link_target=\\"_blank\\" icon=\\"59477\\"][/ac_font_icon][ac_font_icon info_title=\\"news feed\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://themeforest.net/user/_acquiathemes\\" link_target=\\"_blank\\" icon=\\"59472\\"][/ac_font_icon][ac_font_icon info_title=\\"Twitter\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://themeforest.net/user/_acquiathemes\\" link_target=\\"_blank\\" icon=\\"59394\\"][/ac_font_icon][ac_font_icon info_title=\\"Vimeo\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://themeforest.net/user/_acquiathemes\\" link_target=\\"_blank\\" icon=\\"59422\\"][/ac_font_icon][ac_font_icon info_title=\\"dribbble\\" info=\\"tooltip\\" info_place=\\"top\\" info_trigger=\\"hover\\" link=\\"http://themeforest.net/user/_acquiathemes\\" link_target=\\"_blank\\" icon=\\"59470\\"][/ac_font_icon][/ac_contact_info][/ac_frame][/vc_column_inner][vc_column_inner width=\\"1/2\\" last=\\"true\\" even=\\"true\\"][ac_frame][ac_page_header tag=\\"h4\\" align=\\"left\\" margin=\\"small\\"]Drop us a line[/ac_page_header][ac_contact cid=\\"1\\" style=\\"centered\\" bg_style=\\"dark\\" type_title=\\"Website feedback\\"][/ac_contact][/ac_frame][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row]",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'header_style\' => array(
          \'header-enabled\' => 1,
          \'transparent_header\' => 1,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'full\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'\',
          \'main_menu_style\' => \'\',
        ),
        \'hero_style\' => array(
          \'enabled\' => 1,
          \'disabled\' => 1,
          \'style\' => \'fancy\',
          \'bg_type\' => \'light\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'fancy\',
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 0,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'6\',
        ),
        \'node_layout\' => \'full-width-no-footer\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1398383755\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'164\',
        \'source\' => \'node/379\',
        \'alias\' => \'home/v1\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Home V1\',
        \'mlid\' => 0,
        \'plid\' => \'431\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-50\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'186\',
      \'uid\' => \'1\',
      \'title\' => \'Blog - Grid - 4 Columns\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'07c58656-f928-42ce-9a75-086d85de5d5f\',
      \'nid\' => \'186\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1395049980\',
      \'changed\' => \'1395049980\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'9d62eb4c-c4ea-4fdc-85f3-371fed9e5860\',
      \'revision_timestamp\' => \'1395049980\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row][vc_column width="1/1" first="true" last="true" odd="true"][ac_blog id="blog-items-5325e11fa2255" appearance="grid" total="-1" num_per_page="12" spaced="true" padding="20" cols="4" frame="none" width="equal" style="rectangle-large" effect="none" media="true" title="true" date="true" date_format="M j, Y" sorting="false" fullwidth="false" tags="false" excerpt="false"][/ac_blog][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'hero_style\' => array(
          \'enabled\' => 0,
          \'style\' => \'fancy\',
          \'bg_type\' => \'dark\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
        ),
        \'node_layout\' => \'no-sidebars\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1395049980\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'116\',
        \'source\' => \'node/186\',
        \'alias\' => \'blog/grid/4-columns\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Four columns\',
        \'mlid\' => 0,
        \'plid\' => \'2147\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-48\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'95\',
      \'uid\' => \'1\',
      \'title\' => \'Buffalo world\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d64179cf-02b5-4634-ae23-55c1bf93a9aa\',
      \'nid\' => \'95\',
      \'type\' => \'portfolio\',
      \'language\' => \'und\',
      \'created\' => \'1390724429\',
      \'changed\' => \'1401868063\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'a8270505-fb31-4dde-bf98-eff2b5f23b8d\',
      \'revision_timestamp\' => \'1401868063\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row bg_color="sw_default" padding="zero" custom_color="#444444" borders="false" bg_parallax="false" bg_cover="false"][vc_column class="ac-no-margin" width="1/1" first="true" last="true" odd="true"][ac_page_header tag="h4" margin="x-small" align="left" sub="false"]About this project[/ac_page_header][vc_column_text font="normal"]Ut feugiat accumsan massa ut luctus. Ut mollis ac felis et varius. Integer dolor est, porttitor vel augue sit amet, molestie lobortis mi. Praesent risus nibh, convallis et pretium eget, consequat nec justo. Sed sagittis neque lorem, vitae lobortis purus luctus nec. Ut tempor sem a velit dapibus, sit amet consectetur urna auctor. In hac habitasse platea dictumst.[/vc_column_text][vc_column_text font="normal" class="ac-no-margin meta"]<strong>Client:<br></strong>Awesome Studio Inc.&nbsp;[ac_divider type="line" align="center" &nbsp;width="full"][/ac_divider]<strong>Task:&nbsp;<br></strong>Website and Identity redesign.[ac_divider type="line" align="center" width="full"][/ac_divider]<strong>Skills:&nbsp;<br></strong>Photoshop, HTML, CSS, Javascript.[ac_divider type="line" align="center" width="full"][/ac_divider][/vc_column_text][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'field_portfolio_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'68\',
          ),
          array(
            \'tid\' => \'66\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'thumb\' => array(
          \'type\' => \'image\',
          \'media\' => array(
            array(
              \'fid\' => \'563\',
            ),
          ),
          \'link_type\' => \'item\',
          \'link_image\' => array(
            \'fid\' => \'0\',
          ),
          \'link_video\' => array(
            \'fid\' => \'0\',
          ),
          \'link_url\' => \'\',
        ),
        \'media\' => array(
          \'add_thumbs\' => \'Add another Image\',
        ),
        \'preview\' => array(
          \'use_thumb\' => 1,
          \'type\' => \'\',
          \'media\' => array(),
          \'add_prev_item\' => \'Add another preview\',
        ),
        \'misc\' => array(
          \'excerpt\' => array(
            \'value\' => \'Sanctus sea sed takimata ut vero voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Lorem ipsum dolor sit amet, consectetur adipisici elit, sed eiusmod tempor .\',
            \'format\' => \'full_html\',
          ),
          \'link\' => \'http://themeforest.net/user/_acquiathemes\',
          \'link_title\' => \'\',
          \'layout\' => \'left\',
          \'custom_frame\' => 0,
          \'frame\' => \'\',
          \'view\' => \'list\',
          \'display\' => \'standard\',
          \'columns\' => \'1\',
          \'spaced\' => 0,
          \'meta\' => 0,
          \'social\' => 1,
        ),
        \'hero_style\' => array(
          \'enabled\' => 0,
          \'disabled\' => 0,
          \'style\' => \'fancy\',
          \'bg_type\' => \'dark\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'fancy\',
        ),
        \'node_layout\' => \'no-sidebars\',
        \'header_slider\' => array(
          \'hs-enabled\' => 0,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'6\',
        ),
        \'header_style\' => array(
          \'header-enabled\' => 0,
          \'transparent_header\' => 0,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'full\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'\',
          \'main_menu_style\' => \'\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392369656\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'254\',
        \'source\' => \'node/95\',
        \'alias\' => \'portfolio/buffalo-world\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'146\',
      \'uid\' => \'1\',
      \'title\' => \'Portfolio Masonry - sidebar enabled\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9a65f22a-01c7-43ea-a4c7-f06b473b64fd\',
      \'nid\' => \'146\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1394057934\',
      \'changed\' => \'1394103281\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'b5baf7e0-de06-4a98-8a9d-64d16930a424\',
      \'revision_timestamp\' => \'1394103281\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row][vc_column width="1/1" first="true" last="true" odd="true"][ac_portfolio id="p-items-5317a30795de2" appearance="masonry" total="-1" pager="simple" num_per_page="12" spaced="true" padding="5" cols="3" view="simple-sep" frame="rounded_borders" width="pre" effect="none" sorting="true" filter_style="simple sep" media="true" title="true" date="true" date_format="M j, Y" tags="true" fullwidth="false" proj_link="false" details_link="false" subtitle="false"][/ac_portfolio][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'hero_style\' => array(
          \'enabled\' => 0,
          \'style\' => \'fancy\',
          \'bg_type\' => \'dark\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1394057934\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'89\',
        \'source\' => \'node/146\',
        \'alias\' => \'portfolio/masonry/sidebar-enbled\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'sidebar enabled\',
        \'mlid\' => 0,
        \'plid\' => \'2096\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-48\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'101\',
      \'uid\' => \'1\',
      \'title\' => \'portfolio - masonry\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f5afc6ab-f670-437f-899e-8823e1b2c218\',
      \'nid\' => \'101\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1393252181\',
      \'changed\' => \'1393757657\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'b5f0dfcd-dba3-4c3b-b1e7-d97002e70e36\',
      \'revision_timestamp\' => \'1393757657\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row][vc_column width="1/1" first="true" last="true" odd="true"][ac_portfolio appearance="masonry" nums="-1" visible="20" padding="10" cols="4" view="simple-sep" frame="bottomshadow" width="equal" style="square-large" effect="blur" sorting="true" filter_style="fancy sep" spaced="true" media="true" title="true" date_format="M j, Y" tags="true" details_link="true" fullwidth="false" date="false" proj_link="false" subtitle="false"][/ac_portfolio][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'hero_style\' => array(
          \'enabled\' => 0,
          \'style\' => \'fancy\',
          \'bg_type\' => \'dark\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1393252181\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'46\',
        \'source\' => \'node/101\',
        \'alias\' => \'portfolio/masonry\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'144\',
      \'uid\' => \'1\',
      \'title\' => \'Portfolio Masonry AJAX Loader\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'fe37bfe6-39bc-4c67-92e7-fa1175c850fc\',
      \'nid\' => \'144\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1394057610\',
      \'changed\' => \'1398434189\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'bb76273e-5b6b-4546-b767-884ded2d4f3b\',
      \'revision_timestamp\' => \'1398434189\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row][vc_column width="1/1" first="true" last="true" odd="true"][ac_portfolio id="p-items-5317a476282fc" appearance="masonry" total="-1" pager="ajax" num_per_page="12" cols="3" view="fade-in-bottom" frame="none" width="pre" effect="none" sorting="true" filter_style="simple sep" media="true" title="true" date="true" date_format="M j, Y" tags="true" fullwidth="false" spaced="false" proj_link="false" details_link="false" excerpt="false"][/ac_portfolio][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'hero_style\' => array(
          \'enabled\' => 0,
          \'disabled\' => 0,
          \'style\' => \'fancy\',
          \'bg_type\' => \'dark\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'fancy\',
        ),
        \'node_layout\' => \'no-sidebars\',
        \'header_style\' => array(
          \'header-enabled\' => 0,
          \'transparent_header\' => 0,
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 0,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'6\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1394057610\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'87\',
        \'source\' => \'node/144\',
        \'alias\' => \'portfolio/masonry/ajax-loader\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'AJAX Loader\',
        \'mlid\' => 0,
        \'plid\' => \'2096\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-50\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'148\',
      \'uid\' => \'1\',
      \'title\' => \'Portfolio grid with pager\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'11a46abf-36a0-492c-9f05-1d0b5460a111\',
      \'nid\' => \'148\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1394059356\',
      \'changed\' => \'1394870660\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c0334364-a70d-4976-b35d-83b2d9af9e47\',
      \'revision_timestamp\' => \'1394870660\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row][vc_column width="1/1" first="true" last="true" odd="true"][ac_portfolio id="p-items-5317ad0dd35b8" appearance="masonry" total="-1" pager="simple" num_per_page="12" cols="4" view="fade-in-bottom" frame="none" width="equal" style="portfolio-recent" effect="none" filter_style="simple sep" media="true" title="true" date="true" date_format="M j, Y" tags="true" sorting="false" fullwidth="false" spaced="false" proj_link="false" details_link="false" subtitle="false"][/ac_portfolio][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'hero_style\' => array(
          \'enabled\' => 0,
          \'style\' => \'fancy\',
          \'bg_type\' => \'dark\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
        ),
        \'node_layout\' => \'no-sidebars\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1394059356\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'91\',
        \'source\' => \'node/148\',
        \'alias\' => \'portfolio/grid/with-pager\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'with pager\',
        \'mlid\' => 0,
        \'plid\' => \'2101\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-48\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'163\',
      \'uid\' => \'43\',
      \'title\' => \'EMR Built on Twitter\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ad755c95-8f18-4b65-9a93-1201a0c3a34b\',
      \'nid\' => \'163\',
      \'type\' => \'blog\',
      \'language\' => \'und\',
      \'created\' => \'1380997433\',
      \'changed\' => \'1401144174\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c38e52e1-c507-4e5f-b10b-4557a512ef70\',
      \'revision_timestamp\' => \'1401144174\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row][vc_column width="1/1" first="true" last="true" odd="true"][vc_column_text font="normal"]<p>Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consectetur adipisici elit, sed eiusmod tempor incidunt ut labore et dolore magna aliqua. Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros et accumsan et iusto odio dignissim qui blandit praesent luptatum zzril delenit augue duis dolore te feugait nulla facilisi.</p><p>Lorem ipsum dolor sit amet. Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros et accumsan et iusto odio dignissim qui blandit praesent luptatum zzril delenit augue duis dolore te feugait nulla facilisi.</p>[/vc_column_text][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'field_blog_tags\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'88\',
          ),
        ),
      ),
      \'field_blog_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'84\',
          ),
          array(
            \'tid\' => \'83\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Post\',
          \'sioct:BlogPost\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'thumb\' => array(
          \'type\' => \'image\',
          \'media\' => array(
            array(
              \'fid\' => \'577\',
            ),
          ),
        ),
        \'media\' => array(
          \'add_thumbs\' => \'Add another Image\',
        ),
        \'misc\' => array(
          \'excerpt\' => array(
            \'value\' => \'Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu.\',
            \'format\' => \'full_html\',
          ),
          \'custom_frame\' => 0,
          \'frame\' => \'\',
          \'about_author\' => 1,
        ),
        \'hero_style\' => array(
          \'enabled\' => 1,
          \'disabled\' => 0,
          \'style\' => \'fancy\',
          \'bg_type\' => \'dark\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 1,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'simple\',
        ),
        \'node_layout\' => \'second-sidebar\',
        \'header_style\' => array(
          \'header-enabled\' => 0,
          \'transparent_header\' => 0,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'full\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'\',
          \'main_menu_style\' => \'\',
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 0,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'6\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1394634754\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'pearl\',
      \'picture\' => \'301\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'path\' => array(
        \'pid\' => \'266\',
        \'source\' => \'node/163\',
        \'alias\' => \'blog/emr-built-twitter\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'374\',
      \'uid\' => \'1\',
      \'title\' => \'home\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'fa26cb83-f77d-450f-b24d-04aa1a29f9d0\',
      \'nid\' => \'374\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1398082237\',
      \'changed\' => \'1398086287\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c7672973-5a37-426c-ab9e-c22e4289f9cd\',
      \'revision_timestamp\' => \'1398086287\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row bg_color="sw_default" padding="large" custom_color="#444444" borders="false" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" odd="true" last="true"][vc_row_inner padding="zero" animate="fadeInUp" when="visible" delay="350"][vc_column_inner width="1/3" first="true" odd="true"][ac_iconbox type="simple" icon_type="icon" border="rounded" icon_position="left" title="Fluid, responsive &amp; retina" tag="h4" icon="59722" font="fontello"][vc_column_text font="normal"]Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros.[/vc_column_text][ac_button style="2d" label="View details" link_target="_self" bg_color="sw_default" size="small" type="rounded" full_width="false" block_level="false"][/ac_button][/ac_iconbox][/vc_column_inner][vc_column_inner width="1/3" even="true"][ac_iconbox type="simple" icon_type="icon" border="rounded" icon_position="left" title="Fully RTL compatible theme" tag="h4" link="themeforest.net/user/_acquiathemes" link_target="_self" icon="59886" font="fontello"][vc_column_text font="normal"]At vero eos et accusam et justo duo dolores et ea rebum. At vero eos et accusam et justo duo dolores et ea rebum consetetur sadipscing elitr.[/vc_column_text][ac_button style="2d" label="View details" link_target="_self" bg_color="sw_default" size="small" type="rounded" full_width="false" block_level="false"][/ac_button][/ac_iconbox][/vc_column_inner][vc_column_inner width="1/3" odd="true" last="true"][ac_iconbox type="simple" icon_type="icon" border="rounded" icon_position="left" title="Drag and drop page builder" tag="h4" link="themeforest.net/user/_acquiathemes" link_target="_self" icon="59865" font="fontello"][vc_column_text font="normal"]Consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua.[/vc_column_text][ac_button style="2d" label="View details" link_target="_self" bg_color="sw_default" size="small" type="rounded" full_width="false" block_level="false"][/ac_button][/ac_iconbox][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'header_style\' => array(
          \'header-enabled\' => 0,
          \'transparent_header\' => 0,
        ),
        \'hero_style\' => array(
          \'enabled\' => 1,
          \'disabled\' => 1,
          \'style\' => \'fancy\',
          \'bg_type\' => \'light\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'fancy\',
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 1,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'44\',
        ),
        \'node_layout\' => \'no-sidebars\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1398082237\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'309\',
        \'source\' => \'node/374\',
        \'alias\' => \'content/home\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'383\',
      \'uid\' => \'1\',
      \'title\' => \'Home V8\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4b7f65d8-b1c0-4d36-9049-d507b1e8206e\',
      \'nid\' => \'383\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1398444179\',
      \'changed\' => \'1401288254\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d5526570-5eb0-4bc3-8b6a-0e80fb28d1ee\',
      \'revision_timestamp\' => \'1401288254\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row bg_color="sw_default" padding="default" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][vc_row_inner padding="zero" animate="slideUp" when="visible" delay="350"][vc_column_inner width="1/4" first="true" odd="true"][/vc_column_inner][vc_column_inner width="1/2" even="true"][ac_page_header tag="h2" align="center" margin="small"]<span style="border: 2px solid #333; display: inline-block; padding: 5px 15px; font-size: 100%;">The Happy Couple</span>[/ac_page_header][ac_divider type="icon" size="large" color="pink" align="center" width="full" icon="59522"][/ac_divider][/vc_column_inner][vc_column_inner width="1/4" last="true" odd="true"][/vc_column_inner][/vc_row_inner][vc_row_inner padding="zero" animate="slideUp" when="visible" delay="350"][vc_column_inner width="1/6" first="true" odd="true"][ac_img_frame frame="glow_circled" fid="410" effect="none" style="square-medium" lightbox_style="sw_default" video="0" align="center" lightbox="false" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/thumb-bride.jpg?itok=rwSO-ogS"][/ac_img_frame][/vc_column_inner][vc_column_inner width="1/3" even="true"][ac_page_header tag="h4" align="left" margin="x-small"]Sophie Angela[/ac_page_header][vc_column_text font="normal"]Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquid ex ea commodi consequat. Consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. Lorem ipsum dolor sit amet.<br> <br> [/vc_column_text][/vc_column_inner][vc_column_inner width="1/6" odd="true"][ac_img_frame frame="glow_circled" fid="411" effect="none" style="square-medium" lightbox_style="sw_default" video="0" align="center" lightbox="false" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/thumb-groom.jpg?itok=5dtUcsXs"][/ac_img_frame][/vc_column_inner][vc_column_inner width="1/3" last="true" even="true"][ac_page_header tag="h4" align="left" margin="x-small"]Jason Satrovsky[/ac_page_header][vc_column_text font="normal"]Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquid ex ea commodi consequat. Consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. Lorem ipsum dolor sit amet.<br> <br> [/vc_column_text][/vc_column_inner][/vc_row_inner][vc_row_inner padding="zero" animate="slideUp" when="visible" delay="350"][vc_column_inner width="1/4" first="true" odd="true"][/vc_column_inner][vc_column_inner width="1/2" even="true"][ac_divider type="icon" size="large" color="pink" align="center" width="full" icon="59522"][/ac_divider][/vc_column_inner][vc_column_inner width="1/4" last="true" odd="true"][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row style="1" bg_color="sw_default" padding="default" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][vc_row_inner padding="zero" animate="slideUp" when="visible" delay="350"][vc_column_inner width="1/4" first="true" odd="true"][ac_counter title="Days Together" value="1247" style="simple" bg_style="dark"][/ac_counter][/vc_column_inner][vc_column_inner width="1/4" even="true"][ac_counter title="Pink Roses" value="745" style="simple" bg_style="dark"][/ac_counter][/vc_column_inner][vc_column_inner width="1/4" odd="true"][ac_counter title="Family &amp; Friends" value="54" style="simple" bg_style="dark"][/ac_counter][/vc_column_inner][vc_column_inner width="1/4" last="true" even="true"][ac_counter title="Diamond Ring" value="1" style="simple" bg_style="dark"][/ac_counter][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row bg_color="sw_default" padding="default" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][vc_row_inner][vc_column_inner width="1/6" first="true" odd="true"][/vc_column_inner][vc_column_inner width="2/3" even="true"][ac_page_header tag="h2" align="center" margin="default"]<span style="border: 2px solid #333; display: inline-block; padding: 5px 15px; font-size: 100%;">The Wedding Events</span>[/ac_page_header][vc_column_text font="big" class="ac-align-center"]At vero eos et accusam et justo duo dolores et ea rebum. At vero eos et accusam et justo duo dolores et ea rebum. Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper.<br> <br> [/vc_column_text][/vc_column_inner][vc_column_inner width="1/6" last="true" odd="true"][/vc_column_inner][/vc_row_inner][vc_row_inner padding="default" animate="fadeInUp" when="visible" delay="350"][vc_column_inner width="1/6" first="true" odd="true"][/vc_column_inner][vc_column_inner width="1/3" even="true"][ac_img_frame frame="bordered" fid="412" effect="none" style="rectangle-large" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/photodune-1178353-wedding-xs.jpg?itok=SBtNNb_s"][ac_divider type="invisible" size="medium" custom_color="#444444" align="center" height="20"][/ac_divider][ac_page_header tag="h3" style="subtitle" align="center" margin="small"]Main ceremony[/ac_page_header][ac_iconlist place="left" size="tiny" border="sw_default" style="static_color" ico_color="white" ico_bg="" no_desc="true" where="icon" animate="slideDown" when="visible"][ac_iconlist_item title="Thursday 27 November 2014" icon="59607" icon_str="icon-calendar"][/ac_iconlist_item][ac_iconlist_item title="14:00 PM - 16:00 PM" icon="59614" icon_str="icon-clock"][/ac_iconlist_item][/ac_iconlist]<br> [ac_button style="sw_default" label="See more" link_target="_self" bg_color="" position="center" size="medium" type="sw_default" full_width="true"][/ac_button][/ac_img_frame][/vc_column_inner][vc_column_inner width="1/3" odd="true"][ac_img_frame frame="bordered" fid="413" effect="none" style="rectangle-large" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/photodune-7256106-groom-and-bride-together-on-wedding-day-xs.jpg?itok=gVi10HLd"][ac_divider type="invisible" size="medium" custom_color="#444444" align="center" height="20"][/ac_divider][ac_page_header tag="h3" style="subtitle" align="center" margin="small"]Wedding Party[/ac_page_header][ac_iconlist place="left" size="tiny" border="sw_default" style="static_color" ico_color="white" ico_bg="" no_desc="true" where="icon" animate="slideDown" when="visible"][ac_iconlist_item title="Thursday 27 November 2014" icon="59607" icon_str="icon-calendar"][/ac_iconlist_item][ac_iconlist_item title="18:00 PM - 23:00 PM" icon="59614" icon_str="icon-clock"][/ac_iconlist_item][/ac_iconlist]<br> [ac_button style="sw_default" label="See more" link_target="_self" bg_color="" size="medium" type="sw_default" full_width="true" position="center" ][/ac_button][/ac_img_frame][/vc_column_inner][vc_column_inner width="1/6" last="true" even="true"][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row bg_type="img" image="415" bg_color="sw_default" padding="default" custom_color="#444444" bg_parallax="true" position="left" align="left" bg_position="center center" bg_repeat="stretch" bg_attachment="fixed" bg_cover="true"][vc_column width="1/1" first="true" last="true" odd="true"][ac_page_header tag="h2" align="center" margin="large" color="white"]<span style="border: 2px solid #fff; display: inline-block; padding: 5px 15px; font-size: 100%;">Couple Photographs</span>[/ac_page_header][vc_row_inner padding="zero" animate="slideUp" when="visible" delay="350"][vc_column_inner width="1/1" first="true" last="true" odd="true"][ac_portfolio id="p-items-535ad45fc6bea" appearance="grid" total="4" pager="simple" num_per_page="4" spaced="true" padding="20" cols="4" view="simple-sep" frame="circled_simple" width="equal" style="square-large" effect="blur" filter_style="simple centered" media="true" date_format="M j, Y" sorting="false" fullwidth="false" title="false" date="false" tags="false" proj_link="false" details_link="false" excerpt="false"][/ac_portfolio][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row bg_color="sw_default" padding="default" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][vc_row_inner][vc_column_inner width="1/6" first="true" odd="true"][/vc_column_inner][vc_column_inner width="2/3" even="true"][ac_page_header tag="h2" align="center" margin="default"]<span style="border: 2px solid #333; display: inline-block; padding: 5px 15px; font-size: 100%;">Tweets Back to Back</span>[/ac_page_header][vc_column_text font="big" class="ac-align-center"]Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla.[/vc_column_text][/vc_column_inner][vc_column_inner width="1/6" last="true" odd="true"][/vc_column_inner][/vc_row_inner][vc_row_inner padding="zero" animate="slideUp" when="visible" delay="350"][vc_column_inner width="1/6" first="true" odd="true"][/vc_column_inner][vc_column_inner width="1/3" even="true"][ac_iconbox type="boxed-simple" size="xxx-large" icon_type="image" fid="410" style="square-thumb" border="circled" icon_position="center" title="Sophie" tag="h4"][ac_divider type="invisible" size="medium" custom_color="#444444" align="center" height="20"][/ac_divider][ac_page_header tag="h3" style="subtitle" align="center" margin="small"]@acquia[/ac_page_header][ac_twitter key="@acquia" items="2" style="compact"][/ac_twitter][ac_divider type="invisible" size="medium" custom_color="#444444" align="center" height="20"][/ac_divider][ac_button style="sw_default" label="follow" link_target="_self" bg_color="sw_default" size="medium" type="sw_default" full_width="true" block_level="false" icon="59394"][/ac_button][/ac_iconbox][/vc_column_inner][vc_column_inner width="1/3" odd="true"][ac_iconbox type="boxed-simple" size="xxx-large" icon_type="image" fid="411" style="square-thumb" border="circled" icon_position="center" title="Jason" tag="h4"][ac_divider type="invisible" size="medium" custom_color="#444444" align="center" height="20"][/ac_divider][ac_page_header tag="h3" style="subtitle" align="center" margin="small"]@envato[/ac_page_header][ac_twitter key="@envato" items="2" style="compact"][/ac_twitter][ac_divider type="invisible" size="medium" custom_color="#444444" align="center" height="20"][/ac_divider][ac_button style="sw_default" label="follow" link_target="_self" bg_color="sw_default" size="medium" type="sw_default" full_width="true" block_level="false" icon="59394"][/ac_button][/ac_iconbox][/vc_column_inner][vc_column_inner width="1/6" last="true" even="true"][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row style="1" bg_color="sw_default" padding="default" no_bottom_space="true" custom_color="#444444" class="ac-sticky-footer" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][vc_row_inner][vc_column_inner width="1/6" first="true" odd="true"][/vc_column_inner][vc_column_inner width="2/3" even="true"][ac_page_header tag="h2" align="center" margin="default"]<span style="border: 2px solid #333; display: inline-block; padding: 5px 15px; font-size: 100%;">Our Wedding Location</span>[/ac_page_header][vc_column_text font="big" class="ac-align-center"]Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat.[/vc_column_text][/vc_column_inner][vc_column_inner width="1/6" last="true" odd="true"][/vc_column_inner][/vc_row_inner][ac_gmap mapid="ac-gmap-3btBB4GSr7" lat="40.72727903169938" long="-74.09286502197874" zoom="14" map_width="full" height="460px" align="left" type="retro" bubble="false"][ac_gmap_marker lat="40.730010846176754" long="-74.0817070324768"][/ac_gmap_marker][/ac_gmap][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'header_style\' => array(
          \'header-enabled\' => 0,
          \'transparent_header\' => 0,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'full\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'\',
          \'main_menu_style\' => \'\',
        ),
        \'hero_style\' => array(
          \'enabled\' => 1,
          \'disabled\' => 1,
          \'style\' => \'fancy\',
          \'bg_type\' => \'light\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'fancy\',
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 1,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'50\',
        ),
        \'node_layout\' => \'full-width\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1398444179\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'167\',
        \'source\' => \'node/383\',
        \'alias\' => \'home/v8\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Home V8\',
        \'mlid\' => 0,
        \'plid\' => \'431\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-43\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'378\',
      \'uid\' => \'1\',
      \'title\' => \'Home v4\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0757214e-16b2-4eb6-837a-c4b1a171855b\',
      \'nid\' => \'378\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1398383155\',
      \'changed\' => \'1400264674\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ecdf83eb-3cba-4a13-ae3d-e0ac4d1db958\',
      \'revision_timestamp\' => \'1400264674\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row bg_color="sw_default" padding="zero" custom_color="#444444" borders="false" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][ac_portfolio id="p-items-5359a1dc14124" appearance="scroller" auto_scroll="true" nav_prev_next="true" total="-1" pager="simple" num_per_page="-1" cols="4" view="fade-in-left" frame="none" width="equal" style="square-large" effect="none" filter_style="simple centered" fullwidth="true" media="true" title="true" date_format="M j, Y" proj_link="true" details_link="true" excerpt="true" nav_pager="false" sorting="false" spaced="false" date="false" tags="false"][/ac_portfolio][/vc_column][/vc_row][vc_row bg_color="sw_default" padding="large" custom_color="#444444" borders="false" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][vc_row_inner][vc_column_inner width="1/4" first="true" odd="true"][ac_iconbox type="simple full" size="medium" icon_type="icon" border="circled" icon_position="center" title="Responsive Design" tag="h4" color_clone="true" animate="ac_appear" when="visible" icon="59403"][vc_column_text font="normal"]AURA is fully responsive no matter how you decide to build your pages. Create layouts that your visitors can enjoy on any device.<br> [/vc_column_text][/ac_iconbox][/vc_column_inner][vc_column_inner width="1/4" even="true"][ac_iconbox type="simple full" icon_type="icon" border="circled" icon_position="center" title="Unlimited Skins" tag="h4" color_clone="true" icon="59436" font="fontello"][vc_column_text font="normal"]You’ll love the endless possibilities with AURA. Unlimited portfolios, color options, staff, testimonials, blogs, page layouts. You are only limited by your creativity![/vc_column_text][/ac_iconbox][/vc_column_inner][vc_column_inner width="1/4" odd="true"][ac_iconbox type="simple full" icon_type="icon" border="circled" icon_position="center" title="SEO Optimized" tag="h4" color_clone="true" icon="59519" font="fontello"][vc_column_text font="normal"]We’ve paid close attention to SEO while developing this theme (headings, clean code, speed, etc). Your site must look good, but also rank well on search results.[/vc_column_text][/ac_iconbox][/vc_column_inner][vc_column_inner width="1/4" last="true" even="true"][ac_iconbox type="simple full" size="medium" icon_type="icon" border="circled" icon_position="center" title="Visual page builder" tag="h4" color_clone="true" icon="59588"][vc_column_text font="normal"]Aura is the first Drag &amp; Drop pae builder theme in the universe. you can create pages ease using our visual composer module and lots of shortcodes. anything you needed is provided![/vc_column_text][/ac_iconbox][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row style="1" bg_color="sw_default" padding="small" custom_color="#444444" position="left" align="left" bg_parallax="false" bg_cover="false" animate="fadeInUp" when="visible" delay="350"][vc_column width="1/1" first="true" last="true" odd="true"][ac_callout font="normal" text_align="left" background="none" border="rounded" btn_align="corner" btn="true" btn_style="sw_default" btn_typo="none" btn_label="try AURA" btn_link_target="_self" btn_custom_bg="#444444" btn_custom_font="#ffffff" btn_size="x-large" btn_type="sw_default" btn_border_color="sw_default" btn_custom_border_color="#d1d1d1" btn_cssanimate="undefined" prefix="btn_" icon="59728"]PGgzPlRoaXMgaXMgQVVSQSwgYWxsIHlvdSBuZWVkIHRvIG1ha2UgeW91ciBuZXcgcHJvamVjdCB3aXRoIGxvdmVseSBEcnVwYWwuPC9oMz48cD5Mb2FkZWQgd2l0aCBhd2Vzb21lIGZlYXR1cmVzLCBEcmFnICZhbXA7IERyb3AgcGFnZSBidWlsZGVyLCBwcmVtaXVtIHNsaWRlcnMsIHVubGltaXRlZCBjb2xvcnMsIGFkdmFuY2VkIHRoZW1lIG9wdGlvbnMgJmFtcDsgbXVjaCBtb3JlITwvcD4=[/ac_callout][/vc_column][/vc_row][vc_row][vc_column width="1/4" first="true" odd="true"][ac_page_header tag="h4" block_title="true" align="left" margin="small"]About our company[/ac_page_header][vc_column_text font="normal"]Nam liber tempor cum soluta nobis eleifend option congue nihil imperdiet doming id quod mazim placerat facer possim assum. Consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. Lorem ipsum dolor sit amet.[/vc_column_text][ac_button style="flip" label="see more" link_target="_self" bg_color="sw_default" size="medium" type="rounded" full_width="false" block_level="false" icon="angle-right"][/ac_button][/vc_column][vc_column width="1/4" even="true"][ac_page_header tag="h4" block_title="true" align="left" margin="small"]Our services[/ac_page_header][vc_accordion][vc_accordion_tab title="elasticSearch development" open="true"][vc_column_text font="normal"]Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat.[/vc_column_text][/vc_accordion_tab][vc_accordion_tab title="digital strategy" open="false"][vc_column_text font="normal"]At vero eos et accusam et justo duo dolores et ea rebum. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat.[/vc_column_text][/vc_accordion_tab][vc_accordion_tab title="database design" open="false"][vc_column_text font="normal"]Consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. Lorem ipsum dolor sit amet.[/vc_column_text][/vc_accordion_tab][/vc_accordion][/vc_column][vc_column width="1/2" last="true" odd="true"][ac_image fid="492" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/rev-slider-full.jpg?itok=munAHmVM"][/ac_image][/vc_column][/vc_row][vc_row style="2" bg_color="sw_default" padding="default" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="2/3" first="true" odd="true"][ac_page_header tag="h4" block_title="true" align="left" margin="small"]from Our office[/ac_page_header][img_slider id="img-slider-ZWcza7tac9" style="flexslider_slider-wide" animation="slide" easing="swing" slideshow="true" directionnav="true"][img_slider_item fid="569" style="h-slider"][/img_slider_item][img_slider_item fid="568" style="h-slider" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/masthead//11631808275_1477ff4a28_h.jpg?itok=ZM9XpBJB"][/img_slider_item][/img_slider][/vc_column][vc_column width="1/3" last="true" even="true"][ac_page_header tag="h4" block_title="true" align="left" margin="small"]get in touch[/ac_page_header][ac_contact cid="1" style="centered" bg_style="light" hide_labels="true" minimal="true" type_title="Website feedback"][/ac_contact][/vc_column][/vc_row][vc_row][vc_column width="1/1" first="true" last="true" odd="true"][ac_page_header tag="h3" block_title="true" align="center" margin="default"]our team memebers[/ac_page_header][ac_carousel easing="easeOutQuart" speed="1000" nav="true" cols="2" spaced="true" padding="20" auto="false"][ac_team type="columns" name="Sara Watkins" job="Systems Administrator" fid="482" style="rectangle-v-large" bio="Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nulla nunc dui, tristique in semper vel, congue sed ligula. Nam dolor ligula, faucibus id sodales in." src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/photodune-7435992-nice-girl-xs.jpg?itok=F9A8oUCX"][ac_font_icon info_title="my facebook profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59393" icon_str="icon-facebook"][/ac_font_icon][ac_font_icon info_title="Google Plust profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59469" icon_str="icon-gplus"][/ac_font_icon][ac_font_icon info_title="twitter profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59394" icon_str="icon-twitter"][/ac_font_icon][ac_font_icon info_title="My home page!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59549" icon_str="icon-home"][/ac_font_icon][/ac_team][ac_team type="columns" name="Chelsea Richardson" job="Creative Director" fid="478" style="rectangle-v-large" bio="Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nulla nunc dui, tristique in semper vel, congue sed ligula. Nam dolor ligula, faucibus id sodales in" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/photodune-6671086-handsome-guy-xs.jpg?itok=10HfViVN"][ac_font_icon info_title="my facebook profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59393" icon_str="icon-facebook"][/ac_font_icon][ac_font_icon info_title="Google Plust profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59469" icon_str="icon-gplus"][/ac_font_icon][ac_font_icon info_title="twitter profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59394" icon_str="icon-twitter"][/ac_font_icon][ac_font_icon info="tooltip" info_place="top" info_trigger="hover" link="themeforest.net/user/_acquiathemes" link_target="_blank" icon="stackoverflow" icon_str="icon-null"][/ac_font_icon][/ac_team][ac_team type="columns" name="Maria Daniels" job="programmer" fid="588" style="rectangle-v-large" bio="Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nulla nunc dui, tristique in semper vel, congue sed ligula. Nam dolor ligula, faucibus id sodales in" socials="undefined" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/photodune-7445927-red-girl-xs.jpg?itok=3tnCZuSL"][ac_font_icon info_title="my facebook profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59393"][/ac_font_icon][ac_font_icon info_title="Google Plust profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59469"][/ac_font_icon][ac_font_icon info_title="twitter profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59394"][/ac_font_icon][ac_font_icon info="tooltip" info_place="top" info_trigger="hover" link="themeforest.net/user/_acquiathemes" link_target="_blank" icon="youtube"][/ac_font_icon][/ac_team][ac_team type="columns" name="Barry Davidson" job="Technical Director" fid="479" style="rectangle-v-large" bio="Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nulla nunc dui, tristique in semper vel, congue sed ligula. Nam dolor ligula, faucibus id sodales in" socials="undefined" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/photodune-6668994-handsome-guy-xs.jpg?itok=OP2nFF3j"][ac_font_icon info_title="my facebook profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59393"][/ac_font_icon][ac_font_icon info_title="Google Plust profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59469"][/ac_font_icon][ac_font_icon info_title="twitter profile!" info="tooltip" info_place="top" info_trigger="hover" link="http://example.com" link_target="_blank" icon="59394"][/ac_font_icon][ac_font_icon info="tooltip" info_place="top" info_trigger="hover" link="themeforest.net/user/_acquiathemes" link_target="_blank" icon="dropbox"][/ac_font_icon][/ac_team][/ac_carousel][/vc_column][/vc_row][vc_row style="1" bg_color="sw_default" padding="default" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/4" first="true" odd="true"][ac_page_header tag="h4" block_title="true" align="left" margin="small"]About us[/ac_page_header][ac_img_frame frame="sw_default" fid="370" effect="sw_default" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/screenshot_0.png?itok=g8hghn94"][/ac_img_frame][vc_column_text font="normal"]You’ll love the endless possibilities with Aura. Unlimited portfolios, color options, staff, testimonials, blogs, page layouts. You are only limited by your creativity! Excepteur sint obcaecat cupiditat non.<br> xcepteur sint obcaecat cupiditat non. Sed diam nonumy eirmod tempor invidunt.[/vc_column_text][/vc_column][vc_column width="1/4" even="true"][ac_page_header tag="h4" block_title="true" align="left" margin="small"]our specialisation[/ac_page_header][vc_accordion type="accordion" style="simple" sorting="false"][vc_accordion_tab title="web design" open="false"][vc_column_text font="normal"]Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip.[/vc_column_text][/vc_accordion_tab][vc_accordion_tab title="Photography" open="true"][vc_column_text font="normal"]Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip.[/vc_column_text][/vc_accordion_tab][vc_accordion_tab title="Marketing" open="false"][vc_column_text font="normal"]Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip.[/vc_column_text][/vc_accordion_tab][/vc_accordion][/vc_column][vc_column width="1/4" odd="true"][ac_page_header tag="h4" block_title="true" align="left" margin="small"]Recent projects[/ac_page_header][ac_portfolio id="p-items-536e5f3a238ae" appearance="thumb" gplus_effect="fly" gplus_height="350" total="9" pager="simple" num_per_page="-1" spaced="true" padding="5" cols="3" view="simple-sep" frame="none" width="equal" style="square-thumb" effect="blur" filter_style="simple centered" media="true" title="true" date_format="M j, Y" class="ac-mini-feature" sorting="false" fullwidth="false" date="false" tags="false" proj_link="false" details_link="false" excerpt="false"][/ac_portfolio][/vc_column][vc_column width="1/4" last="true" even="true"][ac_page_header tag="h4" block_title="true" align="left" margin="small"]Contact us[/ac_page_header][ac_contact_info style="compact" company="acquiathemes design " address="12 Main Street, New York, NY 0278" phone="1.800.555.6789"][/ac_contact_info][ac_divider type="invisible" size="medium" custom_color="#444444" align="center" height="30"][/ac_divider][vc_row_inner][vc_column_inner width="1/1" first="true" last="true" odd="true"][ac_page_header tag="h4" block_title="true" align="left" margin="small"]Follow us[/ac_page_header][ac_font_icon type="circled" color="white" bg_color="theme-color" size="small" position="left" link="http://facebook.com/acquiathemes" link_target="_self" icon="59393" info="tooltip" info_place="top" info_trigger="hover" info_title="Like us on facebook" info_content="extra content for the popover" icon_str="icon-facebook"][/ac_font_icon][ac_font_icon type="circled" color="white" bg_color="theme-color" size="small" position="left" link="http://facebook.com/acquiathemes" link_target="_self" icon="59469" info="tooltip" info_place="top" info_trigger="hover" info_title="follow us on google plus" info_content="extra content for the popover" icon_str="icon-gplus"][/ac_font_icon][ac_font_icon type="circled" color="white" bg_color="theme-color" size="small" position="left" link="http://facebook.com/acquiathemes" link_target="_self" icon="59479" info="tooltip" info_place="top" info_trigger="hover" info_title="follow us" info_content="extra content for the popover" icon_str="icon-pinterest"][/ac_font_icon][ac_font_icon type="circled" color="white" bg_color="theme-color" size="small" position="left" link="http://facebook.com/acquiathemes" link_target="_self" icon="59394" info="tooltip" info_place="top" info_trigger="hover" info_title="follow us on twitter" info_content="extra content for the popover" icon_str="icon-twitter"][/ac_font_icon][ac_font_icon type="circled" color="white" bg_color="theme-color" size="small" position="left" link="http://facebook.com/acquiathemes" link_target="_self" icon="59472" info="tooltip" info_place="top" info_trigger="hover" info_title="subscribe to our latest news" info_content="extra content for the popover" icon_str="icon-rss"][/ac_font_icon][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'header_style\' => array(
          \'header-enabled\' => 0,
          \'transparent_header\' => 0,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'full\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'\',
          \'main_menu_style\' => \'\',
        ),
        \'hero_style\' => array(
          \'enabled\' => 1,
          \'disabled\' => 1,
          \'style\' => \'fancy\',
          \'bg_type\' => \'light\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'fancy\',
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 0,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'6\',
        ),
        \'node_layout\' => \'full-width-no-footer\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1398383155\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'163\',
        \'source\' => \'node/378\',
        \'alias\' => \'Home/v4\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Home v4\',
        \'mlid\' => 0,
        \'plid\' => \'431\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-47\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'380\',
      \'uid\' => \'1\',
      \'title\' => \'Home V5\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'7b6310b4-83dc-40a8-90ae-8d8717203e97\',
      \'nid\' => \'380\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1398418792\',
      \'changed\' => \'1400175427\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ee283910-f4f0-41e8-8cf6-bd17310a04b7\',
      \'revision_timestamp\' => \'1400175427\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row bg_type="video" bg_color="custom" custom_bg="#000000" bg_opacity="65" padding="xxx-large" custom_color="#444444" poster="397" mp4="398" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][vc_row_inner padding="zero" animate="fadeIn" when="visible" delay="350"][vc_column_inner width="1/1" first="true" last="true" odd="true"][ac_page_header tag="h2" align="center" margin="x-small" color="white"]Thinking In New Boxes[/ac_page_header][ac_page_header tag="h4" style="subtitle" align="center" margin="zero" color="white"]Many business owners struggle with pricing. Should their first concern be covering costs or figuring out what the market will bear? How do they determine what the market will pay without raising prices high enough that some customers flee? And can they offer discounts without damaging their price brand?[/ac_page_header][/vc_column_inner][/vc_row_inner][vc_row_inner padding="default" class="ac-align-center"][vc_column_inner width="1/1" first="true" last="true" odd="true"][ac_button style="sw_default" label="Features" link_target="_self" bg_color="sw_default" size="medium" type="sw_default" animate="fadeInRight" when="visible" full_width="false" block_level="false"][/ac_button][ac_button style="sw_default" label="Get in touch" link_target="_self" bg_color="sw_default" size="medium" type="sw_default" animate="fadeInLeft" when="visible" full_width="false" block_level="false"][/ac_button][/vc_column_inner][/vc_row_inner][/vc_column][/vc_row][vc_row bg_color="sw_default" padding="default" custom_color="#444444" bg_parallax="false" bg_cover="false"][vc_column width="1/1" first="true" last="true" odd="true"][vc_row_inner padding="default"][vc_column_inner width="1/2" first="true" odd="true"][ac_page_header tag="h4" block_title="true" align="left" margin="small"]Welcome to our new website.[/ac_page_header][vc_column_text font="normal"]Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, At accusam aliquyam diam diam dolore dolores duo eirmod eos erat, et nonumy sed tempor et et invidunt justo labore Stet clita ea et gubergren, kasd magna no rebum. Sanctus sea sed takimata ut vero voluptua. <br><br>Nam liber tempor cum soluta nobis eleifend option congue nihil imperdiet doming id quod mazim placerat facer possim assum. Nam liber tempor cum soluta nobis eleifend option congue nihil imperdiet doming id quod mazim placerat facer possim assum.[/vc_column_text][/vc_column_inner][vc_column_inner width="1/4" even="true"][ac_page_header tag="h4" block_title="true" align="left" margin="small"]Our skills[/ac_page_header][ac_progressbar style="extended" no_striped="true"][ac_progressbar_item title="National Acquisitions" bg_style="theme_default" progress="97"][/ac_progressbar_item][ac_progressbar_item title="Annual Profit Increase" bg_style="theme_default" progress="83"][/ac_progressbar_item][ac_progressbar_item title="Revenue Increase" bg_style="theme_default" progress="74" style="extended"][/ac_progressbar_item][ac_progressbar_item title="Total Marketshares" bg_style="theme_default" progress="67"][/ac_progressbar_item][ac_progressbar_item title="Research" bg_style="theme_default" progress="52"][/ac_progressbar_item][/ac_progressbar][/vc_column_inner][vc_column_inner width="1/4" last="true" odd="true"][ac_page_header tag="h4" block_title="true" align="left" margin="small"]Our services[/ac_page_header][vc_accordion][vc_accordion_tab title="web design" open="false"][vc_column_text font="normal"]Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.[/vc_column_text][/vc_accordion_tab][vc_accordion_tab title="Photography" open="true"][vc_column_text font="normal"]Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.&nbsp;<br> <br> [/vc_column_text][/vc_accordion_tab][vc_accordion_tab title="Marketing" open="false"][vc_column_text font="normal"]Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.&nbsp;<br> <br> [/vc_column_text][/vc_accordion_tab][/vc_accordion][/vc_column_inner][/vc_row_inner][ac_divider type="shadow" size="medium" custom_color="#444444" align="center" width="full"][/ac_divider][vc_row_inner padding="default"][vc_column_inner width="1/4" first="true" odd="true" animate="fadeIn" when="visible"][ac_page_header tag="h4" block_title="true" align="left" margin="small"]Product and services[/ac_page_header][vc_column_text font="normal"]At vero eos et accusam et justo duo dolores et ea rebum. Consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. Stet clita kasd gubergren, no sea takimata sanctus est. At vero eos et accusam et justo duo.[/vc_column_text][ac_button style="flip" label="see details" link_target="_self" bg_color="sw_default" size="medium" type="rounded" full_width="false" block_level="false" icon="right-open-big"][/ac_button][/vc_column_inner][vc_column_inner width="1/4" even="true" animate="fadeIn" when="visible"][ac_img_frame frame="silver" fid="389" effect="sw_default" style="rectangle-large" lightbox_style="sw_default" video="0" align="left" title="+39 Shortcodes" caption_align="left" link="http://themeforest.net/user/_acquiathemes" link_target="_self" lightbox="false" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/ac-bg-12.jpg?itok=RvrzYAcx"][/ac_img_frame][ac_divider type="invisible" align="center" height="20"][/ac_divider][ac_iconbox type="simple full" size="tiny" icon_type="icon" border="sw_default" icon_position="left" color="black" title="+39 Shortcodes" tag="h5" icon="59533"][vc_column_text font="normal"]Can make website design much easier and with our shortcode manager you can now create them even faster. [/vc_column_text][/ac_iconbox][/vc_column_inner][vc_column_inner width="1/4" odd="true"][ac_img_frame frame="silver" fid="390" effect="sw_default" style="rectangle-large" lightbox_style="sw_default" video="0" align="left" title="Tons Of Gallery" caption_align="left" link="http://themeforest.net/user/_acquiathemes" link_target="_self" lightbox="false" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/ac-bg-13.jpg?itok=xOztgnao"][/ac_img_frame][ac_divider type="invisible" align="center" height="20"][/ac_divider][ac_iconbox type="simple full" size="tiny" icon_type="icon" border="sw_default" icon_position="left" title="Tons of gallery" tag="h5" icon="59531"][vc_column_text font="normal"]Present your work to the crowd, with our portfolio management you can easily create your own showcase.[/vc_column_text][/ac_iconbox][/vc_column_inner][vc_column_inner width="1/4" last="true" even="true"][ac_img_frame frame="silver" fid="400" effect="sw_default" style="rectangle-large" lightbox_style="sw_default" video="0" align="left" title="fully responsive" caption_align="left" link="http://themeforest.net/user/_acquiathemes" link_target="_self" lightbox="false" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/photodune-630818-computer-code-s.JPG?itok=QxR8HSm7"][/ac_img_frame][ac_divider type="invisible" align="center" height="20"][/ac_divider][ac_iconbox type="simple full" size="tiny" icon_type="icon" border="sw_default" icon_position="left" title="fully responsive" tag="h5" icon="59403"][vc_column_text font="normal"]AURA is fully responsive no matter how you decide to build your pages. Create layouts that your visitors can enjoy.[/vc_column_text][/ac_iconbox][/vc_column_inner][/vc_row_inner][ac_divider type="shadow" size="medium" custom_color="#444444" align="center" width="full"][/ac_divider][vc_row_inner padding="default"][vc_column_inner width="1/4" first="true" odd="true"][ac_page_header tag="h4" block_title="true" align="left" margin="small"]Our specialisation[/ac_page_header][vc_column_text font="normal"]At vero eos et accusam et justo duo dolores et ea rebum. Consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. Stet clita kasd gubergren, no sea takimata sanctus est. At vero eos et accusam et justo duo.[/vc_column_text][ac_button style="flip" label="see details" link_target="_self" bg_color="sw_default" size="medium" type="rounded" full_width="false" block_level="false" icon="right-open-big"][/ac_button][/vc_column_inner][vc_column_inner width="3/4" last="true" even="true"][ac_grid columns="2" borders="true"][ac_iconbox type="simple full" size="small" icon_type="icon" style="square-thumb" border="circled" icon_position="left" title="Photography" tag="h5" animate="ac_appear" when="visible" icon="camera"][vc_column_text font="normal"]Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie.[/vc_column_text][/ac_iconbox][ac_iconbox type="simple full" size="small" icon_type="icon" style="square-thumb" border="circled" icon_position="left" title="Drupal development" tag="h5" icon="drupal"][vc_column_text font="normal"]Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie.[/vc_column_text][/ac_iconbox][ac_iconbox type="simple full" size="small" icon_type="icon" style="square-thumb" border="circled" icon_position="left" color="black" title="IPTV" tag="h5" icon="monitor"][vc_column_text font="normal"]Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie.[/vc_column_text][/ac_iconbox][ac_iconbox type="simple full" size="small" icon_type="icon" style="square-thumb" border="circled" icon_position="left" color="black" title="Robotics" tag="h5" icon="cog"][vc_column_text font="normal"]Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie.[/vc_column_text][/ac_iconbox][ac_iconbox type="simple full" size="small" icon_type="icon" style="square-thumb" border="circled" icon_position="left" title="Energy" tag="h5" icon="water"][vc_column_text font="normal"]Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie.[/vc_column_text][/ac_iconbox][ac_iconbox type="simple full" size="small" icon_type="icon" style="square-thumb" border="circled" icon_position="left" title="Internationalization" tag="h5" icon="flag"][vc_column_text font="normal"]Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie.[/vc_column_text][/ac_iconbox][/ac_grid][/vc_column_inner][/vc_row_inner][ac_divider type="shadow" size="medium" custom_color="#444444" align="center" width="full"][/ac_divider][vc_row_inner padding="default"][vc_column_inner width="1/4" first="true" odd="true"][ac_page_header tag="h4" block_title="true" align="left" margin="small"]our partners[/ac_page_header][vc_column_text font="normal"]At vero eos et accusam et justo duo dolores et ea rebum. Consetetur sadipscing elitr, sed diam nonumy.[/vc_column_text][ac_button style="flip" label="see more" link_target="_self" bg_color="sw_default" size="medium" type="rounded" full_width="false" block_level="false" icon="right-open-big"][/ac_button][/vc_column_inner][vc_column_inner width="3/4" last="true" even="true"][ac_grid columns="4" borders="true" animate="ac_appear" when="visible" delay="350"][ac_img_frame frame="none" fid="376" effect="none" gridy="true" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" animate="ac_appear" when="visible" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/Swanmini1.png?itok=8CQpaZEn"][/ac_img_frame][ac_img_frame frame="none" fid="375" effect="none" gridy="true" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" animate="ac_appear" when="visible" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/Sportmini1.png?itok=xJYO0nq0"][/ac_img_frame][ac_img_frame frame="none" fid="374" effect="none" gridy="true" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" animate="ac_appear" when="visible" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/Infinitymini1.png?itok=ESp6E91k"][/ac_img_frame][ac_img_frame frame="none" fid="373" effect="none" gridy="true" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" animate="ac_appear" when="visible" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/rkomini1.png?itok=K7HK77r0"][/ac_img_frame][ac_img_frame frame="none" fid="377" effect="none" gridy="true" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" animate="ac_appear" when="visible" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/logo6.1-200x150.png?itok=KNQ8RuHA"][/ac_img_frame][ac_img_frame frame="none" fid="378" effect="none" gridy="true" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" animate="ac_appear" when="visible" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/stongwavesmini1.png?itok=EI3ngLKN"][/ac_img_frame][ac_img_frame frame="none" fid="489" effect="none" gridy="true" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/blue_dragon_logo.png?itok=mGCbZWgP"][/ac_img_frame][ac_img_frame frame="sw_default" fid="490" effect="sw_default" gridy="true" lightbox_style="sw_default" video="0" align="left" caption_align="left" lightbox="false" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/tech.png?itok=juyXJu48"][/ac_img_frame][/ac_grid][/vc_column_inner][/vc_row_inner][ac_divider type="shadow" size="medium" custom_color="#444444" align="center" width="full"][/ac_divider][vc_row_inner padding="default"][vc_column_inner width="1/3" first="true" odd="true" animate="fadeIn" when="visible"][ac_page_header tag="h4" block_title="true" align="left" margin="small"]Our New York office[/ac_page_header][ac_contact_info style="list" address="12345 Main Street, New York, NY 02781" phone="1.800.555.6789" email="info@acquiathemes.com" skype="acquiathemes"][ac_font_icon info_title="Google plus" info="tooltip" info_place="top" info_trigger="hover" link="http://plus.google.com/acquiathemes" link_target="_blank" icon="59469"][/ac_font_icon][ac_font_icon info_title="Linked in" info="tooltip" info_place="top" info_trigger="hover" link="http://themeforest.net/user/_acquiathemes" link_target="_blank" icon="59477"][/ac_font_icon][ac_font_icon info_title="news feed" info="tooltip" info_place="top" info_trigger="hover" link="http://themeforest.net/user/_acquiathemes" link_target="_blank" icon="59472"][/ac_font_icon][ac_font_icon info_title="Twitter" info="tooltip" info_place="top" info_trigger="hover" link="http://themeforest.net/user/_acquiathemes" link_target="_blank" icon="59394"][/ac_font_icon][ac_font_icon info_title="Vimeo" info="tooltip" info_place="top" info_trigger="hover" link="http://themeforest.net/user/_acquiathemes" link_target="_blank" icon="59422"][/ac_font_icon][ac_font_icon info_title="dribbble" info="tooltip" info_place="top" info_trigger="hover" link="http://themeforest.net/user/_acquiathemes" link_target="_blank" icon="59470"][/ac_font_icon][/ac_contact_info][/vc_column_inner][vc_column_inner width="1/3" even="true" animate="fadeIn" when="visible"][ac_page_header tag="h4" block_title="true" align="left" margin="small"]Get in touch[/ac_page_header][ac_contact cid="1" style="centered" bg_style="light" hide_labels="true" minimal="true" type_title="Website feedback"][/ac_contact][/vc_column_inner][vc_column_inner width="1/3" last="true" odd="true"][ac_page_header tag="h4" block_title="true" align="left" margin="small"]We Thrive on Community Feedback[/ac_page_header][ac_testimonials style="fancy" appearance="slider" slider_style="pager" cols="1" easing="easeOutCubic" speed="1000" nav="true" avatar_pos="header" where="icon"][ac_testimonial fid="117" style="sw_default" name="Richard Doe" position="Director" link="http://example.net" link_target="_self" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_15.jpg?itok=fiUjPs_z"]Aenean vitae metus justo. Duis luctus dui nec condimentum suscipit. Maecenas tempor arcu in ipsum aliquam, vel porttitor odio dictum. Nullam porttitor eget lorem nec imperdiet. Mauris ultricies purus risus, ac viverra risus vulputate nec.[/ac_testimonial][ac_testimonial fid="122" style="sw_default" name="cassidy williams" position="CIO" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_2.jpg?itok=eXxxst3b"]&nbsp;At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.[/ac_testimonial][ac_testimonial fid="119" style="sw_default" name="Anna Atkinson" position="Co-founder" link="http://example.net" link_target="_self" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_26.jpg?itok=TuQya-l9"]Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nulla nunc dui, tristique in semper vel, congue sed ligula. Nam dolor ligula, faucibus id sodales in, auctor fringill torquent per conubia nostra.[/ac_testimonial][ac_testimonial fid="118" style="sw_default" name="John Jones" position="Client" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_16.jpg?itok=SkhYozzS"]Sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. . At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est&nbsp;[/ac_testimonial][ac_testimonial fid="121" style="sw_default" name="Patrick H. Lauke" position="Developer" src="http://lh/aura/sites/default/files/styles/composer-image-preview/public/acquia/shortcodes/img/avatar_20.jpg?itok=OgefrUmF"]&nbsp;At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.[/ac_testimonial][/ac_testimonials][/vc_column_inner][/vc_row_inner][ac_callout font="big" text_align="center" background="fancy" border="rounded" btn_align="after" btn="true" btn_style="sw_default" btn_typo="none" btn_label="Buy AURA" btn_link_target="_self" btn_bg_color="sw_default" btn_custom_bg="#444444" btn_custom_font="#ffffff" btn_size="medium" btn_type="sw_default" btn_border_color="sw_default" btn_custom_border_color="#d1d1d1" btn_cssanimate="undefined" prefix="btn_" icon="59728"]PGgzPlBpY2sgeW91ciBBVVJBIGFuZCBjcmVhdGUgYSB1bmlxdWUgYW5kIHBvd2VyZnVsIHdlYnNpdGUhPC9oMz48cD5Mb2FkZWQgd2l0aCBhd2Vzb21lIGZlYXR1cmVzLCBwcmVtaXVtIHNsaWRlcnMsIHVubGltaXRlZCBjb2xvcnMsIGFkdmFuY2VkIHRoZW1lIG9wdGlvbnMgJmFtcDsgbXVjaCBtb3JlITwvcD4=[/ac_callout][/vc_column][/vc_row][vc_row][/vc_row][vc_column first="true" last="true" odd="true"][/vc_column][vc_column_text][/vc_column_text]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'header_style\' => array(
          \'header-enabled\' => 0,
          \'transparent_header\' => 0,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'full\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'\',
          \'main_menu_style\' => \'\',
        ),
        \'hero_style\' => array(
          \'enabled\' => 1,
          \'disabled\' => 1,
          \'style\' => \'fancy\',
          \'bg_type\' => \'light\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'fancy\',
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 0,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'6\',
        ),
        \'node_layout\' => \'full-width\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1398418792\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'165\',
        \'source\' => \'node/380\',
        \'alias\' => \'home/v5\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Home V5\',
        \'mlid\' => 0,
        \'plid\' => \'431\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-46\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'85\',
      \'uid\' => \'1\',
      \'title\' => \'black & white photography\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ee4f22d4-6e47-493c-97df-5b417b27a7bf\',
      \'nid\' => \'85\',
      \'type\' => \'portfolio\',
      \'language\' => \'und\',
      \'created\' => \'1389690457\',
      \'changed\' => \'1401292830\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ff256fa8-4600-48cb-be7c-faf7862f8ac2\',
      \'revision_timestamp\' => \'1401292830\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[vc_row bg_color="sw_default" padding="zero" custom_color="#444444" borders="false" bg_parallax="false" bg_cover="false"][vc_column class="ac-no-margin" width="1/1" first="true" last="true" odd="true"][ac_page_header tag="h4" margin="x-small" align="left" sub="false"]About this project[/ac_page_header][vc_column_text font="normal"]Ut feugiat accumsan massa ut luctus. Ut mollis ac felis et varius. Integer dolor est, porttitor vel augue sit amet, molestie lobortis mi. Praesent risus nibh, convallis et pretium eget, consequat nec justo. Sed sagittis neque lorem, vitae lobortis purus luctus nec. Ut tempor sem a velit dapibus, sit amet consectetur urna auctor. In hac habitasse platea dictumst.[/vc_column_text][vc_column_text font="normal" class="ac-no-margin meta"]<strong>Client:<br></strong>Awesome Studio Inc.&nbsp;[ac_divider type="line" align="center" &nbsp;width="full"][/ac_divider]<strong>Task:&nbsp;<br></strong>Website and Identity redesign.[ac_divider type="line" align="center" width="full"][/ac_divider]<strong>Skills:&nbsp;<br></strong>Photoshop, HTML, CSS, Javascript.[ac_divider type="line" align="center" width="full"][/ac_divider][/vc_column_text][/vc_column][/vc_row]\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'field_portfolio_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'68\',
          ),
          array(
            \'tid\' => \'127\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'nodemeta\' => array(
        \'thumb\' => array(
          \'type\' => \'image\',
          \'media\' => array(
            array(
              \'fid\' => \'632\',
            ),
          ),
          \'link_type\' => \'lightbox_link\',
          \'link_image\' => array(
            \'fid\' => \'0\',
          ),
          \'link_video\' => array(
            \'fid\' => \'0\',
          ),
          \'link_url\' => \'\',
        ),
        \'media\' => array(
          \'add_thumbs\' => \'Add another Image\',
        ),
        \'preview\' => array(
          \'use_thumb\' => 1,
          \'type\' => \'\',
          \'add_prev_item\' => \'Add another preview\',
        ),
        \'misc\' => array(
          \'excerpt\' => array(
            \'value\' => \'At vero eos et accusam et justo duo dolores et ea rebum. Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet .\',
            \'format\' => \'full_html\',
          ),
          \'link\' => \'http://themeforest.net/user/_acquiathemes\',
          \'link_title\' => \'\',
          \'layout\' => \'left\',
          \'custom_frame\' => 0,
          \'frame\' => \'\',
          \'view\' => \'list\',
          \'display\' => \'standard\',
          \'columns\' => \'1\',
          \'spaced\' => 0,
          \'meta\' => 0,
          \'social\' => 1,
        ),
        \'hero_style\' => array(
          \'enabled\' => 0,
          \'disabled\' => 0,
          \'style\' => \'fancy\',
          \'bg_type\' => \'dark\',
          \'bg\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_style\' => \'\',
          \'bg_repeat\' => \'no-repeat\',
          \'height\' => \'\',
          \'title_hide\' => 0,
          \'title\' => \'\',
          \'subtitle\' => \'\',
          \'breadcrumb_style\' => \'fancy\',
        ),
        \'header_slider\' => array(
          \'hs-enabled\' => 0,
          \'bg_fallback\' => array(
            \'fid\' => \'0\',
          ),
          \'bg_fallback_style\' => \'\',
          \'slid\' => \'6\',
        ),
        \'header_style\' => array(
          \'header-enabled\' => 0,
          \'transparent_header\' => 0,
          \'tr_bg_type\' => \'light\',
          \'tr_depth\' => \'full\',
          \'boxed_page\' => 0,
          \'header_layout\' => \'\',
          \'main_menu_style\' => \'\',
        ),
        \'node_layout\' => \'no-sidebars\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1391936782\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'acquiathemes\',
      \'picture\' => \'643\',
      \'data\' => \'a:1:{s:7:"contact";i:0;}\',
      \'path\' => array(
        \'pid\' => \'246\',
        \'source\' => \'node/85\',
        \'alias\' => \'portfolio/black-white-photography\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
