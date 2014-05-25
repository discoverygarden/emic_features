<?php
/**
 * @file
 * emic_features.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function emic_features_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'1\',
      \'uid\' => \'1\',
      \'title\' => \'Members\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'edc1cb05-6ac6-4ad3-8974-38e261efdd33\',
      \'nid\' => \'1\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1400882070\',
      \'changed\' => \'1400882070\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'21439854-781f-4925-9af5-bd2c49e6cd08\',
      \'revision_timestamp\' => \'1400882070\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Some text\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Some text</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(),
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
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1400882070\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'menu\' => NULL,
      \'path\' => FALSE,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'2\',
      \'uid\' => \'1\',
      \'title\' => \'Modernist Commons\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'5cfee84c-7459-4792-a263-9f5698e5c9ec\',
      \'nid\' => \'2\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1400882070\',
      \'changed\' => \'1400882070\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3d324b7c-5327-4bec-aba0-08215e4442a0\',
      \'revision_timestamp\' => \'1400882070\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Welcome to modernistcommons.ca, the EMiC project\'s digital collections and editing environment. This site has been designed to allow users to ingest images, process texts with optical character recognition software, upload born-digital content, perform markup on transcriptions and images, and display it in multiple viewers.\\r\\n\\r\\nThe commons integrates a number of open-source digital tools (Islandora, CWRC Writer, Shared Canvas and the Austese Project). EMiC encourages users of this site to document your work with these tools and share your ideas, wish lists, and recommendations with us at emic@dal.ca.\\r\\n\\r\\nFor more information about EMiC\'s digital initiatives, take a tour of the project on our main website.",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Welcome to modernistcommons.ca, the EMiC project\'s digital collections and editing environment. This site has been designed to allow users to ingest images, process texts with optical character recognition software, upload born-digital content, perform markup on transcriptions and images, and display it in multiple viewers.</p>\\n<p>The commons integrates a number of open-source digital tools (Islandora, CWRC Writer, Shared Canvas and the Austese Project). EMiC encourages users of this site to document your work with these tools and share your ideas, wish lists, and recommendations with us at <a href=\\"mailto:emic@dal.ca\\">emic@dal.ca</a>.</p>\\n<p>For more information about EMiC\'s digital initiatives, take a tour of the project on our main website.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1\',
            \'uid\' => \'1\',
            \'filename\' => \'interiors-within-interiors.jpg\',
            \'uri\' => \'public://interiors-within-interiors.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'89209\',
            \'status\' => \'1\',
            \'timestamp\' => \'1400882070\',
            \'uuid\' => \'c9406e4f-8090-432d-b5fd-3753063ac17e\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'450\',
            \'height\' => \'329\',
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
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1400882070\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'menu\' => NULL,
      \'path\' => FALSE,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'3\',
      \'uid\' => \'1\',
      \'title\' => \'Documentation\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'6e569d69-a8ae-407b-9ee0-da72d5a6075f\',
      \'nid\' => \'3\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1400882070\',
      \'changed\' => \'1400882070\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5c311880-223e-49e0-8279-fce5f1f85971\',
      \'revision_timestamp\' => \'1400882070\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Some text\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Some text</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(),
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
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1400882070\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'menu\' => NULL,
      \'path\' => FALSE,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'4\',
      \'uid\' => \'1\',
      \'title\' => \'Lab\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'cf0a0bd0-6210-4d06-8ab7-4c9e729da2b2\',
      \'nid\' => \'4\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1400882070\',
      \'changed\' => \'1400882070\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e4693f7f-f13f-4ed5-933c-b02f8c8cb732\',
      \'revision_timestamp\' => \'1400882070\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Some text\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Some text</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(),
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
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1400882070\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'menu\' => NULL,
      \'path\' => FALSE,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
