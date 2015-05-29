<div<?php print $attributes; ?>>
	<?php if (isset($page['topbar'])): ?>
		<div id="l-topbar" class="l-topbar">
			<div class="container">
				<div class="container-i">
					<?php print render($page['topbar']); ?>
				</div>
			</div>
		</div>
	<?php endif; ?>
	
  <header id="l-header" class="l-header l-header-main" role="banner">
    <div class="container h-container">
			<div class="ac-table">
				
					<div class="l-branding site-branding">
						<?php if ($logo): ?>
							<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo" class="logo site-branding__logo"><?php print $logo; ?></a>
						<?php endif; ?>
						<?php if ($site_name): ?>
							<a href="<?php print $front_page; ?>" class="site-branding__name" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
						<?php endif; ?>
						<?php if ($site_slogan): ?>
							<h2 class="site-branding__slogan"><?php print $site_slogan; ?></h2>
						<?php endif; ?>
					</div>
			
					<?php if ($h_layout != 'left'): ?>
				</div>
			</div>
						<div id="header-sub" class="header-sub">
								<div class="container">
									<div class="header-sub-i">
							<?php endif; ?>
							<?php print render($page['navigation']); ?>
							<?php print render($page['header']); ?>
							<?php if ($h_layout != 'left'): ?>
									</div>
								</div>
						</div>
					<?php else: ?>
				</div>
			</div>
					<?php endif; ?>
  </header>

    <?php if (!empty($page['slider'])): ?>
    <div class="l-slider-wrapper">
			<div class="l-slider">
				<?php print render($page['slider']); ?>
			</div>
    </div>
  <?php endif; ?>

  <?php if (!isset($ac_hero_title_hide) && !empty($page['highlighted'])): ?>
    <div <?php print drupal_attributes($hero_attrs)?>>
      <div class="container">
				<div class='ac-container-wrap'>
					<?php print render($page['highlighted']); ?>
				</div>
      </div>
    </div>
  <?php endif; ?>
	
	<?php if (render($page['content_top']) != ''): ?>
  <div class="l-content-top-wrapper">
    <div class="container">
			<div class='ac-container-wrap'>
				<?php print render($page['content_top']); ?>
			</div>
    </div>
  </div>
	<?php endif; ?>
	
  <div class="main-wrap">
		<div class="l-main container ac-fullwidth">
				<a id="main-content"></a>
				<div class="l-content l-region" role="main">
					<div class="ac-container container">
						<?php print render($tabs); ?>
						<?php print $messages; ?>
						<?php print render($page['help']); ?>
					</div>

				
					<?php if (isset($ac_hero_title_hide) && $title): ?>
						<?php print render($title_prefix); ?>
						<div class="page-title-container">
							<h1 class='title page-title'><span><?php print $title; ?></span></h1>
							<div class="ac-divider ac-full ac-type-thick_solid ac-align-center clearfix"><div class="divider-inner"></div></div>
						</div>
						<?php print render($title_suffix); ?>
					<?php endif; ?>
					
					<?php if ($action_links): ?>
						<ul class="action-links"><?php print render($action_links); ?></ul>
					<?php endif; ?>
					<?php print render($page['content']); ?>
					<?php if (!empty($feed_icons)):?>
						<?php print $feed_icons; ?>
					<?php endif?>
				</div>
				<?php print render($page['sidebar_first']); ?>
				<?php print render($page['sidebar_second']); ?>
		</div>
  </div>
	
  <?php if (render($page['content_bottom']) != ''): ?>
  <div class="l-content-bottom-wrapper">
    <div class="container">
      <?php print render($page['content_bottom']); ?>
    </div>
  </div>
  <?php endif; ?>
	
  <?php if (render($page['footer']) != ''): ?>
  <footer class="l-footer-wrapper" role="contentinfo">
    <div class="container">
			<div class='ac-container-wrap'>
				<?php print render($page['footer']); ?>
			</div>
    </div>
  </footer>
  <?php endif; ?>
  
  <?php if (render($page['sub_footer']) != ''): ?>
  <div class="l-sub-footer-wrapper">
    <div class="container">
			<div class='ac-container-wrap'>
      <?php print render($page['sub_footer']); ?>
			</div>
    </div>
  </div>
  <?php endif; ?>
  
</div>
