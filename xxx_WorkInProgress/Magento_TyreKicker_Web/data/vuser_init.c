/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 1362
   ------------------------------------------------------------------------------- */

vuser_init()
{

	/*1: Navigate to "http://89.238.153.133/index.php"*/

	lr_start_transaction("Magento_010_OpenHomePage");

	web_add_cookie("external_no_cache=1; DOMAIN=89.238.153.133");

	web_url("index.php", 
		"URL=http://89.238.153.133/index.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/skin/frontend/default/default/images/media/best_selling_img05.jpg", ENDITEM, 
		"Url=/skin/frontend/default/default/images/ph_callout_left_top.gif", ENDITEM, 
		"Url=/skin/frontend/default/default/images/media/col_right_callout.jpg", ENDITEM, 
		"Url=/skin/frontend/default/default/images/btn_search.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/bkg_form-search.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/logo.gif", ENDITEM, 
		"Url=/skin/frontend/default/default/images/media/best_selling_img01.jpg", ENDITEM, 
		"Url=/skin/frontend/default/default/images/ph_callout_left_rebel.jpg", ENDITEM, 
		"Url=/skin/frontend/default/default/images/home_main_callout.jpg", ENDITEM, 
		"Url=/skin/frontend/default/default/images/media/best_selling_img04.jpg", ENDITEM, 
		"Url=/skin/frontend/default/default/images/media/best_selling_img02.jpg", ENDITEM, 
		"Url=/skin/frontend/default/default/images/free_shipping_callout.jpg", ENDITEM, 
		"Url=/skin/frontend/default/default/images/media/best_selling_img06.jpg", ENDITEM, 
		"Url=/skin/frontend/default/default/images/bkg_body.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/media/best_selling_img03.jpg", ENDITEM, 
		"Url=/skin/frontend/default/default/images/bkg_pipe1.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/bkg_header.jpg", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/bkg_nav0.jpg", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/bkg_nav1.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/bkg_nav2.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/bkg_main1.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/bkg_block-title.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/bkg_main2.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/i_block-tags.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/bkg_block-actions.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/best_selling_tr_odd_bg.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/best_selling_tr_even_bg.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/i_block-list.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/i_block-cart.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/i_block-poll.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/bkg_pipe2.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=https://www.paypalobjects.com/en_GB/i/bnr/bnr_nowAccepting_150x60.gif", ENDITEM, 
		"Url=/skin/frontend/default/default/images/bkg_toolbar.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/bkg_grid.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/bkg_rating.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/bkg_block-layered-title.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/bkg_block-layered1.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/bkg_block-layered-dt.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/bkg_block-layered-dd.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/i_block-subscribe.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/bkg_divider1.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/slider_bg.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/bkg_product-view.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/magnifier_handle.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/bkg_pipe3.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/bkg_product_collateral.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/i_tag_add.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/i_block-viewed.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		"Url=/skin/frontend/default/default/images/i_block-related.gif", "Referer=http://89.238.153.133/skin/frontend/default/default/css/styles.css", ENDITEM, 
		LAST);

	lr_end_transaction("Magento_010_OpenHomePage",LR_AUTO);

	/*3.1: Type LR.getParam("pSearchTerm") in Search textbox*/

	/* Dynamic Parameter - Name : pSearchTerm, Value : t-shirt */

	web_url("suggest", 
		"URL=http://89.238.153.133/index.php/catalogsearch/ajax/suggest/?q=t-s", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_url("suggest_2", 
		"URL=http://89.238.153.133/index.php/catalogsearch/ajax/suggest/?q=t-shirt", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("Magento_020_ProductSearch");

	/*3.2: Press "Enter" key on Search textbox*/

	web_url("result", 
		"URL=http://89.238.153.133/index.php/catalogsearch/result/?q=t-shirt", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/skin/frontend/default/default/images/i_desc_arrow.gif", "Referer=http://89.238.153.133/index.php/catalogsearch/result/?q=t-shirt", ENDITEM, 
		"Url=/media/catalog/product/cache/1/small_image/135x/9df78eab33525d08d6e5fb8d27136e95/n/i/nine-west-women-s-lucero-pump.jpg", "Referer=http://89.238.153.133/index.php/catalogsearch/result/?q=t-shirt", ENDITEM, 
		"Url=/media/catalog/product/cache/1/small_image/135x/9df78eab33525d08d6e5fb8d27136e95/c/o/coalesce-functioning-on-impatience-t-shirt-1.jpg", "Referer=http://89.238.153.133/index.php/catalogsearch/result/?q=t-shirt", ENDITEM, 
		"Url=/media/catalog/product/cache/1/small_image/135x/9df78eab33525d08d6e5fb8d27136e95/z/o/zolof-the-rock-and-roll-destroyer-lol-cat-t-shirt.jpg", "Referer=http://89.238.153.133/index.php/catalogsearch/result/?q=t-shirt", ENDITEM, 
		"Url=/media/catalog/product/cache/1/small_image/135x/9df78eab33525d08d6e5fb8d27136e95/t/h/the-only-children-paisley-t-shirt.jpg", "Referer=http://89.238.153.133/index.php/catalogsearch/result/?q=t-shirt", ENDITEM, 
		"Url=/skin/frontend/default/default/images/media/col_left_callout.jpg", "Referer=http://89.238.153.133/index.php/catalogsearch/result/?q=t-shirt", ENDITEM, 
		LAST);

	lr_end_transaction("Magento_020_ProductSearch",LR_AUTO);

	lr_start_transaction("Magento_030_SelectItem");

	/*3.3: Click on First Product link*/

	web_url("nine-west-women-s-lucero-pump.html", 
		"URL=http://89.238.153.133/index.php/nine-west-women-s-lucero-pump.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/catalogsearch/result/?q=t-shirt", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../skin/frontend/default/default/images/slider_btn_zoom_out.gif", ENDITEM, 
		"Url=../media/catalog/product/cache/1/thumbnail/56x/9df78eab33525d08d6e5fb8d27136e95/n/i/nine-west-women-s-lucero-pump-1.jpg", ENDITEM, 
		"Url=../skin/frontend/default/default/images/slider_btn_zoom_in.gif", ENDITEM, 
		"Url=../media/catalog/product/cache/1/thumbnail/56x/9df78eab33525d08d6e5fb8d27136e95/n/i/nine-west-women-s-lucero-pump-2.jpg", ENDITEM, 
		"Url=../media/catalog/product/cache/1/small_image/125x/9df78eab33525d08d6e5fb8d27136e95/s/t/steven-by-steve-madden-pryme-pump.jpg", ENDITEM, 
		"Url=../media/catalog/product/cache/1/small_image/125x/9df78eab33525d08d6e5fb8d27136e95/a/n/anashria-womens-premier-leather-sandal.jpg", ENDITEM, 
		"Url=../media/catalog/product/cache/1/image/9df78eab33525d08d6e5fb8d27136e95/n/i/nine-west-women-s-lucero-pump.jpg", ENDITEM, 
		LAST);

	lr_end_transaction("Magento_030_SelectItem",LR_AUTO);

	/*3.1: Type LR.getParam("pSearchTerm") in Search textbox*/

	/* Dynamic Parameter - Name : pSearchTerm, Value : shoes */

	web_url("suggest_3", 
		"URL=http://89.238.153.133/index.php/catalogsearch/ajax/suggest/?q=sho", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/nine-west-women-s-lucero-pump.html", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("suggest_4", 
		"URL=http://89.238.153.133/index.php/catalogsearch/ajax/suggest/?q=shoes", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/nine-west-women-s-lucero-pump.html", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("Magento_020_ProductSearch");

	/*3.2: Press "Enter" key on Search textbox*/

	web_url("result_2", 
		"URL=http://89.238.153.133/index.php/catalogsearch/result/?q=shoes", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/nine-west-women-s-lucero-pump.html", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/media/catalog/product/cache/1/small_image/135x/9df78eab33525d08d6e5fb8d27136e95/c/n/cn-clogs-beach-garden-clog.jpg", "Referer=http://89.238.153.133/index.php/catalogsearch/result/?q=shoes", ENDITEM, 
		"Url=/media/catalog/product/cache/1/small_image/135x/9df78eab33525d08d6e5fb8d27136e95/e/c/ecco-womens-golf-flexor-golf-shoe.jpg", "Referer=http://89.238.153.133/index.php/catalogsearch/result/?q=shoes", ENDITEM, 
		LAST);

	lr_end_transaction("Magento_020_ProductSearch",LR_AUTO);

	lr_start_transaction("Magento_030_SelectItem");

	/*3.3: Click on First Product link*/

	web_url("cn-clogs-beach-garden-clog.html", 
		"URL=http://89.238.153.133/index.php/cn-clogs-beach-garden-clog.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/catalogsearch/result/?q=shoes", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../media/catalog/product/cache/1/thumbnail/56x/9df78eab33525d08d6e5fb8d27136e95/c/n/cn-clogs-beach-garden-clog-1.jpg", ENDITEM, 
		"Url=../media/catalog/product/cache/1/thumbnail/56x/9df78eab33525d08d6e5fb8d27136e95/c/n/cn-clogs-beach-garden-clog-2.jpg", ENDITEM, 
		"Url=../media/catalog/product/cache/1/image/9df78eab33525d08d6e5fb8d27136e95/c/n/cn-clogs-beach-garden-clog.jpg", ENDITEM, 
		LAST);

	lr_end_transaction("Magento_030_SelectItem",LR_AUTO);

	/*3.1: Type LR.getParam("pSearchTerm") in Search textbox*/

	/* Dynamic Parameter - Name : pSearchTerm, Value : chair */

	web_url("suggest_5", 
		"URL=http://89.238.153.133/index.php/catalogsearch/ajax/suggest/?q=chair", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/cn-clogs-beach-garden-clog.html", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("Magento_020_ProductSearch");

	/*3.2: Press "Enter" key on Search textbox*/

	web_url("result_3", 
		"URL=http://89.238.153.133/index.php/catalogsearch/result/?q=chair", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/cn-clogs-beach-garden-clog.html", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/media/catalog/product/cache/1/small_image/135x/9df78eab33525d08d6e5fb8d27136e95/m/a/magento-red-furniture-set.jpg", "Referer=http://89.238.153.133/index.php/catalogsearch/result/?q=chair", ENDITEM, 
		"Url=/media/catalog/product/cache/1/small_image/135x/9df78eab33525d08d6e5fb8d27136e95/c/h/chair.jpg", "Referer=http://89.238.153.133/index.php/catalogsearch/result/?q=chair", ENDITEM, 
		LAST);

	lr_end_transaction("Magento_020_ProductSearch",LR_AUTO);

	lr_start_transaction("Magento_030_SelectItem");

	/*3.3: Click on First Product link*/

	web_url("chair.html", 
		"URL=http://89.238.153.133/index.php/chair.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/catalogsearch/result/?q=chair", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../media/catalog/product/cache/1/small_image/125x/9df78eab33525d08d6e5fb8d27136e95/m/a/magento-red-furniture-set.jpg", ENDITEM, 
		"Url=../media/catalog/product/cache/1/thumbnail/50x/9df78eab33525d08d6e5fb8d27136e95/c/o/couch.jpg", ENDITEM, 
		"Url=../media/catalog/product/cache/1/image/9df78eab33525d08d6e5fb8d27136e95/c/h/chair.jpg", ENDITEM, 
		LAST);

	lr_end_transaction("Magento_030_SelectItem",LR_AUTO);

	/*3.1: Type LR.getParam("pSearchTerm") in Search textbox*/

	/* Dynamic Parameter - Name : pSearchTerm, Value : bed */

	web_url("suggest_6", 
		"URL=http://89.238.153.133/index.php/catalogsearch/ajax/suggest/?q=bed", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/chair.html", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("Magento_020_ProductSearch");

	/*3.2: Press "Enter" key on Search textbox*/

	web_url("result_4", 
		"URL=http://89.238.153.133/index.php/catalogsearch/result/?q=bed", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/chair.html", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/media/catalog/product/cache/1/small_image/135x/9df78eab33525d08d6e5fb8d27136e95/a/t/at-t-8525-pda-1.jpg", "Referer=http://89.238.153.133/index.php/catalogsearch/result/?q=bed", ENDITEM, 
		"Url=/media/catalog/product/cache/1/small_image/135x/9df78eab33525d08d6e5fb8d27136e95/a/k/akio-dresser.jpg", "Referer=http://89.238.153.133/index.php/catalogsearch/result/?q=bed", ENDITEM, 
		"Url=/media/catalog/product/cache/1/small_image/135x/9df78eab33525d08d6e5fb8d27136e95/b/a/barcelona-bamboo-platform-bed.jpg", "Referer=http://89.238.153.133/index.php/catalogsearch/result/?q=bed", ENDITEM, 
		"Url=/media/catalog/product/cache/1/small_image/135x/9df78eab33525d08d6e5fb8d27136e95/c/o/couch.jpg", "Referer=http://89.238.153.133/index.php/catalogsearch/result/?q=bed", ENDITEM, 
		LAST);

	lr_end_transaction("Magento_020_ProductSearch",LR_AUTO);

	lr_start_transaction("Magento_030_SelectItem");

	/*3.3: Click on First Product link*/

	web_url("atandt-8525-pda.html", 
		"URL=http://89.238.153.133/index.php/atandt-8525-pda.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/catalogsearch/result/?q=bed", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../media/catalog/product/cache/1/thumbnail/56x/9df78eab33525d08d6e5fb8d27136e95/a/t/at-t-8525-pda.jpg", ENDITEM, 
		"Url=../media/catalog/product/cache/1/small_image/125x/9df78eab33525d08d6e5fb8d27136e95/c/a/canon-powershot-a630-8mp-digital-camera-with-4x-optical-zoom-2.jpg", ENDITEM, 
		"Url=../media/catalog/product/cache/1/small_image/125x/9df78eab33525d08d6e5fb8d27136e95/a/s/asics-men-s-gel-kayano-xii-2.jpg", ENDITEM, 
		"Url=../media/catalog/product/cache/1/small_image/125x/9df78eab33525d08d6e5fb8d27136e95/a/k/akio-dresser.jpg", ENDITEM, 
		"Url=../media/catalog/product/cache/1/thumbnail/50x/9df78eab33525d08d6e5fb8d27136e95/b/l/blackberry-8100-pearl-2.jpg", ENDITEM, 
		"Url=../media/catalog/product/cache/1/thumbnail/50x/9df78eab33525d08d6e5fb8d27136e95/s/o/sony-ericsson-w810i-2.jpg", ENDITEM, 
		"Url=../media/catalog/product/cache/1/thumbnail/50x/9df78eab33525d08d6e5fb8d27136e95/n/o/nokia-2610-phone-2.jpg", ENDITEM, 
		"Url=../media/catalog/product/cache/1/image/9df78eab33525d08d6e5fb8d27136e95/a/t/at-t-8525-pda-1.jpg", ENDITEM, 
		LAST);

	lr_end_transaction("Magento_030_SelectItem",LR_AUTO);

	/*3.1: Type LR.getParam("pSearchTerm") in Search textbox*/

	/* Dynamic Parameter - Name : pSearchTerm, Value : t-shirt */

	web_url("suggest_7", 
		"URL=http://89.238.153.133/index.php/catalogsearch/ajax/suggest/?q=t-", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/atandt-8525-pda.html", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("suggest_8", 
		"URL=http://89.238.153.133/index.php/catalogsearch/ajax/suggest/?q=t-shirt", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/atandt-8525-pda.html", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("Magento_020_ProductSearch");

	/*3.2: Press "Enter" key on Search textbox*/

	web_url("result_5", 
		"URL=http://89.238.153.133/index.php/catalogsearch/result/?q=t-shirt", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/atandt-8525-pda.html", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Magento_020_ProductSearch",LR_AUTO);

	lr_start_transaction("Magento_030_SelectItem");

	/*3.3: Click on First Product link*/

	web_url("nine-west-women-s-lucero-pump.html_2", 
		"URL=http://89.238.153.133/index.php/nine-west-women-s-lucero-pump.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/catalogsearch/result/?q=t-shirt", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Magento_030_SelectItem",LR_AUTO);

	lr_start_transaction("Magento_040_ReturnHome");

	/*5: Click on Magento Commerce image*/

	web_url("index.php_2", 
		"URL=http://89.238.153.133/index.php/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/nine-west-women-s-lucero-pump.html", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Magento_040_ReturnHome",LR_AUTO);

	lr_start_transaction("Magento_050_SelectRandomLink");

	/*6.1: Select option */

	web_url("42", 
		"URL=http://89.238.153.133/index.php/tag/product/list/tagId/42/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/skin/frontend/default/default/images/i_asc_arrow.gif", ENDITEM, 
		"Url=/media/catalog/product/cache/1/small_image/135x/9df78eab33525d08d6e5fb8d27136e95/n/o/nokia-2610-phone-2.jpg", ENDITEM, 
		"Url=/media/catalog/product/cache/1/small_image/135x/9df78eab33525d08d6e5fb8d27136e95/b/l/blackberry-8100-pearl-2.jpg", ENDITEM, 
		"Url=/media/catalog/product/cache/1/small_image/135x/9df78eab33525d08d6e5fb8d27136e95/s/o/sony-ericsson-w810i-2.jpg", ENDITEM, 
		LAST);

	lr_end_transaction("Magento_050_SelectRandomLink",LR_AUTO);

	lr_start_transaction("Magento_050_SelectRandomLink");

	/*6.1: Select option */

	web_url("42_2", 
		"URL=http://89.238.153.133/index.php/tag/product/list/tagId/42/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/tag/product/list/tagId/42/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Magento_050_SelectRandomLink",LR_AUTO);

	lr_start_transaction("Magento_050_SelectRandomLink");

	/*6.1: Select option */

	web_url("42_3", 
		"URL=http://89.238.153.133/index.php/tag/product/list/tagId/42/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/tag/product/list/tagId/42/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Magento_050_SelectRandomLink",LR_AUTO);

	lr_start_transaction("Magento_050_SelectRandomLink");

	/*6.1: Select option */

	web_url("42_4", 
		"URL=http://89.238.153.133/index.php/tag/product/list/tagId/42/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/tag/product/list/tagId/42/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Magento_050_SelectRandomLink",LR_AUTO);

	lr_start_transaction("Magento_050_SelectRandomLink");

	/*6.1: Select option */

	web_url("42_5", 
		"URL=http://89.238.153.133/index.php/tag/product/list/tagId/42/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/tag/product/list/tagId/42/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Magento_050_SelectRandomLink",LR_AUTO);

	lr_start_transaction("Magento_050_SelectRandomLink");

	/*6.1: Select option */

	web_url("42_6", 
		"URL=http://89.238.153.133/index.php/tag/product/list/tagId/42/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/tag/product/list/tagId/42/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Magento_050_SelectRandomLink",LR_AUTO);

	lr_start_transaction("Magento_050_SelectRandomLink");

	/*6.1: Select option */

	web_url("42_7", 
		"URL=http://89.238.153.133/index.php/tag/product/list/tagId/42/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/tag/product/list/tagId/42/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Magento_050_SelectRandomLink",LR_AUTO);

	lr_start_transaction("Magento_050_SelectRandomLink");

	/*6.1: Select option */

	web_url("42_8", 
		"URL=http://89.238.153.133/index.php/tag/product/list/tagId/42/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/tag/product/list/tagId/42/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Magento_050_SelectRandomLink",LR_AUTO);

	lr_start_transaction("Magento_050_SelectRandomLink");

	/*6.1: Select option */

	web_url("42_9", 
		"URL=http://89.238.153.133/index.php/tag/product/list/tagId/42/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/tag/product/list/tagId/42/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Magento_050_SelectRandomLink",LR_AUTO);

	lr_start_transaction("Magento_050_SelectRandomLink");

	/*6.1: Select option */

	web_url("42_10", 
		"URL=http://89.238.153.133/index.php/tag/product/list/tagId/42/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/tag/product/list/tagId/42/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Magento_050_SelectRandomLink",LR_AUTO);

	return 0;
}
